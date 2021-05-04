// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_msgs:msg/StringAndNum.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__STRING_AND_NUM__BUILDER_HPP_
#define MY_MSGS__MSG__DETAIL__STRING_AND_NUM__BUILDER_HPP_

#include "my_msgs/msg/detail/string_and_num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_msgs
{

namespace msg
{

namespace builder
{

class Init_StringAndNum_counter
{
public:
  explicit Init_StringAndNum_counter(::my_msgs::msg::StringAndNum & msg)
  : msg_(msg)
  {}
  ::my_msgs::msg::StringAndNum counter(::my_msgs::msg::StringAndNum::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::msg::StringAndNum msg_;
};

class Init_StringAndNum_datamsg
{
public:
  Init_StringAndNum_datamsg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StringAndNum_counter datamsg(::my_msgs::msg::StringAndNum::_datamsg_type arg)
  {
    msg_.datamsg = std::move(arg);
    return Init_StringAndNum_counter(msg_);
  }

private:
  ::my_msgs::msg::StringAndNum msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::msg::StringAndNum>()
{
  return my_msgs::msg::builder::Init_StringAndNum_datamsg();
}

}  // namespace my_msgs

#endif  // MY_MSGS__MSG__DETAIL__STRING_AND_NUM__BUILDER_HPP_
