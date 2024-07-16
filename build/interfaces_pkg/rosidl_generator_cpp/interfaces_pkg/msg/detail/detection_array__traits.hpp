// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_pkg:msg/DetectionArray.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__DETECTION_ARRAY__TRAITS_HPP_
#define INTERFACES_PKG__MSG__DETAIL__DETECTION_ARRAY__TRAITS_HPP_

#include "interfaces_pkg/msg/detail/detection_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detections'
#include "interfaces_pkg/msg/detail/detection__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces_pkg::msg::DetectionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces_pkg::msg::DetectionArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces_pkg::msg::DetectionArray>()
{
  return "interfaces_pkg::msg::DetectionArray";
}

template<>
inline const char * name<interfaces_pkg::msg::DetectionArray>()
{
  return "interfaces_pkg/msg/DetectionArray";
}

template<>
struct has_fixed_size<interfaces_pkg::msg::DetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces_pkg::msg::DetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces_pkg::msg::DetectionArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PKG__MSG__DETAIL__DETECTION_ARRAY__TRAITS_HPP_
