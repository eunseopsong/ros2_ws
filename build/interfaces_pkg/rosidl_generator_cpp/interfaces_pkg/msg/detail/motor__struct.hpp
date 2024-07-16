// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_pkg:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__MOTOR__STRUCT_HPP_
#define INTERFACES_PKG__MSG__DETAIL__MOTOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces_pkg__msg__Motor __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_pkg__msg__Motor __declspec(deprecated)
#endif

namespace interfaces_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motor_
{
  using Type = Motor_<ContainerAllocator>;

  explicit Motor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_volt = 0l;
      this->rear_volt = 0l;
      this->angle = 0l;
      this->left_speed = 0l;
      this->right_speed = 0l;
      this->potentiometer = 0l;
    }
  }

  explicit Motor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_volt = 0l;
      this->rear_volt = 0l;
      this->angle = 0l;
      this->left_speed = 0l;
      this->right_speed = 0l;
      this->potentiometer = 0l;
    }
  }

  // field types and members
  using _front_volt_type =
    int32_t;
  _front_volt_type front_volt;
  using _rear_volt_type =
    int32_t;
  _rear_volt_type rear_volt;
  using _angle_type =
    int32_t;
  _angle_type angle;
  using _left_speed_type =
    int32_t;
  _left_speed_type left_speed;
  using _right_speed_type =
    int32_t;
  _right_speed_type right_speed;
  using _potentiometer_type =
    int32_t;
  _potentiometer_type potentiometer;

  // setters for named parameter idiom
  Type & set__front_volt(
    const int32_t & _arg)
  {
    this->front_volt = _arg;
    return *this;
  }
  Type & set__rear_volt(
    const int32_t & _arg)
  {
    this->rear_volt = _arg;
    return *this;
  }
  Type & set__angle(
    const int32_t & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__left_speed(
    const int32_t & _arg)
  {
    this->left_speed = _arg;
    return *this;
  }
  Type & set__right_speed(
    const int32_t & _arg)
  {
    this->right_speed = _arg;
    return *this;
  }
  Type & set__potentiometer(
    const int32_t & _arg)
  {
    this->potentiometer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_pkg::msg::Motor_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_pkg::msg::Motor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_pkg::msg::Motor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_pkg::msg::Motor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::Motor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::Motor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::Motor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::Motor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_pkg::msg::Motor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_pkg::msg::Motor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_pkg__msg__Motor
    std::shared_ptr<interfaces_pkg::msg::Motor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_pkg__msg__Motor
    std::shared_ptr<interfaces_pkg::msg::Motor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motor_ & other) const
  {
    if (this->front_volt != other.front_volt) {
      return false;
    }
    if (this->rear_volt != other.rear_volt) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->left_speed != other.left_speed) {
      return false;
    }
    if (this->right_speed != other.right_speed) {
      return false;
    }
    if (this->potentiometer != other.potentiometer) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motor_

// alias to use template instance with default allocator
using Motor =
  interfaces_pkg::msg::Motor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__MOTOR__STRUCT_HPP_
