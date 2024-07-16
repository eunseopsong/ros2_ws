// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_pkg:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LANE_INFO__TRAITS_HPP_
#define INTERFACES_PKG__MSG__DETAIL__LANE_INFO__TRAITS_HPP_

#include "interfaces_pkg/msg/detail/lane_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces_pkg::msg::LaneInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slope: ";
    value_to_yaml(msg.slope, out);
    out << "\n";
  }

  // member: target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_x: ";
    value_to_yaml(msg.target_x, out);
    out << "\n";
  }

  // member: target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_y: ";
    value_to_yaml(msg.target_y, out);
    out << "\n";
  }

  // member: curv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curv: ";
    value_to_yaml(msg.curv, out);
    out << "\n";
  }

  // member: inter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inter: ";
    value_to_yaml(msg.inter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces_pkg::msg::LaneInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces_pkg::msg::LaneInfo>()
{
  return "interfaces_pkg::msg::LaneInfo";
}

template<>
inline const char * name<interfaces_pkg::msg::LaneInfo>()
{
  return "interfaces_pkg/msg/LaneInfo";
}

template<>
struct has_fixed_size<interfaces_pkg::msg::LaneInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_pkg::msg::LaneInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_pkg::msg::LaneInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PKG__MSG__DETAIL__LANE_INFO__TRAITS_HPP_
