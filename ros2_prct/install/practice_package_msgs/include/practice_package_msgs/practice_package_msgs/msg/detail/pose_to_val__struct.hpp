// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from practice_package_msgs:msg/PoseToVal.idl
// generated code does not contain a copyright notice

#ifndef PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__STRUCT_HPP_
#define PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__practice_package_msgs__msg__PoseToVal __attribute__((deprecated))
#else
# define DEPRECATED__practice_package_msgs__msg__PoseToVal __declspec(deprecated)
#endif

namespace practice_package_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseToVal_
{
  using Type = PoseToVal_<ContainerAllocator>;

  explicit PoseToVal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose_x = 0.0f;
      this->pose_y = 0.0f;
      this->pose_theta = 0.0f;
      this->timer = 0.0f;
    }
  }

  explicit PoseToVal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose_x = 0.0f;
      this->pose_y = 0.0f;
      this->pose_theta = 0.0f;
      this->timer = 0.0f;
    }
  }

  // field types and members
  using _pose_x_type =
    float;
  _pose_x_type pose_x;
  using _pose_y_type =
    float;
  _pose_y_type pose_y;
  using _pose_theta_type =
    float;
  _pose_theta_type pose_theta;
  using _timer_type =
    float;
  _timer_type timer;

  // setters for named parameter idiom
  Type & set__pose_x(
    const float & _arg)
  {
    this->pose_x = _arg;
    return *this;
  }
  Type & set__pose_y(
    const float & _arg)
  {
    this->pose_y = _arg;
    return *this;
  }
  Type & set__pose_theta(
    const float & _arg)
  {
    this->pose_theta = _arg;
    return *this;
  }
  Type & set__timer(
    const float & _arg)
  {
    this->timer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    practice_package_msgs::msg::PoseToVal_<ContainerAllocator> *;
  using ConstRawPtr =
    const practice_package_msgs::msg::PoseToVal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<practice_package_msgs::msg::PoseToVal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<practice_package_msgs::msg::PoseToVal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      practice_package_msgs::msg::PoseToVal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<practice_package_msgs::msg::PoseToVal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      practice_package_msgs::msg::PoseToVal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<practice_package_msgs::msg::PoseToVal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<practice_package_msgs::msg::PoseToVal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<practice_package_msgs::msg::PoseToVal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__practice_package_msgs__msg__PoseToVal
    std::shared_ptr<practice_package_msgs::msg::PoseToVal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__practice_package_msgs__msg__PoseToVal
    std::shared_ptr<practice_package_msgs::msg::PoseToVal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseToVal_ & other) const
  {
    if (this->pose_x != other.pose_x) {
      return false;
    }
    if (this->pose_y != other.pose_y) {
      return false;
    }
    if (this->pose_theta != other.pose_theta) {
      return false;
    }
    if (this->timer != other.timer) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseToVal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseToVal_

// alias to use template instance with default allocator
using PoseToVal =
  practice_package_msgs::msg::PoseToVal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace practice_package_msgs

#endif  // PRACTICE_PACKAGE_MSGS__MSG__DETAIL__POSE_TO_VAL__STRUCT_HPP_
