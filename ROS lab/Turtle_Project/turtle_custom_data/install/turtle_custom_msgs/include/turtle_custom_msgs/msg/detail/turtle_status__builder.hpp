// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_custom_msgs:msg/TurtleStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__BUILDER_HPP_
#define TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__BUILDER_HPP_

#include "turtle_custom_msgs/msg/detail/turtle_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_custom_msgs
{

namespace msg
{

namespace builder
{

class Init_TurtleStatus_status
{
public:
  Init_TurtleStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_custom_msgs::msg::TurtleStatus status(::turtle_custom_msgs::msg::TurtleStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_custom_msgs::msg::TurtleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_custom_msgs::msg::TurtleStatus>()
{
  return turtle_custom_msgs::msg::builder::Init_TurtleStatus_status();
}

}  // namespace turtle_custom_msgs

#endif  // TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__BUILDER_HPP_
