// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_pkg:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__MOTOR__TRAITS_HPP_
#define INTERFACES_PKG__MSG__DETAIL__MOTOR__TRAITS_HPP_

#include "interfaces_pkg/msg/detail/motor__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces_pkg::msg::Motor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: front_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_volt: ";
    value_to_yaml(msg.front_volt, out);
    out << "\n";
  }

  // member: rear_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_volt: ";
    value_to_yaml(msg.rear_volt, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: left_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_speed: ";
    value_to_yaml(msg.left_speed, out);
    out << "\n";
  }

  // member: right_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_speed: ";
    value_to_yaml(msg.right_speed, out);
    out << "\n";
  }

  // member: potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "potentiometer: ";
    value_to_yaml(msg.potentiometer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces_pkg::msg::Motor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces_pkg::msg::Motor>()
{
  return "interfaces_pkg::msg::Motor";
}

template<>
inline const char * name<interfaces_pkg::msg::Motor>()
{
  return "interfaces_pkg/msg/Motor";
}

template<>
struct has_fixed_size<interfaces_pkg::msg::Motor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_pkg::msg::Motor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_pkg::msg::Motor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PKG__MSG__DETAIL__MOTOR__TRAITS_HPP_
