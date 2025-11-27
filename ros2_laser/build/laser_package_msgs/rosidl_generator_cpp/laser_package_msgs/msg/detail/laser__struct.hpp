// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from laser_package_msgs:msg/Laser.idl
// generated code does not contain a copyright notice

#ifndef LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__STRUCT_HPP_
#define LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__laser_package_msgs__msg__Laser __attribute__((deprecated))
#else
# define DEPRECATED__laser_package_msgs__msg__Laser __declspec(deprecated)
#endif

namespace laser_package_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Laser_
{
  using Type = Laser_<ContainerAllocator>;

  explicit Laser_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_min = 0.0f;
      this->angle_max = 0.0f;
      this->angle_increment = 0.0f;
      this->range_min = 0.0f;
      this->range_max = 0.0f;
      this->pattern_name = "";
    }
  }

  explicit Laser_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pattern_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_min = 0.0f;
      this->angle_max = 0.0f;
      this->angle_increment = 0.0f;
      this->range_min = 0.0f;
      this->range_max = 0.0f;
      this->pattern_name = "";
    }
  }

  // field types and members
  using _angle_min_type =
    float;
  _angle_min_type angle_min;
  using _angle_max_type =
    float;
  _angle_max_type angle_max;
  using _angle_increment_type =
    float;
  _angle_increment_type angle_increment;
  using _range_min_type =
    float;
  _range_min_type range_min;
  using _range_max_type =
    float;
  _range_max_type range_max;
  using _ranges_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ranges_type ranges;
  using _intensities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _intensities_type intensities;
  using _pattern_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pattern_name_type pattern_name;

  // setters for named parameter idiom
  Type & set__angle_min(
    const float & _arg)
  {
    this->angle_min = _arg;
    return *this;
  }
  Type & set__angle_max(
    const float & _arg)
  {
    this->angle_max = _arg;
    return *this;
  }
  Type & set__angle_increment(
    const float & _arg)
  {
    this->angle_increment = _arg;
    return *this;
  }
  Type & set__range_min(
    const float & _arg)
  {
    this->range_min = _arg;
    return *this;
  }
  Type & set__range_max(
    const float & _arg)
  {
    this->range_max = _arg;
    return *this;
  }
  Type & set__ranges(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ranges = _arg;
    return *this;
  }
  Type & set__intensities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->intensities = _arg;
    return *this;
  }
  Type & set__pattern_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pattern_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    laser_package_msgs::msg::Laser_<ContainerAllocator> *;
  using ConstRawPtr =
    const laser_package_msgs::msg::Laser_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<laser_package_msgs::msg::Laser_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<laser_package_msgs::msg::Laser_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      laser_package_msgs::msg::Laser_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<laser_package_msgs::msg::Laser_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      laser_package_msgs::msg::Laser_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<laser_package_msgs::msg::Laser_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<laser_package_msgs::msg::Laser_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<laser_package_msgs::msg::Laser_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__laser_package_msgs__msg__Laser
    std::shared_ptr<laser_package_msgs::msg::Laser_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__laser_package_msgs__msg__Laser
    std::shared_ptr<laser_package_msgs::msg::Laser_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Laser_ & other) const
  {
    if (this->angle_min != other.angle_min) {
      return false;
    }
    if (this->angle_max != other.angle_max) {
      return false;
    }
    if (this->angle_increment != other.angle_increment) {
      return false;
    }
    if (this->range_min != other.range_min) {
      return false;
    }
    if (this->range_max != other.range_max) {
      return false;
    }
    if (this->ranges != other.ranges) {
      return false;
    }
    if (this->intensities != other.intensities) {
      return false;
    }
    if (this->pattern_name != other.pattern_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Laser_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Laser_

// alias to use template instance with default allocator
using Laser =
  laser_package_msgs::msg::Laser_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace laser_package_msgs

#endif  // LASER_PACKAGE_MSGS__MSG__DETAIL__LASER__STRUCT_HPP_
