// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_pkg:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__MOTOR__STRUCT_H_
#define INTERFACES_PKG__MSG__DETAIL__MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Motor in the package interfaces_pkg.
typedef struct interfaces_pkg__msg__Motor
{
  int32_t front_volt;
  int32_t rear_volt;
  int32_t angle;
  int32_t left_speed;
  int32_t right_speed;
  int32_t potentiometer;
} interfaces_pkg__msg__Motor;

// Struct for a sequence of interfaces_pkg__msg__Motor.
typedef struct interfaces_pkg__msg__Motor__Sequence
{
  interfaces_pkg__msg__Motor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_pkg__msg__Motor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__MOTOR__STRUCT_H_
