// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from practice_package_msgs:msg/PoseToVal.idl
// generated code does not contain a copyright notice

#ifndef PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__FUNCTIONS_H_
#define PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "practice_package_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "practice_package_msgs/msg/detail/pose_to_val__struct.h"

/// Initialize msg/PoseToVal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * practice_package_msgs__msg__PoseToVal
 * )) before or use
 * practice_package_msgs__msg__PoseToVal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
bool
practice_package_msgs__msg__PoseToVal__init(practice_package_msgs__msg__PoseToVal * msg);

/// Finalize msg/PoseToVal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
void
practice_package_msgs__msg__PoseToVal__fini(practice_package_msgs__msg__PoseToVal * msg);

/// Create msg/PoseToVal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * practice_package_msgs__msg__PoseToVal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
practice_package_msgs__msg__PoseToVal *
practice_package_msgs__msg__PoseToVal__create();

/// Destroy msg/PoseToVal message.
/**
 * It calls
 * practice_package_msgs__msg__PoseToVal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
void
practice_package_msgs__msg__PoseToVal__destroy(practice_package_msgs__msg__PoseToVal * msg);

/// Check for msg/PoseToVal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
bool
practice_package_msgs__msg__PoseToVal__are_equal(const practice_package_msgs__msg__PoseToVal * lhs, const practice_package_msgs__msg__PoseToVal * rhs);

/// Copy a msg/PoseToVal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
bool
practice_package_msgs__msg__PoseToVal__copy(
  const practice_package_msgs__msg__PoseToVal * input,
  practice_package_msgs__msg__PoseToVal * output);

/// Initialize array of msg/PoseToVal messages.
/**
 * It allocates the memory for the number of elements and calls
 * practice_package_msgs__msg__PoseToVal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
bool
practice_package_msgs__msg__PoseToVal__Sequence__init(practice_package_msgs__msg__PoseToVal__Sequence * array, size_t size);

/// Finalize array of msg/PoseToVal messages.
/**
 * It calls
 * practice_package_msgs__msg__PoseToVal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
void
practice_package_msgs__msg__PoseToVal__Sequence__fini(practice_package_msgs__msg__PoseToVal__Sequence * array);

/// Create array of msg/PoseToVal messages.
/**
 * It allocates the memory for the array and calls
 * practice_package_msgs__msg__PoseToVal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
practice_package_msgs__msg__PoseToVal__Sequence *
practice_package_msgs__msg__PoseToVal__Sequence__create(size_t size);

/// Destroy array of msg/PoseToVal messages.
/**
 * It calls
 * practice_package_msgs__msg__PoseToVal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
void
practice_package_msgs__msg__PoseToVal__Sequence__destroy(practice_package_msgs__msg__PoseToVal__Sequence * array);

/// Check for msg/PoseToVal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
bool
practice_package_msgs__msg__PoseToVal__Sequence__are_equal(const practice_package_msgs__msg__PoseToVal__Sequence * lhs, const practice_package_msgs__msg__PoseToVal__Sequence * rhs);

/// Copy an array of msg/PoseToVal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_practice_package_msgs
bool
practice_package_msgs__msg__PoseToVal__Sequence__copy(
  const practice_package_msgs__msg__PoseToVal__Sequence * input,
  practice_package_msgs__msg__PoseToVal__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__FUNCTIONS_H_
