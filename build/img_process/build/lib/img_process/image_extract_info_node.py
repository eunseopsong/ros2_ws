# import os
import cv2
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy
from rclpy.qos import QoSDurabilityPolicy
from rclpy.qos import QoSReliabilityPolicy
from sensor_msgs.msg import Image 
from cv_bridge import CvBridge 
from interfaces_pkg.msg import LaneInfo
import numpy as np
from .lib import extract_road_info as RF
from .lib import filter_image as FILTER

# os.environ['QT_QPA_PLATFORM'] = 'wayland'

#---TODO-------------------------------------
SUB_TOPIC_NAME = "topic_raw_img"
PUB_TOPIC_NAME = "topic_lane_info"

# PPT 자료 참고
lane_horizontal_thesh_degree = 18
lane_width_pixel = 300
target_point_detection_height = 300

TIMER = 0.01
QUE = 1
#--------------------------------------------

class ExtractInfo():
  def __init__(self):
    self.past_angle = 0
    self.modified_angle = 0

  def process(self, img):

    '''
    주행 도로의 기울기, 주행 도로의 목표점의 좌표를 추출하는 노드

      ---------------------------------------------------------------------------
      <받는 데이터>                                                                  
        img : mask처리된 이미지  

      <변수>
        None

      * dominant_gradient, extract_road_center 함수를 활용하여 아래의 정보들을 publish
        * road_gradient : mask된 도로 영상에서의 gradient
        * road_target_point_x, road_target_point_y : 주행 도로의 목표점의 x,y 좌표
      ---------------------------------------------------------------------------
      
    '''
    ### Start (여기만 수정하세요)

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
    # cv2.imshow('mask_white', mask_white)

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

    lines = cv2.HoughLinesP(combined_mask, 1, np.pi / 180, threshold=100, minLineLength=100, maxLineGap=5)

    vertical_lines = []
    angles = []
    if lines is not None:
      for line in lines:
        x1, y1, x2, y2 = line[0]
        dx = x2 - x1
        dy = y2 - y1

        if dx == 0:
          angle = 90
        elif dy == 0:
          angle = 0
        else:
          angle = np.degrees(np.arctan2(dy, dx))
        
        if angle > 0:  #수직선을 기준으로 변환
          self.modified_angle = angle - 90
        elif angle <= 0:
          self.modified_angle = 90 + angle
            
        if np.abs(self.modified_angle) <= 20:  # 수직에 가까운 선만 필터링
          vertical_lines.append(line)
          angles.append(self.modified_angle)

    if angles:
        average_angle = np.mean(angles)
    else:
        average_angle = 0
  
    
    present_angle = average_angle
    if abs(present_angle - self.past_angle) > 1:
      average_angle = self.past_angle
      if present_angle > self.past_angle:
        present_angle = self.past_angle + 1
      else:
        present_angle = self.past_angle - 1
    self.past_angle = present_angle
    
    # with open('/home/walter/ros2_ws/src/img_process/img_process/average_angle', 'a') as file:
    #   file.write(f"{average_angle}\n")
    
    # line_image = np.zeros_like(dilated)
    # for line in vertical_lines:
    #     x1, y1, x2, y2 = line[0]
    #     cv2.line(line_image, (x1, y1), (x2, y2), (0, 255, 0), 10)

    # combined_image = cv2.addWeighted(dilated, 0.8, line_image, 1, 1)
    # cv2.imshow('combined_img', combined_image)
    print (average_angle)
    ### END 
    
    return float(average_angle)

class ExtractInfoNode(Node):
  def __init__(self, sub_topic=SUB_TOPIC_NAME, pub_topic=PUB_TOPIC_NAME, timer=TIMER, que=QUE):
    super().__init__('node_info_extraction')
    
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
    self.detect = ExtractInfo()
    
    image_qos_profile = QoSProfile(reliability=QoSReliabilityPolicy.RELIABLE, history=QoSHistoryPolicy.KEEP_LAST, durability=QoSDurabilityPolicy.VOLATILE, depth=self.que)
    self.subscription = self.create_subscription(Image, self.sub_topic, self.image_callback, image_qos_profile)

    self.publisher_ = self.create_publisher(LaneInfo, self.pub_topic , self.que)
    self.timer = self.create_timer(self.timer_period, self.timer_callback)

  def image_callback(self, data):
    self.is_running = True
    current_frame = self.br.imgmsg_to_cv2(data)
    
    grad = self.detect.process(current_frame)
    
    lane = LaneInfo()
    lane.slope = grad

    self.publisher_.publish(lane)

  def timer_callback(self):
    if not self.is_running:
      self.get_logger().info('Not published yet: "%s"' % self.sub_topic)
      
def main(args=None):
    rclpy.init(args=args)
    node = ExtractInfoNode()
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
