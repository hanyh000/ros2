// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from laser_package_msgs:msg/Laser.idl
// generated code does not contain a copyright notice

#ifndef LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__FUNCTIONS_H_
#define LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "laser_package_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "laser_package_msgs/msg/detail/laser__struct.h"

/// Initialize msg/Laser message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * laser_package_msgs__msg__Laser
 * )) before or use
 * laser_package_msgs__msg__Laser__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
bool
laser_package_msgs__msg__Laser__init(laser_package_msgs__msg__Laser * msg);

/// Finalize msg/Laser message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
void
laser_package_msgs__msg__Laser__fini(laser_package_msgs__msg__Laser * msg);

/// Create msg/Laser message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * laser_package_msgs__msg__Laser__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
laser_package_msgs__msg__Laser *
laser_package_msgs__msg__Laser__create();

/// Destroy msg/Laser message.
/**
 * It calls
 * laser_package_msgs__msg__Laser__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
void
laser_package_msgs__msg__Laser__destroy(laser_package_msgs__msg__Laser * msg);

/// Check for msg/Laser message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
bool
laser_package_msgs__msg__Laser__are_equal(const laser_package_msgs__msg__Laser * lhs, const laser_package_msgs__msg__Laser * rhs);

/// Copy a msg/Laser message.
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
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
bool
laser_package_msgs__msg__Laser__copy(
  const laser_package_msgs__msg__Laser * input,
  laser_package_msgs__msg__Laser * output);

/// Initialize array of msg/Laser messages.
/**
 * It allocates the memory for the number of elements and calls
 * laser_package_msgs__msg__Laser__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
bool
laser_package_msgs__msg__Laser__Sequence__init(laser_package_msgs__msg__Laser__Sequence * array, size_t size);

/// Finalize array of msg/Laser messages.
/**
 * It calls
 * laser_package_msgs__msg__Laser__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
void
laser_package_msgs__msg__Laser__Sequence__fini(laser_package_msgs__msg__Laser__Sequence * array);

/// Create array of msg/Laser messages.
/**
 * It allocates the memory for the array and calls
 * laser_package_msgs__msg__Laser__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
laser_package_msgs__msg__Laser__Sequence *
laser_package_msgs__msg__Laser__Sequence__create(size_t size);

/// Destroy array of msg/Laser messages.
/**
 * It calls
 * laser_package_msgs__msg__Laser__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
void
laser_package_msgs__msg__Laser__Sequence__destroy(laser_package_msgs__msg__Laser__Sequence * array);

/// Check for msg/Laser message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
bool
laser_package_msgs__msg__Laser__Sequence__are_equal(const laser_package_msgs__msg__Laser__Sequence * lhs, const laser_package_msgs__msg__Laser__Sequence * rhs);

/// Copy an array of msg/Laser messages.
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
ROSIDL_GENERATOR_C_PUBLIC_laser_package_msgs
bool
laser_package_msgs__msg__Laser__Sequence__copy(
  const laser_package_msgs__msg__Laser__Sequence * input,
  laser_package_msgs__msg__Laser__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__FUNCTIONS_H_
