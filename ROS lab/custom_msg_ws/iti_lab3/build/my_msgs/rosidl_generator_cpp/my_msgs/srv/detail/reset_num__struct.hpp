// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_msgs:srv/ResetNum.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__SRV__DETAIL__RESET_NUM__STRUCT_HPP_
#define MY_MSGS__SRV__DETAIL__RESET_NUM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__my_msgs__srv__ResetNum_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_msgs__srv__ResetNum_Request __declspec(deprecated)
#endif

namespace my_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetNum_Request_
{
  using Type = ResetNum_Request_<ContainerAllocator>;

  explicit ResetNum_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->booldata = false;
    }
  }

  explicit ResetNum_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->booldata = false;
    }
  }

  // field types and members
  using _booldata_type =
    bool;
  _booldata_type booldata;

  // setters for named parameter idiom
  Type & set__booldata(
    const bool & _arg)
  {
    this->booldata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_msgs::srv::ResetNum_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_msgs::srv::ResetNum_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_msgs::srv::ResetNum_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_msgs::srv::ResetNum_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_msgs::srv::ResetNum_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_msgs::srv::ResetNum_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_msgs::srv::ResetNum_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_msgs::srv::ResetNum_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_msgs::srv::ResetNum_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_msgs::srv::ResetNum_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_msgs__srv__ResetNum_Request
    std::shared_ptr<my_msgs::srv::ResetNum_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_msgs__srv__ResetNum_Request
    std::shared_ptr<my_msgs::srv::ResetNum_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetNum_Request_ & other) const
  {
    if (this->booldata != other.booldata) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetNum_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetNum_Request_

// alias to use template instance with default allocator
using ResetNum_Request =
  my_msgs::srv::ResetNum_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_msgs


#ifndef _WIN32
# define DEPRECATED__my_msgs__srv__ResetNum_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_msgs__srv__ResetNum_Response __declspec(deprecated)
#endif

namespace my_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetNum_Response_
{
  using Type = ResetNum_Response_<ContainerAllocator>;

  explicit ResetNum_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strdata = "";
    }
  }

  explicit ResetNum_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : strdata(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strdata = "";
    }
  }

  // field types and members
  using _strdata_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _strdata_type strdata;

  // setters for named parameter idiom
  Type & set__strdata(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->strdata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_msgs::srv::ResetNum_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_msgs::srv::ResetNum_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_msgs::srv::ResetNum_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_msgs::srv::ResetNum_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_msgs::srv::ResetNum_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_msgs::srv::ResetNum_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_msgs::srv::ResetNum_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_msgs::srv::ResetNum_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_msgs::srv::ResetNum_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_msgs::srv::ResetNum_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_msgs__srv__ResetNum_Response
    std::shared_ptr<my_msgs::srv::ResetNum_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_msgs__srv__ResetNum_Response
    std::shared_ptr<my_msgs::srv::ResetNum_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetNum_Response_ & other) const
  {
    if (this->strdata != other.strdata) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetNum_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetNum_Response_

// alias to use template instance with default allocator
using ResetNum_Response =
  my_msgs::srv::ResetNum_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_msgs

namespace my_msgs
{

namespace srv
{

struct ResetNum
{
  using Request = my_msgs::srv::ResetNum_Request;
  using Response = my_msgs::srv::ResetNum_Response;
};

}  // namespace srv

}  // namespace my_msgs

#endif  // MY_MSGS__SRV__DETAIL__RESET_NUM__STRUCT_HPP_
