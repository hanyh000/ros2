// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from laser_package_msgs:msg/Laser.idl
// generated code does not contain a copyright notice

#ifndef LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__STRUCT_H_
#define LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ranges'
// Member 'intensities'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'pattern_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Laser in the package laser_package_msgs.
typedef struct laser_package_msgs__msg__Laser
{
  float angle_min;
  float angle_max;
  float angle_increment;
  float range_min;
  float range_max;
  rosidl_runtime_c__float__Sequence ranges;
  rosidl_runtime_c__float__Sequence intensities;
  rosidl_runtime_c__String pattern_name;
} laser_package_msgs__msg__Laser;

// Struct for a sequence of laser_package_msgs__msg__Laser.
typedef struct laser_package_msgs__msg__Laser__Sequence
{
  laser_package_msgs__msg__Laser * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} laser_package_msgs__msg__Laser__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__STRUCT_H_
