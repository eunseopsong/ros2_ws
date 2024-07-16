// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_pkg:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_pkg/msg/detail/lane_info__rosidl_typesupport_introspection_c.h"
#include "interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_pkg/msg/detail/lane_info__functions.h"
#include "interfaces_pkg/msg/detail/lane_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_pkg__msg__LaneInfo__init(message_memory);
}

void LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_fini_function(void * message_memory)
{
  interfaces_pkg__msg__LaneInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_member_array[5] = {
  {
    "slope",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__LaneInfo, slope),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__LaneInfo, target_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__LaneInfo, target_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__LaneInfo, curv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__LaneInfo, inter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_members = {
  "interfaces_pkg__msg",  // message namespace
  "LaneInfo",  // message name
  5,  // number of fields
  sizeof(interfaces_pkg__msg__LaneInfo),
  LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_member_array,  // message members
  LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle = {
  0,
  &LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_pkg, msg, LaneInfo)() {
  if (!LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle.typesupport_identifier) {
    LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif