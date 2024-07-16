// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_pkg:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/bounding_box2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `center`
// Member `size`
#include "interfaces_pkg/msg/detail/point2_d__functions.h"

bool
interfaces_pkg__msg__BoundingBox2D__init(interfaces_pkg__msg__BoundingBox2D * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!interfaces_pkg__msg__Point2D__init(&msg->center)) {
    interfaces_pkg__msg__BoundingBox2D__fini(msg);
    return false;
  }
  // size
  if (!interfaces_pkg__msg__Point2D__init(&msg->size)) {
    interfaces_pkg__msg__BoundingBox2D__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_pkg__msg__BoundingBox2D__fini(interfaces_pkg__msg__BoundingBox2D * msg)
{
  if (!msg) {
    return;
  }
  // center
  interfaces_pkg__msg__Point2D__fini(&msg->center);
  // size
  interfaces_pkg__msg__Point2D__fini(&msg->size);
}

bool
interfaces_pkg__msg__BoundingBox2D__are_equal(const interfaces_pkg__msg__BoundingBox2D * lhs, const interfaces_pkg__msg__BoundingBox2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!interfaces_pkg__msg__Point2D__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // size
  if (!interfaces_pkg__msg__Point2D__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  return true;
}

bool
interfaces_pkg__msg__BoundingBox2D__copy(
  const interfaces_pkg__msg__BoundingBox2D * input,
  interfaces_pkg__msg__BoundingBox2D * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!interfaces_pkg__msg__Point2D__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // size
  if (!interfaces_pkg__msg__Point2D__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  return true;
}

interfaces_pkg__msg__BoundingBox2D *
interfaces_pkg__msg__BoundingBox2D__create()
{
  interfaces_pkg__msg__BoundingBox2D * msg = (interfaces_pkg__msg__BoundingBox2D *)malloc(sizeof(interfaces_pkg__msg__BoundingBox2D));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_pkg__msg__BoundingBox2D));
  bool success = interfaces_pkg__msg__BoundingBox2D__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_pkg__msg__BoundingBox2D__destroy(interfaces_pkg__msg__BoundingBox2D * msg)
{
  if (msg) {
    interfaces_pkg__msg__BoundingBox2D__fini(msg);
  }
  free(msg);
}


bool
interfaces_pkg__msg__BoundingBox2D__Sequence__init(interfaces_pkg__msg__BoundingBox2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_pkg__msg__BoundingBox2D * data = NULL;
  if (size) {
    data = (interfaces_pkg__msg__BoundingBox2D *)calloc(size, sizeof(interfaces_pkg__msg__BoundingBox2D));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_pkg__msg__BoundingBox2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_pkg__msg__BoundingBox2D__fini(&data[i - 1]);
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
interfaces_pkg__msg__BoundingBox2D__Sequence__fini(interfaces_pkg__msg__BoundingBox2D__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_pkg__msg__BoundingBox2D__fini(&array->data[i]);
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

interfaces_pkg__msg__BoundingBox2D__Sequence *
interfaces_pkg__msg__BoundingBox2D__Sequence__create(size_t size)
{
  interfaces_pkg__msg__BoundingBox2D__Sequence * array = (interfaces_pkg__msg__BoundingBox2D__Sequence *)malloc(sizeof(interfaces_pkg__msg__BoundingBox2D__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_pkg__msg__BoundingBox2D__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_pkg__msg__BoundingBox2D__Sequence__destroy(interfaces_pkg__msg__BoundingBox2D__Sequence * array)
{
  if (array) {
    interfaces_pkg__msg__BoundingBox2D__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces_pkg__msg__BoundingBox2D__Sequence__are_equal(const interfaces_pkg__msg__BoundingBox2D__Sequence * lhs, const interfaces_pkg__msg__BoundingBox2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_pkg__msg__BoundingBox2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_pkg__msg__BoundingBox2D__Sequence__copy(
  const interfaces_pkg__msg__BoundingBox2D__Sequence * input,
  interfaces_pkg__msg__BoundingBox2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_pkg__msg__BoundingBox2D);
    interfaces_pkg__msg__BoundingBox2D * data =
      (interfaces_pkg__msg__BoundingBox2D *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_pkg__msg__BoundingBox2D__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces_pkg__msg__BoundingBox2D__fini(&data[i]);
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
    if (!interfaces_pkg__msg__BoundingBox2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
