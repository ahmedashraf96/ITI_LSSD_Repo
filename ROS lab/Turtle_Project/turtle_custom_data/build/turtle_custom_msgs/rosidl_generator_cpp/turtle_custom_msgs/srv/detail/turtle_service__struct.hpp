// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_custom_msgs:srv/TurtleService.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__STRUCT_HPP_
#define TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtle_custom_msgs__srv__TurtleService_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_custom_msgs__srv__TurtleService_Request __declspec(deprecated)
#endif

namespace turtle_custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleService_Request_
{
  using Type = TurtleService_Request_<ContainerAllocator>;

  explicit TurtleService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit TurtleService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_custom_msgs__srv__TurtleService_Request
    std::shared_ptr<turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_custom_msgs__srv__TurtleService_Request
    std::shared_ptr<turtle_custom_msgs::srv::TurtleService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleService_Request_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleService_Request_

// alias to use template instance with default allocator
using TurtleService_Request =
  turtle_custom_msgs::srv::TurtleService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_custom_msgs


#ifndef _WIN32
# define DEPRECATED__turtle_custom_msgs__srv__TurtleService_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_custom_msgs__srv__TurtleService_Response __declspec(deprecated)
#endif

namespace turtle_custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleService_Response_
{
  using Type = TurtleService_Response_<ContainerAllocator>;

  explicit TurtleService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit TurtleService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_custom_msgs__srv__TurtleService_Response
    std::shared_ptr<turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_custom_msgs__srv__TurtleService_Response
    std::shared_ptr<turtle_custom_msgs::srv::TurtleService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleService_Response_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleService_Response_

// alias to use template instance with default allocator
using TurtleService_Response =
  turtle_custom_msgs::srv::TurtleService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_custom_msgs

namespace turtle_custom_msgs
{

namespace srv
{

struct TurtleService
{
  using Request = turtle_custom_msgs::srv::TurtleService_Request;
  using Response = turtle_custom_msgs::srv::TurtleService_Response;
};

}  // namespace srv

}  // namespace turtle_custom_msgs

#endif  // TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__STRUCT_HPP_
