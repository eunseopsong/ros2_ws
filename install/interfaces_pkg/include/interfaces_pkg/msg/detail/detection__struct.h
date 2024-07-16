// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_pkg:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__DETECTION__STRUCT_H_
#define INTERFACES_PKG__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
// Member 'tracking_id'
#include "rosidl_runtime_c/string.h"
// Member 'bbox'
#include "interfaces_pkg/msg/detail/bounding_box2_d__struct.h"
// Member 'mask'
#include "interfaces_pkg/msg/detail/mask__struct.h"

// Struct defined in msg/Detection in the package interfaces_pkg.
typedef struct interfaces_pkg__msg__Detection
{
  int32_t class_id;
  rosidl_runtime_c__String class_name;
  double score;
  interfaces_pkg__msg__BoundingBox2D bbox;
  interfaces_pkg__msg__Mask mask;
  rosidl_runtime_c__String tracking_id;
} interfaces_pkg__msg__Detection;

// Struct for a sequence of interfaces_pkg__msg__Detection.
typedef struct interfaces_pkg__msg__Detection__Sequence
{
  interfaces_pkg__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_pkg__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__DETECTION__STRUCT_H_
