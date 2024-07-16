// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_pkg:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define INTERFACES_PKG__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include "interfaces_pkg/msg/detail/detection__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'bbox'
#include "interfaces_pkg/msg/detail/bounding_box2_d__traits.hpp"
// Member 'mask'
#include "interfaces_pkg/msg/detail/mask__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces_pkg::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    value_to_yaml(msg.class_id, out);
    out << "\n";
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    value_to_yaml(msg.score, out);
    out << "\n";
  }

  // member: bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox:\n";
    to_yaml(msg.bbox, out, indentation + 2);
  }

  // member: mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mask:\n";
    to_yaml(msg.mask, out, indentation + 2);
  }

  // member: tracking_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_id: ";
    value_to_yaml(msg.tracking_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces_pkg::msg::Detection & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces_pkg::msg::Detection>()
{
  return "interfaces_pkg::msg::Detection";
}

template<>
inline const char * name<interfaces_pkg::msg::Detection>()
{
  return "interfaces_pkg/msg/Detection";
}

template<>
struct has_fixed_size<interfaces_pkg::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces_pkg::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces_pkg::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PKG__MSG__DETAIL__DETECTION__TRAITS_HPP_
