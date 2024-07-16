// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_pkg:msg/DetectionArray.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/detection_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detections`
#include "interfaces_pkg/msg/detail/detection__functions.h"

bool
interfaces_pkg__msg__DetectionArray__init(interfaces_pkg__msg__DetectionArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    interfaces_pkg__msg__DetectionArray__fini(msg);
    return false;
  }
  // detections
  if (!interfaces_pkg__msg__Detection__Sequence__init(&msg->detections, 0)) {
    interfaces_pkg__msg__DetectionArray__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_pkg__msg__DetectionArray__fini(interfaces_pkg__msg__DetectionArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detections
  interfaces_pkg__msg__Detection__Sequence__fini(&msg->detections);
}

bool
interfaces_pkg__msg__DetectionArray__are_equal(const interfaces_pkg__msg__DetectionArray * lhs, const interfaces_pkg__msg__DetectionArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // detections
  if (!interfaces_pkg__msg__Detection__Sequence__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  return true;
}

bool
interfaces_pkg__msg__DetectionArray__copy(
  const interfaces_pkg__msg__DetectionArray * input,
  interfaces_pkg__msg__DetectionArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // detections
  if (!interfaces_pkg__msg__Detection__Sequence__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  return true;
}

interfaces_pkg__msg__DetectionArray *
interfaces_pkg__msg__DetectionArray__create()
{
  interfaces_pkg__msg__DetectionArray * msg = (interfaces_pkg__msg__DetectionArray *)malloc(sizeof(interfaces_pkg__msg__DetectionArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_pkg__msg__DetectionArray));
  bool success = interfaces_pkg__msg__DetectionArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_pkg__msg__DetectionArray__destroy(interfaces_pkg__msg__DetectionArray * msg)
{
  if (msg) {
    interfaces_pkg__msg__DetectionArray__fini(msg);
  }
  free(msg);
}


bool
interfaces_pkg__msg__DetectionArray__Sequence__init(interfaces_pkg__msg__DetectionArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_pkg__msg__DetectionArray * data = NULL;
  if (size) {
    data = (interfaces_pkg__msg__DetectionArray *)calloc(size, sizeof(interfaces_pkg__msg__DetectionArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_pkg__msg__DetectionArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_pkg__msg__DetectionArray__fini(&data[i - 1]);
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
interfaces_pkg__msg__DetectionArray__Sequence__fini(interfaces_pkg__msg__DetectionArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_pkg__msg__DetectionArray__fini(&array->data[i]);
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

interfaces_pkg__msg__DetectionArray__Sequence *
interfaces_pkg__msg__DetectionArray__Sequence__create(size_t size)
{
  interfaces_pkg__msg__DetectionArray__Sequence * array = (interfaces_pkg__msg__DetectionArray__Sequence *)malloc(sizeof(interfaces_pkg__msg__DetectionArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_pkg__msg__DetectionArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_pkg__msg__DetectionArray__Sequence__destroy(interfaces_pkg__msg__DetectionArray__Sequence * array)
{
  if (array) {
    interfaces_pkg__msg__DetectionArray__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces_pkg__msg__DetectionArray__Sequence__are_equal(const interfaces_pkg__msg__DetectionArray__Sequence * lhs, const interfaces_pkg__msg__DetectionArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_pkg__msg__DetectionArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_pkg__msg__DetectionArray__Sequence__copy(
  const interfaces_pkg__msg__DetectionArray__Sequence * input,
  interfaces_pkg__msg__DetectionArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_pkg__msg__DetectionArray);
    interfaces_pkg__msg__DetectionArray * data =
      (interfaces_pkg__msg__DetectionArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_pkg__msg__DetectionArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces_pkg__msg__DetectionArray__fini(&data[i]);
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
    if (!interfaces_pkg__msg__DetectionArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
