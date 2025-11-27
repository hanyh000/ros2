// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from laser_package_msgs:msg/Laser.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "laser_package_msgs/msg/detail/laser__rosidl_typesupport_introspection_c.h"
#include "laser_package_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "laser_package_msgs/msg/detail/laser__functions.h"
#include "laser_package_msgs/msg/detail/laser__struct.h"


// Include directives for member types
// Member `ranges`
// Member `intensities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pattern_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  laser_package_msgs__msg__Laser__init(message_memory);
}

void laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_fini_function(void * message_memory)
{
  laser_package_msgs__msg__Laser__fini(message_memory);
}

size_t laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__size_function__Laser__ranges(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_const_function__Laser__ranges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_function__Laser__ranges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__fetch_function__Laser__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_const_function__Laser__ranges(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__assign_function__Laser__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_function__Laser__ranges(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__resize_function__Laser__ranges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__size_function__Laser__intensities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_const_function__Laser__intensities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_function__Laser__intensities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__fetch_function__Laser__intensities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_const_function__Laser__intensities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__assign_function__Laser__intensities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_function__Laser__intensities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__resize_function__Laser__intensities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_message_member_array[8] = {
  {
    "angle_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laser_package_msgs__msg__Laser, angle_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laser_package_msgs__msg__Laser, angle_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_increment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laser_package_msgs__msg__Laser, angle_increment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laser_package_msgs__msg__Laser, range_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laser_package_msgs__msg__Laser, range_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laser_package_msgs__msg__Laser, ranges),  // bytes offset in struct
    NULL,  // default value
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__size_function__Laser__ranges,  // size() function pointer
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_const_function__Laser__ranges,  // get_const(index) function pointer
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_function__Laser__ranges,  // get(index) function pointer
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__fetch_function__Laser__ranges,  // fetch(index, &value) function pointer
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__assign_function__Laser__ranges,  // assign(index, value) function pointer
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__resize_function__Laser__ranges  // resize(index) function pointer
  },
  {
    "intensities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laser_package_msgs__msg__Laser, intensities),  // bytes offset in struct
    NULL,  // default value
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__size_function__Laser__intensities,  // size() function pointer
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_const_function__Laser__intensities,  // get_const(index) function pointer
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__get_function__Laser__intensities,  // get(index) function pointer
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__fetch_function__Laser__intensities,  // fetch(index, &value) function pointer
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__assign_function__Laser__intensities,  // assign(index, value) function pointer
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__resize_function__Laser__intensities  // resize(index) function pointer
  },
  {
    "pattern_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(laser_package_msgs__msg__Laser, pattern_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_message_members = {
  "laser_package_msgs__msg",  // message namespace
  "Laser",  // message name
  8,  // number of fields
  sizeof(laser_package_msgs__msg__Laser),
  laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_message_member_array,  // message members
  laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_init_function,  // function to initialize message memory (memory has to be allocated)
  laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_message_type_support_handle = {
  0,
  &laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_laser_package_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, laser_package_msgs, msg, Laser)() {
  if (!laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_message_type_support_handle.typesupport_identifier) {
    laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &laser_package_msgs__msg__Laser__rosidl_typesupport_introspection_c__Laser_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
