// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_pkg:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
#define INTERFACES_PKG__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
// Member 'size'
#include "interfaces_pkg/msg/detail/point2_d__struct.h"

// Struct defined in msg/BoundingBox2D in the package interfaces_pkg.
typedef struct interfaces_pkg__msg__BoundingBox2D
{
  interfaces_pkg__msg__Point2D center;
  interfaces_pkg__msg__Point2D size;
} interfaces_pkg__msg__BoundingBox2D;

// Struct for a sequence of interfaces_pkg__msg__BoundingBox2D.
typedef struct interfaces_pkg__msg__BoundingBox2D__Sequence
{
  interfaces_pkg__msg__BoundingBox2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_pkg__msg__BoundingBox2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
