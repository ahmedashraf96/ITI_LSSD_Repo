// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_custom_msgs:srv/TurtleService.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__BUILDER_HPP_
#define TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__BUILDER_HPP_

#include "turtle_custom_msgs/srv/detail/turtle_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_TurtleService_Request_status
{
public:
  Init_TurtleService_Request_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_custom_msgs::srv::TurtleService_Request status(::turtle_custom_msgs::srv::TurtleService_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_custom_msgs::srv::TurtleService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_custom_msgs::srv::TurtleService_Request>()
{
  return turtle_custom_msgs::srv::builder::Init_TurtleService_Request_status();
}

}  // namespace turtle_custom_msgs


namespace turtle_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_TurtleService_Response_name
{
public:
  Init_TurtleService_Response_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_custom_msgs::srv::TurtleService_Response name(::turtle_custom_msgs::srv::TurtleService_Response::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_custom_msgs::srv::TurtleService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_custom_msgs::srv::TurtleService_Response>()
{
  return turtle_custom_msgs::srv::builder::Init_TurtleService_Response_name();
}

}  // namespace turtle_custom_msgs

#endif  // TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__BUILDER_HPP_
