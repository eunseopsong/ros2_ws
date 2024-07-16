// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_pkg:msg/Detection.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `class_name`
// Member `tracking_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `bbox`
#include "interfaces_pkg/msg/detail/bounding_box2_d__functions.h"
// Member `mask`
#include "interfaces_pkg/msg/detail/mask__functions.h"

bool
interfaces_pkg__msg__Detection__init(interfaces_pkg__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // class_id
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    interfaces_pkg__msg__Detection__fini(msg);
    return false;
  }
  // score
  // bbox
  if (!interfaces_pkg__msg__BoundingBox2D__init(&msg->bbox)) {
    interfaces_pkg__msg__Detection__fini(msg);
    return false;
  }
  // mask
  if (!interfaces_pkg__msg__Mask__init(&msg->mask)) {
    interfaces_pkg__msg__Detection__fini(msg);
    return false;
  }
  // tracking_id
  if (!rosidl_runtime_c__String__init(&msg->tracking_id)) {
    interfaces_pkg__msg__Detection__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_pkg__msg__Detection__fini(interfaces_pkg__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // class_id
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // score
  // bbox
  interfaces_pkg__msg__BoundingBox2D__fini(&msg->bbox);
  // mask
  interfaces_pkg__msg__Mask__fini(&msg->mask);
  // tracking_id
  rosidl_runtime_c__String__fini(&msg->tracking_id);
}

bool
interfaces_pkg__msg__Detection__are_equal(const interfaces_pkg__msg__Detection * lhs, const interfaces_pkg__msg__Detection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // class_id
  if (lhs->class_id != rhs->class_id) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // bbox
  if (!interfaces_pkg__msg__BoundingBox2D__are_equal(
      &(lhs->bbox), &(rhs->bbox)))
  {
    return false;
  }
  // mask
  if (!interfaces_pkg__msg__Mask__are_equal(
      &(lhs->mask), &(rhs->mask)))
  {
    return false;
  }
  // tracking_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tracking_id), &(rhs->tracking_id)))
  {
    return false;
  }
  return true;
}

bool
interfaces_pkg__msg__Detection__copy(
  const interfaces_pkg__msg__Detection * input,
  interfaces_pkg__msg__Detection * output)
{
  if (!input || !output) {
    return false;
  }
  // class_id
  output->class_id = input->class_id;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // bbox
  if (!interfaces_pkg__msg__BoundingBox2D__copy(
      &(input->bbox), &(output->bbox)))
  {
    return false;
  }
  // mask
  if (!interfaces_pkg__msg__Mask__copy(
      &(input->mask), &(output->mask)))
  {
    return false;
  }
  // tracking_id
  if (!rosidl_runtime_c__String__copy(
      &(input->tracking_id), &(output->tracking_id)))
  {
    return false;
  }
  return true;
}

interfaces_pkg__msg__Detection *
interfaces_pkg__msg__Detection__create()
{
  interfaces_pkg__msg__Detection * msg = (interfaces_pkg__msg__Detection *)malloc(sizeof(interfaces_pkg__msg__Detection));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_pkg__msg__Detection));
  bool success = interfaces_pkg__msg__Detection__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_pkg__msg__Detection__destroy(interfaces_pkg__msg__Detection * msg)
{
  if (msg) {
    interfaces_pkg__msg__Detection__fini(msg);
  }
  free(msg);
}


bool
interfaces_pkg__msg__Detection__Sequence__init(interfaces_pkg__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_pkg__msg__Detection * data = NULL;
  if (size) {
    data = (interfaces_pkg__msg__Detection *)calloc(size, sizeof(interfaces_pkg__msg__Detection));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_pkg__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_pkg__msg__Detection__fini(&data[i - 1]);
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
interfaces_pkg__msg__Detection__Sequence__fini(interfaces_pkg__msg__Detection__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_pkg__msg__Detection__fini(&array->data[i]);
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

interfaces_pkg__msg__Detection__Sequence *
interfaces_pkg__msg__Detection__Sequence__create(size_t size)
{
  interfaces_pkg__msg__Detection__Sequence * array = (interfaces_pkg__msg__Detection__Sequence *)malloc(sizeof(interfaces_pkg__msg__Detection__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_pkg__msg__Detection__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_pkg__msg__Detection__Sequence__destroy(interfaces_pkg__msg__Detection__Sequence * array)
{
  if (array) {
    interfaces_pkg__msg__Detection__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces_pkg__msg__Detection__Sequence__are_equal(const interfaces_pkg__msg__Detection__Sequence * lhs, const interfaces_pkg__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_pkg__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_pkg__msg__Detection__Sequence__copy(
  const interfaces_pkg__msg__Detection__Sequence * input,
  interfaces_pkg__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_pkg__msg__Detection);
    interfaces_pkg__msg__Detection * data =
      (interfaces_pkg__msg__Detection *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_pkg__msg__Detection__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces_pkg__msg__Detection__fini(&data[i]);
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
    if (!interfaces_pkg__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
