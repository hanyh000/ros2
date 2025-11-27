// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from laser_package_msgs:msg/Laser.idl
// generated code does not contain a copyright notice

#ifndef LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__TRAITS_HPP_
#define LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "laser_package_msgs/msg/detail/laser__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace laser_package_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Laser & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle_min
  {
    out << "angle_min: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_min, out);
    out << ", ";
  }

  // member: angle_max
  {
    out << "angle_max: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_max, out);
    out << ", ";
  }

  // member: angle_increment
  {
    out << "angle_increment: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_increment, out);
    out << ", ";
  }

  // member: range_min
  {
    out << "range_min: ";
    rosidl_generator_traits::value_to_yaml(msg.range_min, out);
    out << ", ";
  }

  // member: range_max
  {
    out << "range_max: ";
    rosidl_generator_traits::value_to_yaml(msg.range_max, out);
    out << ", ";
  }

  // member: ranges
  {
    if (msg.ranges.size() == 0) {
      out << "ranges: []";
    } else {
      out << "ranges: [";
      size_t pending_items = msg.ranges.size();
      for (auto item : msg.ranges) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intensities
  {
    if (msg.intensities.size() == 0) {
      out << "intensities: []";
    } else {
      out << "intensities: [";
      size_t pending_items = msg.intensities.size();
      for (auto item : msg.intensities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pattern_name
  {
    out << "pattern_name: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Laser & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_min: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_min, out);
    out << "\n";
  }

  // member: angle_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_max: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_max, out);
    out << "\n";
  }

  // member: angle_increment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_increment: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_increment, out);
    out << "\n";
  }

  // member: range_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_min: ";
    rosidl_generator_traits::value_to_yaml(msg.range_min, out);
    out << "\n";
  }

  // member: range_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_max: ";
    rosidl_generator_traits::value_to_yaml(msg.range_max, out);
    out << "\n";
  }

  // member: ranges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ranges.size() == 0) {
      out << "ranges: []\n";
    } else {
      out << "ranges:\n";
      for (auto item : msg.ranges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: intensities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intensities.size() == 0) {
      out << "intensities: []\n";
    } else {
      out << "intensities:\n";
      for (auto item : msg.intensities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pattern_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pattern_name: ";
    rosidl_generator_traits::value_to_yaml(msg.pattern_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Laser & msg, bool use_flow_style = false)
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

}  // namespace laser_package_msgs

namespace rosidl_generator_traits
{

[[deprecated("use laser_package_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const laser_package_msgs::msg::Laser & msg,
  std::ostream & out, size_t indentation = 0)
{
  laser_package_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use laser_package_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const laser_package_msgs::msg::Laser & msg)
{
  return laser_package_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<laser_package_msgs::msg::Laser>()
{
  return "laser_package_msgs::msg::Laser";
}

template<>
inline const char * name<laser_package_msgs::msg::Laser>()
{
  return "laser_package_msgs/msg/Laser";
}

template<>
struct has_fixed_size<laser_package_msgs::msg::Laser>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<laser_package_msgs::msg::Laser>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<laser_package_msgs::msg::Laser>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__TRAITS_HPP_
