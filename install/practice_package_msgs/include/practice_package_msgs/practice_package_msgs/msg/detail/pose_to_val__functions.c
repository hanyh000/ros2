// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from practice_package_msgs:msg/PoseToVal.idl
// generated code does not contain a copyright notice
#include "practice_package_msgs/msg/detail/pose_to_val__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
practice_package_msgs__msg__PoseToVal__init(practice_package_msgs__msg__PoseToVal * msg)
{
  if (!msg) {
    return false;
  }
  // pose_x
  // pose_y
  // pose_theta
  // timer
  return true;
}

void
practice_package_msgs__msg__PoseToVal__fini(practice_package_msgs__msg__PoseToVal * msg)
{
  if (!msg) {
    return;
  }
  // pose_x
  // pose_y
  // pose_theta
  // timer
}

bool
practice_package_msgs__msg__PoseToVal__are_equal(const practice_package_msgs__msg__PoseToVal * lhs, const practice_package_msgs__msg__PoseToVal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose_x
  if (lhs->pose_x != rhs->pose_x) {
    return false;
  }
  // pose_y
  if (lhs->pose_y != rhs->pose_y) {
    return false;
  }
  // pose_theta
  if (lhs->pose_theta != rhs->pose_theta) {
    return false;
  }
  // timer
  if (lhs->timer != rhs->timer) {
    return false;
  }
  return true;
}

bool
practice_package_msgs__msg__PoseToVal__copy(
  const practice_package_msgs__msg__PoseToVal * input,
  practice_package_msgs__msg__PoseToVal * output)
{
  if (!input || !output) {
    return false;
  }
  // pose_x
  output->pose_x = input->pose_x;
  // pose_y
  output->pose_y = input->pose_y;
  // pose_theta
  output->pose_theta = input->pose_theta;
  // timer
  output->timer = input->timer;
  return true;
}

practice_package_msgs__msg__PoseToVal *
practice_package_msgs__msg__PoseToVal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  practice_package_msgs__msg__PoseToVal * msg = (practice_package_msgs__msg__PoseToVal *)allocator.allocate(sizeof(practice_package_msgs__msg__PoseToVal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(practice_package_msgs__msg__PoseToVal));
  bool success = practice_package_msgs__msg__PoseToVal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
practice_package_msgs__msg__PoseToVal__destroy(practice_package_msgs__msg__PoseToVal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    practice_package_msgs__msg__PoseToVal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
practice_package_msgs__msg__PoseToVal__Sequence__init(practice_package_msgs__msg__PoseToVal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  practice_package_msgs__msg__PoseToVal * data = NULL;

  if (size) {
    data = (practice_package_msgs__msg__PoseToVal *)allocator.zero_allocate(size, sizeof(practice_package_msgs__msg__PoseToVal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = practice_package_msgs__msg__PoseToVal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        practice_package_msgs__msg__PoseToVal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
practice_package_msgs__msg__PoseToVal__Sequence__fini(practice_package_msgs__msg__PoseToVal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      practice_package_msgs__msg__PoseToVal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

practice_package_msgs__msg__PoseToVal__Sequence *
practice_package_msgs__msg__PoseToVal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  practice_package_msgs__msg__PoseToVal__Sequence * array = (practice_package_msgs__msg__PoseToVal__Sequence *)allocator.allocate(sizeof(practice_package_msgs__msg__PoseToVal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = practice_package_msgs__msg__PoseToVal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
practice_package_msgs__msg__PoseToVal__Sequence__destroy(practice_package_msgs__msg__PoseToVal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    practice_package_msgs__msg__PoseToVal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
practice_package_msgs__msg__PoseToVal__Sequence__are_equal(const practice_package_msgs__msg__PoseToVal__Sequence * lhs, const practice_package_msgs__msg__PoseToVal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!practice_package_msgs__msg__PoseToVal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
practice_package_msgs__msg__PoseToVal__Sequence__copy(
  const practice_package_msgs__msg__PoseToVal__Sequence * input,
  practice_package_msgs__msg__PoseToVal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(practice_package_msgs__msg__PoseToVal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    practice_package_msgs__msg__PoseToVal * data =
      (practice_package_msgs__msg__PoseToVal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!practice_package_msgs__msg__PoseToVal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          practice_package_msgs__msg__PoseToVal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!practice_package_msgs__msg__PoseToVal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
