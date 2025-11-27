// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from laser_package_msgs:msg/Laser.idl
// generated code does not contain a copyright notice

#ifndef LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__BUILDER_HPP_
#define LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "laser_package_msgs/msg/detail/laser__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace laser_package_msgs
{

namespace msg
{

namespace builder
{

class Init_Laser_pattern_name
{
public:
  explicit Init_Laser_pattern_name(::laser_package_msgs::msg::Laser & msg)
  : msg_(msg)
  {}
  ::laser_package_msgs::msg::Laser pattern_name(::laser_package_msgs::msg::Laser::_pattern_name_type arg)
  {
    msg_.pattern_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::laser_package_msgs::msg::Laser msg_;
};

class Init_Laser_intensities
{
public:
  explicit Init_Laser_intensities(::laser_package_msgs::msg::Laser & msg)
  : msg_(msg)
  {}
  Init_Laser_pattern_name intensities(::laser_package_msgs::msg::Laser::_intensities_type arg)
  {
    msg_.intensities = std::move(arg);
    return Init_Laser_pattern_name(msg_);
  }

private:
  ::laser_package_msgs::msg::Laser msg_;
};

class Init_Laser_ranges
{
public:
  explicit Init_Laser_ranges(::laser_package_msgs::msg::Laser & msg)
  : msg_(msg)
  {}
  Init_Laser_intensities ranges(::laser_package_msgs::msg::Laser::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return Init_Laser_intensities(msg_);
  }

private:
  ::laser_package_msgs::msg::Laser msg_;
};

class Init_Laser_range_max
{
public:
  explicit Init_Laser_range_max(::laser_package_msgs::msg::Laser & msg)
  : msg_(msg)
  {}
  Init_Laser_ranges range_max(::laser_package_msgs::msg::Laser::_range_max_type arg)
  {
    msg_.range_max = std::move(arg);
    return Init_Laser_ranges(msg_);
  }

private:
  ::laser_package_msgs::msg::Laser msg_;
};

class Init_Laser_range_min
{
public:
  explicit Init_Laser_range_min(::laser_package_msgs::msg::Laser & msg)
  : msg_(msg)
  {}
  Init_Laser_range_max range_min(::laser_package_msgs::msg::Laser::_range_min_type arg)
  {
    msg_.range_min = std::move(arg);
    return Init_Laser_range_max(msg_);
  }

private:
  ::laser_package_msgs::msg::Laser msg_;
};

class Init_Laser_angle_increment
{
public:
  explicit Init_Laser_angle_increment(::laser_package_msgs::msg::Laser & msg)
  : msg_(msg)
  {}
  Init_Laser_range_min angle_increment(::laser_package_msgs::msg::Laser::_angle_increment_type arg)
  {
    msg_.angle_increment = std::move(arg);
    return Init_Laser_range_min(msg_);
  }

private:
  ::laser_package_msgs::msg::Laser msg_;
};

class Init_Laser_angle_max
{
public:
  explicit Init_Laser_angle_max(::laser_package_msgs::msg::Laser & msg)
  : msg_(msg)
  {}
  Init_Laser_angle_increment angle_max(::laser_package_msgs::msg::Laser::_angle_max_type arg)
  {
    msg_.angle_max = std::move(arg);
    return Init_Laser_angle_increment(msg_);
  }

private:
  ::laser_package_msgs::msg::Laser msg_;
};

class Init_Laser_angle_min
{
public:
  Init_Laser_angle_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Laser_angle_max angle_min(::laser_package_msgs::msg::Laser::_angle_min_type arg)
  {
    msg_.angle_min = std::move(arg);
    return Init_Laser_angle_max(msg_);
  }

private:
  ::laser_package_msgs::msg::Laser msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::laser_package_msgs::msg::Laser>()
{
  return laser_package_msgs::msg::builder::Init_Laser_angle_min();
}

}  // namespace laser_package_msgs

#endif  // LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__BUILDER_HPP_
