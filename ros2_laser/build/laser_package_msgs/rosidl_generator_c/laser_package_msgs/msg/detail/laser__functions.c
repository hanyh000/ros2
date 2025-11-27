// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from laser_package_msgs:msg/Laser.idl
// generated code does not contain a copyright notice
#include "laser_package_msgs/msg/detail/laser__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ranges`
// Member `intensities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pattern_name`
#include "rosidl_runtime_c/string_functions.h"

bool
laser_package_msgs__msg__Laser__init(laser_package_msgs__msg__Laser * msg)
{
  if (!msg) {
    return false;
  }
  // angle_min
  // angle_max
  // angle_increment
  // range_min
  // range_max
  // ranges
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ranges, 0)) {
    laser_package_msgs__msg__Laser__fini(msg);
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->intensities, 0)) {
    laser_package_msgs__msg__Laser__fini(msg);
    return false;
  }
  // pattern_name
  if (!rosidl_runtime_c__String__init(&msg->pattern_name)) {
    laser_package_msgs__msg__Laser__fini(msg);
    return false;
  }
  return true;
}

void
laser_package_msgs__msg__Laser__fini(laser_package_msgs__msg__Laser * msg)
{
  if (!msg) {
    return;
  }
  // angle_min
  // angle_max
  // angle_increment
  // range_min
  // range_max
  // ranges
  rosidl_runtime_c__float__Sequence__fini(&msg->ranges);
  // intensities
  rosidl_runtime_c__float__Sequence__fini(&msg->intensities);
  // pattern_name
  rosidl_runtime_c__String__fini(&msg->pattern_name);
}

bool
laser_package_msgs__msg__Laser__are_equal(const laser_package_msgs__msg__Laser * lhs, const laser_package_msgs__msg__Laser * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle_min
  if (lhs->angle_min != rhs->angle_min) {
    return false;
  }
  // angle_max
  if (lhs->angle_max != rhs->angle_max) {
    return false;
  }
  // angle_increment
  if (lhs->angle_increment != rhs->angle_increment) {
    return false;
  }
  // range_min
  if (lhs->range_min != rhs->range_min) {
    return false;
  }
  // range_max
  if (lhs->range_max != rhs->range_max) {
    return false;
  }
  // ranges
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ranges), &(rhs->ranges)))
  {
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->intensities), &(rhs->intensities)))
  {
    return false;
  }
  // pattern_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pattern_name), &(rhs->pattern_name)))
  {
    return false;
  }
  return true;
}

bool
laser_package_msgs__msg__Laser__copy(
  const laser_package_msgs__msg__Laser * input,
  laser_package_msgs__msg__Laser * output)
{
  if (!input || !output) {
    return false;
  }
  // angle_min
  output->angle_min = input->angle_min;
  // angle_max
  output->angle_max = input->angle_max;
  // angle_increment
  output->angle_increment = input->angle_increment;
  // range_min
  output->range_min = input->range_min;
  // range_max
  output->range_max = input->range_max;
  // ranges
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ranges), &(output->ranges)))
  {
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->intensities), &(output->intensities)))
  {
    return false;
  }
  // pattern_name
  if (!rosidl_runtime_c__String__copy(
      &(input->pattern_name), &(output->pattern_name)))
  {
    return false;
  }
  return true;
}

laser_package_msgs__msg__Laser *
laser_package_msgs__msg__Laser__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  laser_package_msgs__msg__Laser * msg = (laser_package_msgs__msg__Laser *)allocator.allocate(sizeof(laser_package_msgs__msg__Laser), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(laser_package_msgs__msg__Laser));
  bool success = laser_package_msgs__msg__Laser__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
laser_package_msgs__msg__Laser__destroy(laser_package_msgs__msg__Laser * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    laser_package_msgs__msg__Laser__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
laser_package_msgs__msg__Laser__Sequence__init(laser_package_msgs__msg__Laser__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  laser_package_msgs__msg__Laser * data = NULL;

  if (size) {
    data = (laser_package_msgs__msg__Laser *)allocator.zero_allocate(size, sizeof(laser_package_msgs__msg__Laser), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = laser_package_msgs__msg__Laser__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        laser_package_msgs__msg__Laser__fini(&data[i - 1]);
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
laser_package_msgs__msg__Laser__Sequence__fini(laser_package_msgs__msg__Laser__Sequence * array)
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
      laser_package_msgs__msg__Laser__fini(&array->data[i]);
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

laser_package_msgs__msg__Laser__Sequence *
laser_package_msgs__msg__Laser__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  laser_package_msgs__msg__Laser__Sequence * array = (laser_package_msgs__msg__Laser__Sequence *)allocator.allocate(sizeof(laser_package_msgs__msg__Laser__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = laser_package_msgs__msg__Laser__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
laser_package_msgs__msg__Laser__Sequence__destroy(laser_package_msgs__msg__Laser__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    laser_package_msgs__msg__Laser__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
laser_package_msgs__msg__Laser__Sequence__are_equal(const laser_package_msgs__msg__Laser__Sequence * lhs, const laser_package_msgs__msg__Laser__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!laser_package_msgs__msg__Laser__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
laser_package_msgs__msg__Laser__Sequence__copy(
  const laser_package_msgs__msg__Laser__Sequence * input,
  laser_package_msgs__msg__Laser__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(laser_package_msgs__msg__Laser);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    laser_package_msgs__msg__Laser * data =
      (laser_package_msgs__msg__Laser *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!laser_package_msgs__msg__Laser__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          laser_package_msgs__msg__Laser__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!laser_package_msgs__msg__Laser__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
