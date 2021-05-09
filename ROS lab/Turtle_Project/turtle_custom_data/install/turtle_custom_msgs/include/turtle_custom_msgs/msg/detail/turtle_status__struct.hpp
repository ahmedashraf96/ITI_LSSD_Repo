// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_custom_msgs:msg/TurtleStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__STRUCT_HPP_
#define TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtle_custom_msgs__msg__TurtleStatus __attribute__((deprecated))
#else
# define DEPRECATED__turtle_custom_msgs__msg__TurtleStatus __declspec(deprecated)
#endif

namespace turtle_custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurtleStatus_
{
  using Type = TurtleStatus_<ContainerAllocator>;

  explicit TurtleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit TurtleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_custom_msgs__msg__TurtleStatus
    std::shared_ptr<turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_custom_msgs__msg__TurtleStatus
    std::shared_ptr<turtle_custom_msgs::msg::TurtleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleStatus_

// alias to use template instance with default allocator
using TurtleStatus =
  turtle_custom_msgs::msg::TurtleStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_custom_msgs

#endif  // TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__STRUCT_HPP_
