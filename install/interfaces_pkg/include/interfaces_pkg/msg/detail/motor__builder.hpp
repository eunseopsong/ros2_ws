// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_pkg:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__MOTOR__BUILDER_HPP_
#define INTERFACES_PKG__MSG__DETAIL__MOTOR__BUILDER_HPP_

#include "interfaces_pkg/msg/detail/motor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_pkg
{

namespace msg
{

namespace builder
{

class Init_Motor_potentiometer
{
public:
  explicit Init_Motor_potentiometer(::interfaces_pkg::msg::Motor & msg)
  : msg_(msg)
  {}
  ::interfaces_pkg::msg::Motor potentiometer(::interfaces_pkg::msg::Motor::_potentiometer_type arg)
  {
    msg_.potentiometer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_pkg::msg::Motor msg_;
};

class Init_Motor_right_speed
{
public:
  explicit Init_Motor_right_speed(::interfaces_pkg::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_potentiometer right_speed(::interfaces_pkg::msg::Motor::_right_speed_type arg)
  {
    msg_.right_speed = std::move(arg);
    return Init_Motor_potentiometer(msg_);
  }

private:
  ::interfaces_pkg::msg::Motor msg_;
};

class Init_Motor_left_speed
{
public:
  explicit Init_Motor_left_speed(::interfaces_pkg::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_right_speed left_speed(::interfaces_pkg::msg::Motor::_left_speed_type arg)
  {
    msg_.left_speed = std::move(arg);
    return Init_Motor_right_speed(msg_);
  }

private:
  ::interfaces_pkg::msg::Motor msg_;
};

class Init_Motor_angle
{
public:
  explicit Init_Motor_angle(::interfaces_pkg::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_left_speed angle(::interfaces_pkg::msg::Motor::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Motor_left_speed(msg_);
  }

private:
  ::interfaces_pkg::msg::Motor msg_;
};

class Init_Motor_rear_volt
{
public:
  explicit Init_Motor_rear_volt(::interfaces_pkg::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_angle rear_volt(::interfaces_pkg::msg::Motor::_rear_volt_type arg)
  {
    msg_.rear_volt = std::move(arg);
    return Init_Motor_angle(msg_);
  }

private:
  ::interfaces_pkg::msg::Motor msg_;
};

class Init_Motor_front_volt
{
public:
  Init_Motor_front_volt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_rear_volt front_volt(::interfaces_pkg::msg::Motor::_front_volt_type arg)
  {
    msg_.front_volt = std::move(arg);
    return Init_Motor_rear_volt(msg_);
  }

private:
  ::interfaces_pkg::msg::Motor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_pkg::msg::Motor>()
{
  return interfaces_pkg::msg::builder::Init_Motor_front_volt();
}

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__MOTOR__BUILDER_HPP_
