// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_custom_msgs:msg/TurtleCounter.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_COUNTER__STRUCT_HPP_
#define TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_COUNTER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtle_custom_msgs__msg__TurtleCounter __attribute__((deprecated))
#else
# define DEPRECATED__turtle_custom_msgs__msg__TurtleCounter __declspec(deprecated)
#endif

namespace turtle_custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurtleCounter_
{
  using Type = TurtleCounter_<ContainerAllocator>;

  explicit TurtleCounter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counter = 0ull;
    }
  }

  explicit TurtleCounter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counter = 0ull;
    }
  }

  // field types and members
  using _counter_type =
    uint64_t;
  _counter_type counter;

  // setters for named parameter idiom
  Type & set__counter(
    const uint64_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_custom_msgs__msg__TurtleCounter
    std::shared_ptr<turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_custom_msgs__msg__TurtleCounter
    std::shared_ptr<turtle_custom_msgs::msg::TurtleCounter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleCounter_ & other) const
  {
    if (this->counter != other.counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleCounter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleCounter_

// alias to use template instance with default allocator
using TurtleCounter =
  turtle_custom_msgs::msg::TurtleCounter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_custom_msgs

#endif  // TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_COUNTER__STRUCT_HPP_
