// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_pkg:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LANE_INFO__STRUCT_HPP_
#define INTERFACES_PKG__MSG__DETAIL__LANE_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces_pkg__msg__LaneInfo __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_pkg__msg__LaneInfo __declspec(deprecated)
#endif

namespace interfaces_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneInfo_
{
  using Type = LaneInfo_<ContainerAllocator>;

  explicit LaneInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slope = 0.0f;
      this->target_x = 0ll;
      this->target_y = 0ll;
      this->curv = 0.0f;
      this->inter = 0ll;
    }
  }

  explicit LaneInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slope = 0.0f;
      this->target_x = 0ll;
      this->target_y = 0ll;
      this->curv = 0.0f;
      this->inter = 0ll;
    }
  }

  // field types and members
  using _slope_type =
    float;
  _slope_type slope;
  using _target_x_type =
    int64_t;
  _target_x_type target_x;
  using _target_y_type =
    int64_t;
  _target_y_type target_y;
  using _curv_type =
    float;
  _curv_type curv;
  using _inter_type =
    int64_t;
  _inter_type inter;

  // setters for named parameter idiom
  Type & set__slope(
    const float & _arg)
  {
    this->slope = _arg;
    return *this;
  }
  Type & set__target_x(
    const int64_t & _arg)
  {
    this->target_x = _arg;
    return *this;
  }
  Type & set__target_y(
    const int64_t & _arg)
  {
    this->target_y = _arg;
    return *this;
  }
  Type & set__curv(
    const float & _arg)
  {
    this->curv = _arg;
    return *this;
  }
  Type & set__inter(
    const int64_t & _arg)
  {
    this->inter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_pkg::msg::LaneInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_pkg::msg::LaneInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_pkg::msg::LaneInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_pkg::msg::LaneInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::LaneInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::LaneInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::LaneInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::LaneInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_pkg::msg::LaneInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_pkg::msg::LaneInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_pkg__msg__LaneInfo
    std::shared_ptr<interfaces_pkg::msg::LaneInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_pkg__msg__LaneInfo
    std::shared_ptr<interfaces_pkg::msg::LaneInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneInfo_ & other) const
  {
    if (this->slope != other.slope) {
      return false;
    }
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    if (this->curv != other.curv) {
      return false;
    }
    if (this->inter != other.inter) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneInfo_

// alias to use template instance with default allocator
using LaneInfo =
  interfaces_pkg::msg::LaneInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__LANE_INFO__STRUCT_HPP_