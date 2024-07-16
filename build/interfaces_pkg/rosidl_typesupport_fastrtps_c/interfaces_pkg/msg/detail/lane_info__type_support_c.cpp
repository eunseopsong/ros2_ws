// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces_pkg:msg/LaneInfo.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/lane_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces_pkg/msg/detail/lane_info__struct.h"
#include "interfaces_pkg/msg/detail/lane_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _LaneInfo__ros_msg_type = interfaces_pkg__msg__LaneInfo;

static bool _LaneInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneInfo__ros_msg_type * ros_message = static_cast<const _LaneInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: slope
  {
    cdr << ros_message->slope;
  }

  // Field name: target_x
  {
    cdr << ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr << ros_message->target_y;
  }

  // Field name: curv
  {
    cdr << ros_message->curv;
  }

  // Field name: inter
  {
    cdr << ros_message->inter;
  }

  return true;
}

static bool _LaneInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneInfo__ros_msg_type * ros_message = static_cast<_LaneInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: slope
  {
    cdr >> ros_message->slope;
  }

  // Field name: target_x
  {
    cdr >> ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr >> ros_message->target_y;
  }

  // Field name: curv
  {
    cdr >> ros_message->curv;
  }

  // Field name: inter
  {
    cdr >> ros_message->inter;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_pkg
size_t get_serialized_size_interfaces_pkg__msg__LaneInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneInfo__ros_msg_type * ros_message = static_cast<const _LaneInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name slope
  {
    size_t item_size = sizeof(ros_message->slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_x
  {
    size_t item_size = sizeof(ros_message->target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_y
  {
    size_t item_size = sizeof(ros_message->target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curv
  {
    size_t item_size = sizeof(ros_message->curv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inter
  {
    size_t item_size = sizeof(ros_message->inter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces_pkg__msg__LaneInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_pkg
size_t max_serialized_size_interfaces_pkg__msg__LaneInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: slope
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: curv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: inter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces_pkg__msg__LaneInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LaneInfo = {
  "interfaces_pkg::msg",
  "LaneInfo",
  _LaneInfo__cdr_serialize,
  _LaneInfo__cdr_deserialize,
  _LaneInfo__get_serialized_size,
  _LaneInfo__max_serialized_size
};

static rosidl_message_type_support_t _LaneInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_pkg, msg, LaneInfo)() {
  return &_LaneInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
