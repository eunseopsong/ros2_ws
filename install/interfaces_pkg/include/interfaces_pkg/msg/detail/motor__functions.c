// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_pkg:msg/Motor.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
interfaces_pkg__msg__Motor__init(interfaces_pkg__msg__Motor * msg)
{
  if (!msg) {
    return false;
  }
  // front_volt
  // rear_volt
  // angle
  // left_speed
  // right_speed
  // potentiometer
  return true;
}

void
interfaces_pkg__msg__Motor__fini(interfaces_pkg__msg__Motor * msg)
{
  if (!msg) {
    return;
  }
  // front_volt
  // rear_volt
  // angle
  // left_speed
  // right_speed
  // potentiometer
}

bool
interfaces_pkg__msg__Motor__are_equal(const interfaces_pkg__msg__Motor * lhs, const interfaces_pkg__msg__Motor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front_volt
  if (lhs->front_volt != rhs->front_volt) {
    return false;
  }
  // rear_volt
  if (lhs->rear_volt != rhs->rear_volt) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // left_speed
  if (lhs->left_speed != rhs->left_speed) {
    return false;
  }
  // right_speed
  if (lhs->right_speed != rhs->right_speed) {
    return false;
  }
  // potentiometer
  if (lhs->potentiometer != rhs->potentiometer) {
    return false;
  }
  return true;
}

bool
interfaces_pkg__msg__Motor__copy(
  const interfaces_pkg__msg__Motor * input,
  interfaces_pkg__msg__Motor * output)
{
  if (!input || !output) {
    return false;
  }
  // front_volt
  output->front_volt = input->front_volt;
  // rear_volt
  output->rear_volt = input->rear_volt;
  // angle
  output->angle = input->angle;
  // left_speed
  output->left_speed = input->left_speed;
  // right_speed
  output->right_speed = input->right_speed;
  // potentiometer
  output->potentiometer = input->potentiometer;
  return true;
}

interfaces_pkg__msg__Motor *
interfaces_pkg__msg__Motor__create()
{
  interfaces_pkg__msg__Motor * msg = (interfaces_pkg__msg__Motor *)malloc(sizeof(interfaces_pkg__msg__Motor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_pkg__msg__Motor));
  bool success = interfaces_pkg__msg__Motor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_pkg__msg__Motor__destroy(interfaces_pkg__msg__Motor * msg)
{
  if (msg) {
    interfaces_pkg__msg__Motor__fini(msg);
  }
  free(msg);
}


bool
interfaces_pkg__msg__Motor__Sequence__init(interfaces_pkg__msg__Motor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_pkg__msg__Motor * data = NULL;
  if (size) {
    data = (interfaces_pkg__msg__Motor *)calloc(size, sizeof(interfaces_pkg__msg__Motor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_pkg__msg__Motor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_pkg__msg__Motor__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces_pkg__msg__Motor__Sequence__fini(interfaces_pkg__msg__Motor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_pkg__msg__Motor__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces_pkg__msg__Motor__Sequence *
interfaces_pkg__msg__Motor__Sequence__create(size_t size)
{
  interfaces_pkg__msg__Motor__Sequence * array = (interfaces_pkg__msg__Motor__Sequence *)malloc(sizeof(interfaces_pkg__msg__Motor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_pkg__msg__Motor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_pkg__msg__Motor__Sequence__destroy(interfaces_pkg__msg__Motor__Sequence * array)
{
  if (array) {
    interfaces_pkg__msg__Motor__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces_pkg__msg__Motor__Sequence__are_equal(const interfaces_pkg__msg__Motor__Sequence * lhs, const interfaces_pkg__msg__Motor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_pkg__msg__Motor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_pkg__msg__Motor__Sequence__copy(
  const interfaces_pkg__msg__Motor__Sequence * input,
  interfaces_pkg__msg__Motor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_pkg__msg__Motor);
    interfaces_pkg__msg__Motor * data =
      (interfaces_pkg__msg__Motor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_pkg__msg__Motor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces_pkg__msg__Motor__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_pkg__msg__Motor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
