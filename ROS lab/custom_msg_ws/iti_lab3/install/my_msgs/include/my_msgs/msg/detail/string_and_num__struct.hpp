// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_msgs:msg/StringAndNum.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__STRING_AND_NUM__STRUCT_HPP_
#define MY_MSGS__MSG__DETAIL__STRING_AND_NUM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__my_msgs__msg__StringAndNum __attribute__((deprecated))
#else
# define DEPRECATED__my_msgs__msg__StringAndNum __declspec(deprecated)
#endif

namespace my_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StringAndNum_
{
  using Type = StringAndNum_<ContainerAllocator>;

  explicit StringAndNum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->datamsg = "";
      this->counter = 0ll;
    }
  }

  explicit StringAndNum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : datamsg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->datamsg = "";
      this->counter = 0ll;
    }
  }

  // field types and members
  using _datamsg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _datamsg_type datamsg;
  using _counter_type =
    int64_t;
  _counter_type counter;

  // setters for named parameter idiom
  Type & set__datamsg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->datamsg = _arg;
    return *this;
  }
  Type & set__counter(
    const int64_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_msgs::msg::StringAndNum_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_msgs::msg::StringAndNum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_msgs::msg::StringAndNum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_msgs::msg::StringAndNum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_msgs::msg::StringAndNum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_msgs::msg::StringAndNum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_msgs::msg::StringAndNum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_msgs::msg::StringAndNum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_msgs::msg::StringAndNum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_msgs::msg::StringAndNum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_msgs__msg__StringAndNum
    std::shared_ptr<my_msgs::msg::StringAndNum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_msgs__msg__StringAndNum
    std::shared_ptr<my_msgs::msg::StringAndNum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StringAndNum_ & other) const
  {
    if (this->datamsg != other.datamsg) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const StringAndNum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StringAndNum_

// alias to use template instance with default allocator
using StringAndNum =
  my_msgs::msg::StringAndNum_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_msgs

#endif  // MY_MSGS__MSG__DETAIL__STRING_AND_NUM__STRUCT_HPP_
