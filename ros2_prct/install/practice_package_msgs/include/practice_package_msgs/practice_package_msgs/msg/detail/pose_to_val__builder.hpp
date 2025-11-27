// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from practice_package_msgs:msg/PoseToVal.idl
// generated code does not contain a copyright notice

#ifndef PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__BUILDER_HPP_
#define PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "practice_package_msgs/msg/detail/pose_to_val__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace practice_package_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseToVal_timer
{
public:
  explicit Init_PoseToVal_timer(::practice_package_msgs::msg::PoseToVal & msg)
  : msg_(msg)
  {}
  ::practice_package_msgs::msg::PoseToVal timer(::practice_package_msgs::msg::PoseToVal::_timer_type arg)
  {
    msg_.timer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::practice_package_msgs::msg::PoseToVal msg_;
};

class Init_PoseToVal_pose_theta
{
public:
  explicit Init_PoseToVal_pose_theta(::practice_package_msgs::msg::PoseToVal & msg)
  : msg_(msg)
  {}
  Init_PoseToVal_timer pose_theta(::practice_package_msgs::msg::PoseToVal::_pose_theta_type arg)
  {
    msg_.pose_theta = std::move(arg);
    return Init_PoseToVal_timer(msg_);
  }

private:
  ::practice_package_msgs::msg::PoseToVal msg_;
};

class Init_PoseToVal_pose_y
{
public:
  explicit Init_PoseToVal_pose_y(::practice_package_msgs::msg::PoseToVal & msg)
  : msg_(msg)
  {}
  Init_PoseToVal_pose_theta pose_y(::practice_package_msgs::msg::PoseToVal::_pose_y_type arg)
  {
    msg_.pose_y = std::move(arg);
    return Init_PoseToVal_pose_theta(msg_);
  }

private:
  ::practice_package_msgs::msg::PoseToVal msg_;
};

class Init_PoseToVal_pose_x
{
public:
  Init_PoseToVal_pose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseToVal_pose_y pose_x(::practice_package_msgs::msg::PoseToVal::_pose_x_type arg)
  {
    msg_.pose_x = std::move(arg);
    return Init_PoseToVal_pose_y(msg_);
  }

private:
  ::practice_package_msgs::msg::PoseToVal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::practice_package_msgs::msg::PoseToVal>()
{
  return practice_package_msgs::msg::builder::Init_PoseToVal_pose_x();
}

}  // namespace practice_package_msgs

#endif  // PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__BUILDER_HPP_
