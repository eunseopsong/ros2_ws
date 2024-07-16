// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_pkg:msg/Mask.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/mask__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data`
#include "interfaces_pkg/msg/detail/point2_d__functions.h"

bool
interfaces_pkg__msg__Mask__init(interfaces_pkg__msg__Mask * msg)
{
  if (!msg) {
    return false;
  }
  // height
  // width
  // data
  if (!interfaces_pkg__msg__Point2D__Sequence__init(&msg->data, 0)) {
    interfaces_pkg__msg__Mask__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_pkg__msg__Mask__fini(interfaces_pkg__msg__Mask * msg)
{
  if (!msg) {
    return;
  }
  // height
  // width
  // data
  interfaces_pkg__msg__Point2D__Sequence__fini(&msg->data);
}

bool
interfaces_pkg__msg__Mask__are_equal(const interfaces_pkg__msg__Mask * lhs, const interfaces_pkg__msg__Mask * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // data
  if (!interfaces_pkg__msg__Point2D__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
interfaces_pkg__msg__Mask__copy(
  const interfaces_pkg__msg__Mask * input,
  interfaces_pkg__msg__Mask * output)
{
  if (!input || !output) {
    return false;
  }
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // data
  if (!interfaces_pkg__msg__Point2D__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

interfaces_pkg__msg__Mask *
interfaces_pkg__msg__Mask__create()
{
  interfaces_pkg__msg__Mask * msg = (interfaces_pkg__msg__Mask *)malloc(sizeof(interfaces_pkg__msg__Mask));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_pkg__msg__Mask));
  bool success = interfaces_pkg__msg__Mask__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_pkg__msg__Mask__destroy(interfaces_pkg__msg__Mask * msg)
{
  if (msg) {
    interfaces_pkg__msg__Mask__fini(msg);
  }
  free(msg);
}


bool
interfaces_pkg__msg__Mask__Sequence__init(interfaces_pkg__msg__Mask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_pkg__msg__Mask * data = NULL;
  if (size) {
    data = (interfaces_pkg__msg__Mask *)calloc(size, sizeof(interfaces_pkg__msg__Mask));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_pkg__msg__Mask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_pkg__msg__Mask__fini(&data[i - 1]);
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
interfaces_pkg__msg__Mask__Sequence__fini(interfaces_pkg__msg__Mask__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_pkg__msg__Mask__fini(&array->data[i]);
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

interfaces_pkg__msg__Mask__Sequence *
interfaces_pkg__msg__Mask__Sequence__create(size_t size)
{
  interfaces_pkg__msg__Mask__Sequence * array = (interfaces_pkg__msg__Mask__Sequence *)malloc(sizeof(interfaces_pkg__msg__Mask__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_pkg__msg__Mask__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_pkg__msg__Mask__Sequence__destroy(interfaces_pkg__msg__Mask__Sequence * array)
{
  if (array) {
    interfaces_pkg__msg__Mask__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces_pkg__msg__Mask__Sequence__are_equal(const interfaces_pkg__msg__Mask__Sequence * lhs, const interfaces_pkg__msg__Mask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_pkg__msg__Mask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_pkg__msg__Mask__Sequence__copy(
  const interfaces_pkg__msg__Mask__Sequence * input,
  interfaces_pkg__msg__Mask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_pkg__msg__Mask);
    interfaces_pkg__msg__Mask * data =
      (interfaces_pkg__msg__Mask *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_pkg__msg__Mask__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces_pkg__msg__Mask__fini(&data[i]);
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
    if (!interfaces_pkg__msg__Mask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
