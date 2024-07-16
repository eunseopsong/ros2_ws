// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_pkg:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define INTERFACES_PKG__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include "interfaces_pkg/msg/detail/detection__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_pkg
{

namespace msg
{

namespace builder
{

class Init_Detection_tracking_id
{
public:
  explicit Init_Detection_tracking_id(::interfaces_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  ::interfaces_pkg::msg::Detection tracking_id(::interfaces_pkg::msg::Detection::_tracking_id_type arg)
  {
    msg_.tracking_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_pkg::msg::Detection msg_;
};

class Init_Detection_mask
{
public:
  explicit Init_Detection_mask(::interfaces_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_tracking_id mask(::interfaces_pkg::msg::Detection::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return Init_Detection_tracking_id(msg_);
  }

private:
  ::interfaces_pkg::msg::Detection msg_;
};

class Init_Detection_bbox
{
public:
  explicit Init_Detection_bbox(::interfaces_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_mask bbox(::interfaces_pkg::msg::Detection::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return Init_Detection_mask(msg_);
  }

private:
  ::interfaces_pkg::msg::Detection msg_;
};

class Init_Detection_score
{
public:
  explicit Init_Detection_score(::interfaces_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_bbox score(::interfaces_pkg::msg::Detection::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_Detection_bbox(msg_);
  }

private:
  ::interfaces_pkg::msg::Detection msg_;
};

class Init_Detection_class_name
{
public:
  explicit Init_Detection_class_name(::interfaces_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_score class_name(::interfaces_pkg::msg::Detection::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_Detection_score(msg_);
  }

private:
  ::interfaces_pkg::msg::Detection msg_;
};

class Init_Detection_class_id
{
public:
  Init_Detection_class_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_class_name class_id(::interfaces_pkg::msg::Detection::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_Detection_class_name(msg_);
  }

private:
  ::interfaces_pkg::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_pkg::msg::Detection>()
{
  return interfaces_pkg::msg::builder::Init_Detection_class_id();
}

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__DETECTION__BUILDER_HPP_
