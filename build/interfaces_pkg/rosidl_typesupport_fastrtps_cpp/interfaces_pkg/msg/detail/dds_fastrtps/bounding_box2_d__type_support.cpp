// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_pkg:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/bounding_box2_d__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces_pkg/msg/detail/bounding_box2_d__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace interfaces_pkg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const interfaces_pkg::msg::Point2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  interfaces_pkg::msg::Point2D &);
size_t get_serialized_size(
  const interfaces_pkg::msg::Point2D &,
  size_t current_alignment);
size_t
max_serialized_size_Point2D(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace interfaces_pkg

namespace interfaces_pkg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const interfaces_pkg::msg::Point2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  interfaces_pkg::msg::Point2D &);
size_t get_serialized_size(
  const interfaces_pkg::msg::Point2D &,
  size_t current_alignment);
size_t
max_serialized_size_Point2D(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace interfaces_pkg


namespace interfaces_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_pkg
cdr_serialize(
  const interfaces_pkg::msg::BoundingBox2D & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: center
  interfaces_pkg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.center,
    cdr);
  // Member: size
  interfaces_pkg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.size,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces_pkg::msg::BoundingBox2D & ros_message)
{
  // Member: center
  interfaces_pkg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.center);

  // Member: size
  interfaces_pkg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.size);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_pkg
get_serialized_size(
  const interfaces_pkg::msg::BoundingBox2D & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: center

  current_alignment +=
    interfaces_pkg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.center, current_alignment);
  // Member: size

  current_alignment +=
    interfaces_pkg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.size, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_pkg
max_serialized_size_BoundingBox2D(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: center
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        interfaces_pkg::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2D(
        full_bounded, current_alignment);
    }
  }

  // Member: size
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        interfaces_pkg::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2D(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _BoundingBox2D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces_pkg::msg::BoundingBox2D *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BoundingBox2D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces_pkg::msg::BoundingBox2D *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BoundingBox2D__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces_pkg::msg::BoundingBox2D *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BoundingBox2D__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BoundingBox2D(full_bounded, 0);
}

static message_type_support_callbacks_t _BoundingBox2D__callbacks = {
  "interfaces_pkg::msg",
  "BoundingBox2D",
  _BoundingBox2D__cdr_serialize,
  _BoundingBox2D__cdr_deserialize,
  _BoundingBox2D__get_serialized_size,
  _BoundingBox2D__max_serialized_size
};

static rosidl_message_type_support_t _BoundingBox2D__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BoundingBox2D__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interfaces_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_pkg::msg::BoundingBox2D>()
{
  return &interfaces_pkg::msg::typesupport_fastrtps_cpp::_BoundingBox2D__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_pkg, msg, BoundingBox2D)() {
  return &interfaces_pkg::msg::typesupport_fastrtps_cpp::_BoundingBox2D__handle;
}

#ifdef __cplusplus
}
#endif
