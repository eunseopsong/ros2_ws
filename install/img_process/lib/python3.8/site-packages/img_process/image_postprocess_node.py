import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy
from rclpy.qos import QoSDurabilityPolicy
from rclpy.qos import QoSReliabilityPolicy
from sensor_msgs.msg import Image 
from cv_bridge import CvBridge 
import cv2
import numpy as np

from .lib import filter_image as FILTER

#---TODO-------------------------------------
#SUB_TOPIC_NAME = "topic_raw_img"
SUB_TOPIC_NAME = "topic_masking_img"
PUB_TOPIC_NAME = "topic_postproc_img"

TIMER = 0.01
QUE = 1
#--------------------------------------------

class PostProcess():
  def __init__(self):
    pass

  def process(self, img):
    '''
    도로의 정보를 추출하기전에 모델 추론 영상에 대한 처리를 하는 노드
    
      ---------------------------------------------------------------------------
      <받는 데이터>                                                                  
        img : deeplearning model 추론 결과 이미지

      <변수>
        result_img : 최종 return해줘야하는 변수명

      *bird_eye view, roi 변환 함수, OpenCV 제공하는 blur, edge 함수를 활용하여 자유롭게 알고리즘 작성하시오.
        ex. 추론 이미지 -> bird_eye view 변환 -> blur 함수 -> gray 변환 함수 -> edge함수 -> roi 변환 함수
        (1). 현재 처리되는 화면을 확인하고싶으면, cv2.imshow()함수를 사용한다.
        (2). (1)을 사용할 시 cv2.waitkey()함수는 필수로 사용한다.

      ---------------------------------------------------------------------------
   
    '''
    (h, w) = (img.shape[0], img.shape[1])
    dst_mat = [[round(w * 0.3), round(h * 0.0)], [round(w * 0.7), round(h * 0.0)], [round(w * 0.7), h], [round(w * 0.3), h]]
    src_mat = [[210, 316],[430, 313], [501, 476], [155, 476]]
    # (img_wrapped, minverse)=warpping(img, src_mat, dst_mat)
    bird_img = FILTER.bird_convert(img, srcmat=src_mat, dstmat=dst_mat) 
    # ret,binart_image = cv2.threshold(bird_img, 0, 255, cv2.THRESH_BINARY)
    # img_blur = cv2.GaussianBlur(binart_image, (3,3),2.38)
    # img_gray = cv2.cvtColor(img_blur, cv2.COLOR_BGR2GRAY)
    # img_edge = cv2.Canny(img_gray, 110,180)
    # roi_img = FILTER.roi_rectangle_below(img_edge, 300)

    kernel = np.ones((4, 4), np.uint8)

    eroded = cv2.erode(bird_img, kernel, iterations=5)
    dilated = cv2.dilate(eroded, kernel, iterations=5)

    
    # result_img = roi_img
    img_gray = cv2.cvtColor(dilated, cv2.COLOR_BGR2GRAY)
    img_blur = cv2.GaussianBlur(img_gray, (5,5),0)
    edges = cv2.Canny(img_blur, 50, 150)

    # _, binary = cv2.threshold(img_blur, 185, 255, cv2.THRESH_BINARY)

    # kernel = np.ones((3, 3), np.uint8)
    # eroded = cv2.erode(binary, kernel, iterations=5)
    # dilated = cv2.dilate(eroded, kernel, iterations=5)
    # cv2.imshow('dilated', dilated)

    # edges = cv2.Canny(dilated, 50, 150)

    hsv = cv2.cvtColor(dilated, cv2.COLOR_BGR2HSV)
    lower_white = np.array([0, 0, 200])
    upper_white = np.array([200, 25, 255])
    mask_white = cv2.inRange(hsv, lower_white, upper_white)
    cv2.imshow('mask_white', mask_white)

    height, width = edges.shape
    mask = np.zeros_like(edges)
    polygon = np.array([[
        (0, 0),
        (0, height * 0.46),
        (width * 0.13, height),
        (width * 0.84, height),
        (width, height * 0.3),
        (width, 0)
    ]], np.int32)
    cv2.fillPoly(mask, polygon, 255)
    masked_edges = cv2.bitwise_and(edges, mask)
    masked_white = cv2.bitwise_and(mask_white, mask_white, mask=mask)

    combined_mask = cv2.bitwise_or(masked_edges, masked_white)

    # print('average_angle: ', average_angle)
    cv2.imshow('bird_image', dilated)
    # cv2.imshow('Hough_image', combined_image)
    # cv2.imshow('edges', edges)
    # cv2.imshow('lines', lines)
    # cv2.imshow('binart_image', binart_image)
    # cv2.imshow('img_blur', img_blur)
    # cv2.imshow('img_gray', img_gray)
    # cv2.imshow('img_edge', img_edge)
    # cv2.imshow('postprocess_image', result_img)
    cv2.waitKey(1)
    ### END 
    result_img = combined_mask
    
    return result_img

class ImgPostProcessNode(Node):
  def __init__(self, sub_topic=SUB_TOPIC_NAME, pub_topic=PUB_TOPIC_NAME, timer=TIMER, que=QUE):
    super().__init__('node_pub_postproc')
    
    self.declare_parameter('sub_topic', sub_topic)
    self.declare_parameter('pub_topic', pub_topic)
    self.declare_parameter('timer', timer)
    self.declare_parameter('que', que)
    
    self.sub_topic = self.get_parameter('sub_topic').get_parameter_value().string_value
    self.pub_topic = self.get_parameter('pub_topic').get_parameter_value().string_value
    self.timer_period = self.get_parameter('timer').get_parameter_value().double_value
    self.que = self.get_parameter('que').get_parameter_value().integer_value

    self.is_running = False
    self.br = CvBridge()
    self.post = PostProcess()
    
    image_qos_profile = QoSProfile(reliability=QoSReliabilityPolicy.RELIABLE, history=QoSHistoryPolicy.KEEP_LAST, durability=QoSDurabilityPolicy.VOLATILE, depth=self.que)
    self.subscription = self.create_subscription(Image, self.sub_topic, self.image_callback, image_qos_profile)

    self.publisher_ = self.create_publisher(Image, self.pub_topic , self.que)
    self.timer = self.create_timer(self.timer_period, self.timer_callback)

  def image_callback(self, data):
    self.is_running = True
    current_frame = self.br.imgmsg_to_cv2(data)
    processed_img = self.post.process(current_frame)
    self.publisher_.publish(self.br.cv2_to_imgmsg(processed_img))

  def timer_callback(self):
    if not self.is_running:
      self.get_logger().info('Not published yet: "%s"' % self.sub_topic)

def main(args=None):
    rclpy.init(args=args)
    node = ImgPostProcessNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("\n\nshutdown\n\n")
        pass
    node.destroy_node()
    cv2.destroyAllWindows()
    rclpy.shutdown()
  
if __name__ == '__main__':
    main()
