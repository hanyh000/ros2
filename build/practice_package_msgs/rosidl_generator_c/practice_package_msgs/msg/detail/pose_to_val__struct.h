// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from practice_package_msgs:msg/PoseToVal.idl
// generated code does not contain a copyright notice

#ifndef PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__STRUCT_H_
#define PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PoseToVal in the package practice_package_msgs.
typedef struct practice_package_msgs__msg__PoseToVal
{
  float pose_x;
  float pose_y;
  float pose_theta;
  float timer;
} practice_package_msgs__msg__PoseToVal;

// Struct for a sequence of practice_package_msgs__msg__PoseToVal.
typedef struct practice_package_msgs__msg__PoseToVal__Sequence
{
  practice_package_msgs__msg__PoseToVal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} practice_package_msgs__msg__PoseToVal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__STRUCT_H_
