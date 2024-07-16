// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_pkg:msg/LaneInfo.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/lane_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
interfaces_pkg__msg__LaneInfo__init(interfaces_pkg__msg__LaneInfo * msg)
{
  if (!msg) {
    return false;
  }
  // slope
  // target_x
  // target_y
  // curv
  // inter
  return true;
}

void
interfaces_pkg__msg__LaneInfo__fini(interfaces_pkg__msg__LaneInfo * msg)
{
  if (!msg) {
    return;
  }
  // slope
  // target_x
  // target_y
  // curv
  // inter
}

bool
interfaces_pkg__msg__LaneInfo__are_equal(const interfaces_pkg__msg__LaneInfo * lhs, const interfaces_pkg__msg__LaneInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // slope
  if (lhs->slope != rhs->slope) {
    return false;
  }
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  // curv
  if (lhs->curv != rhs->curv) {
    return false;
  }
  // inter
  if (lhs->inter != rhs->inter) {
    return false;
  }
  return true;
}

bool
interfaces_pkg__msg__LaneInfo__copy(
  const interfaces_pkg__msg__LaneInfo * input,
  interfaces_pkg__msg__LaneInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // slope
  output->slope = input->slope;
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  // curv
  output->curv = input->curv;
  // inter
  output->inter = input->inter;
  return true;
}

interfaces_pkg__msg__LaneInfo *
interfaces_pkg__msg__LaneInfo__create()
{
  interfaces_pkg__msg__LaneInfo * msg = (interfaces_pkg__msg__LaneInfo *)malloc(sizeof(interfaces_pkg__msg__LaneInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_pkg__msg__LaneInfo));
  bool success = interfaces_pkg__msg__LaneInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_pkg__msg__LaneInfo__destroy(interfaces_pkg__msg__LaneInfo * msg)
{
  if (msg) {
    interfaces_pkg__msg__LaneInfo__fini(msg);
  }
  free(msg);
}


bool
interfaces_pkg__msg__LaneInfo__Sequence__init(interfaces_pkg__msg__LaneInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_pkg__msg__LaneInfo * data = NULL;
  if (size) {
    data = (interfaces_pkg__msg__LaneInfo *)calloc(size, sizeof(interfaces_pkg__msg__LaneInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_pkg__msg__LaneInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_pkg__msg__LaneInfo__fini(&data[i - 1]);
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
interfaces_pkg__msg__LaneInfo__Sequence__fini(interfaces_pkg__msg__LaneInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_pkg__msg__LaneInfo__fini(&array->data[i]);
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

interfaces_pkg__msg__LaneInfo__Sequence *
interfaces_pkg__msg__LaneInfo__Sequence__create(size_t size)
{
  interfaces_pkg__msg__LaneInfo__Sequence * array = (interfaces_pkg__msg__LaneInfo__Sequence *)malloc(sizeof(interfaces_pkg__msg__LaneInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_pkg__msg__LaneInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_pkg__msg__LaneInfo__Sequence__destroy(interfaces_pkg__msg__LaneInfo__Sequence * array)
{
  if (array) {
    interfaces_pkg__msg__LaneInfo__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces_pkg__msg__LaneInfo__Sequence__are_equal(const interfaces_pkg__msg__LaneInfo__Sequence * lhs, const interfaces_pkg__msg__LaneInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_pkg__msg__LaneInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_pkg__msg__LaneInfo__Sequence__copy(
  const interfaces_pkg__msg__LaneInfo__Sequence * input,
  interfaces_pkg__msg__LaneInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_pkg__msg__LaneInfo);
    interfaces_pkg__msg__LaneInfo * data =
      (interfaces_pkg__msg__LaneInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_pkg__msg__LaneInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces_pkg__msg__LaneInfo__fini(&data[i]);
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
    if (!interfaces_pkg__msg__LaneInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
