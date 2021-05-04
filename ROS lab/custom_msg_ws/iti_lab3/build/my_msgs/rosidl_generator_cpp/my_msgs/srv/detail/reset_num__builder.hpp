// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_msgs:srv/ResetNum.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__SRV__DETAIL__RESET_NUM__BUILDER_HPP_
#define MY_MSGS__SRV__DETAIL__RESET_NUM__BUILDER_HPP_

#include "my_msgs/srv/detail/reset_num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetNum_Request_booldata
{
public:
  Init_ResetNum_Request_booldata()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_msgs::srv::ResetNum_Request booldata(::my_msgs::srv::ResetNum_Request::_booldata_type arg)
  {
    msg_.booldata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::srv::ResetNum_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::srv::ResetNum_Request>()
{
  return my_msgs::srv::builder::Init_ResetNum_Request_booldata();
}

}  // namespace my_msgs


namespace my_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetNum_Response_strdata
{
public:
  Init_ResetNum_Response_strdata()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_msgs::srv::ResetNum_Response strdata(::my_msgs::srv::ResetNum_Response::_strdata_type arg)
  {
    msg_.strdata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::srv::ResetNum_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::srv::ResetNum_Response>()
{
  return my_msgs::srv::builder::Init_ResetNum_Response_strdata();
}

}  // namespace my_msgs

#endif  // MY_MSGS__SRV__DETAIL__RESET_NUM__BUILDER_HPP_
