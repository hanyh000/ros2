// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from practice_package_msgs:msg/PoseToVal.idl
// generated code does not contain a copyright notice

#ifndef PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__TRAITS_HPP_
#define PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "practice_package_msgs/msg/detail/pose_to_val__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace practice_package_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseToVal & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose_x
  {
    out << "pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_x, out);
    out << ", ";
  }

  // member: pose_y
  {
    out << "pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_y, out);
    out << ", ";
  }

  // member: pose_theta
  {
    out << "pose_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_theta, out);
    out << ", ";
  }

  // member: timer
  {
    out << "timer: ";
    rosidl_generator_traits::value_to_yaml(msg.timer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseToVal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_x, out);
    out << "\n";
  }

  // member: pose_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_y, out);
    out << "\n";
  }

  // member: pose_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_theta, out);
    out << "\n";
  }

  // member: timer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timer: ";
    rosidl_generator_traits::value_to_yaml(msg.timer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseToVal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace practice_package_msgs

namespace rosidl_generator_traits
{

[[deprecated("use practice_package_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const practice_package_msgs::msg::PoseToVal & msg,
  std::ostream & out, size_t indentation = 0)
{
  practice_package_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use practice_package_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const practice_package_msgs::msg::PoseToVal & msg)
{
  return practice_package_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<practice_package_msgs::msg::PoseToVal>()
{
  return "practice_package_msgs::msg::PoseToVal";
}

template<>
inline const char * name<practice_package_msgs::msg::PoseToVal>()
{
  return "practice_package_msgs/msg/PoseToVal";
}

template<>
struct has_fixed_size<practice_package_msgs::msg::PoseToVal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<practice_package_msgs::msg::PoseToVal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<practice_package_msgs::msg::PoseToVal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__TRAITS_HPP_
