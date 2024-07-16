// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_pkg:msg/Point2D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__POINT2_D__TRAITS_HPP_
#define INTERFACES_PKG__MSG__DETAIL__POINT2_D__TRAITS_HPP_

#include "interfaces_pkg/msg/detail/point2_d__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces_pkg::msg::Point2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces_pkg::msg::Point2D & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces_pkg::msg::Point2D>()
{
  return "interfaces_pkg::msg::Point2D";
}

template<>
inline const char * name<interfaces_pkg::msg::Point2D>()
{
  return "interfaces_pkg/msg/Point2D";
}

template<>
struct has_fixed_size<interfaces_pkg::msg::Point2D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_pkg::msg::Point2D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_pkg::msg::Point2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PKG__MSG__DETAIL__POINT2_D__TRAITS_HPP_
