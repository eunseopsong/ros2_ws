// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_pkg:msg/Mask.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__MASK__TRAITS_HPP_
#define INTERFACES_PKG__MSG__DETAIL__MASK__TRAITS_HPP_

#include "interfaces_pkg/msg/detail/mask__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'data'
#include "interfaces_pkg/msg/detail/point2_d__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces_pkg::msg::Mask & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces_pkg::msg::Mask & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces_pkg::msg::Mask>()
{
  return "interfaces_pkg::msg::Mask";
}

template<>
inline const char * name<interfaces_pkg::msg::Mask>()
{
  return "interfaces_pkg/msg/Mask";
}

template<>
struct has_fixed_size<interfaces_pkg::msg::Mask>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces_pkg::msg::Mask>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces_pkg::msg::Mask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PKG__MSG__DETAIL__MASK__TRAITS_HPP_
