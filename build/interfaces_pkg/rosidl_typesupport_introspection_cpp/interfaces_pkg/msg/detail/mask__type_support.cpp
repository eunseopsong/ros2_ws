// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_pkg:msg/Mask.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces_pkg/msg/detail/mask__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces_pkg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Mask_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_pkg::msg::Mask(_init);
}

void Mask_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_pkg::msg::Mask *>(message_memory);
  typed_message->~Mask();
}

size_t size_function__Mask__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interfaces_pkg::msg::Point2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Mask__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interfaces_pkg::msg::Point2D> *>(untyped_member);
  return &member[index];
}

void * get_function__Mask__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interfaces_pkg::msg::Point2D> *>(untyped_member);
  return &member[index];
}

void resize_function__Mask__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interfaces_pkg::msg::Point2D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Mask_message_member_array[3] = {
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg::msg::Mask, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg::msg::Mask, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces_pkg::msg::Point2D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg::msg::Mask, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__Mask__data,  // size() function pointer
    get_const_function__Mask__data,  // get_const(index) function pointer
    get_function__Mask__data,  // get(index) function pointer
    resize_function__Mask__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Mask_message_members = {
  "interfaces_pkg::msg",  // message namespace
  "Mask",  // message name
  3,  // number of fields
  sizeof(interfaces_pkg::msg::Mask),
  Mask_message_member_array,  // message members
  Mask_init_function,  // function to initialize message memory (memory has to be allocated)
  Mask_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Mask_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Mask_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_pkg::msg::Mask>()
{
  return &::interfaces_pkg::msg::rosidl_typesupport_introspection_cpp::Mask_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_pkg, msg, Mask)() {
  return &::interfaces_pkg::msg::rosidl_typesupport_introspection_cpp::Mask_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
