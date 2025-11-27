// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from laser_package_msgs:msg/Laser.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "laser_package_msgs/msg/detail/laser__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace laser_package_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Laser_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Laser_type_support_ids_t;

static const _Laser_type_support_ids_t _Laser_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Laser_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Laser_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Laser_type_support_symbol_names_t _Laser_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, laser_package_msgs, msg, Laser)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, laser_package_msgs, msg, Laser)),
  }
};

typedef struct _Laser_type_support_data_t
{
  void * data[2];
} _Laser_type_support_data_t;

static _Laser_type_support_data_t _Laser_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Laser_message_typesupport_map = {
  2,
  "laser_package_msgs",
  &_Laser_message_typesupport_ids.typesupport_identifier[0],
  &_Laser_message_typesupport_symbol_names.symbol_name[0],
  &_Laser_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Laser_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Laser_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace laser_package_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<laser_package_msgs::msg::Laser>()
{
  return &::laser_package_msgs::msg::rosidl_typesupport_cpp::Laser_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, laser_package_msgs, msg, Laser)() {
  return get_message_type_support_handle<laser_package_msgs::msg::Laser>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
