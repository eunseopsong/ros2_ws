// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_pkg:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LANE_INFO__BUILDER_HPP_
#define INTERFACES_PKG__MSG__DETAIL__LANE_INFO__BUILDER_HPP_

#include "interfaces_pkg/msg/detail/lane_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_pkg
{

namespace msg
{

namespace builder
{

class Init_LaneInfo_inter
{
public:
  explicit Init_LaneInfo_inter(::interfaces_pkg::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  ::interfaces_pkg::msg::LaneInfo inter(::interfaces_pkg::msg::LaneInfo::_inter_type arg)
  {
    msg_.inter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneInfo msg_;
};

class Init_LaneInfo_curv
{
public:
  explicit Init_LaneInfo_curv(::interfaces_pkg::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_inter curv(::interfaces_pkg::msg::LaneInfo::_curv_type arg)
  {
    msg_.curv = std::move(arg);
    return Init_LaneInfo_inter(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneInfo msg_;
};

class Init_LaneInfo_target_y
{
public:
  explicit Init_LaneInfo_target_y(::interfaces_pkg::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_curv target_y(::interfaces_pkg::msg::LaneInfo::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_LaneInfo_curv(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneInfo msg_;
};

class Init_LaneInfo_target_x
{
public:
  explicit Init_LaneInfo_target_x(::interfaces_pkg::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_target_y target_x(::interfaces_pkg::msg::LaneInfo::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_LaneInfo_target_y(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneInfo msg_;
};

class Init_LaneInfo_slope
{
public:
  Init_LaneInfo_slope()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneInfo_target_x slope(::interfaces_pkg::msg::LaneInfo::_slope_type arg)
  {
    msg_.slope = std::move(arg);
    return Init_LaneInfo_target_x(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_pkg::msg::LaneInfo>()
{
  return interfaces_pkg::msg::builder::Init_LaneInfo_slope();
}

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__LANE_INFO__BUILDER_HPP_
