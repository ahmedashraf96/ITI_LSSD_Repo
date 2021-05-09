// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_custom_msgs:msg/TurtleStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__TRAITS_HPP_
#define TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__TRAITS_HPP_

#include "turtle_custom_msgs/msg/detail/turtle_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_custom_msgs::msg::TurtleStatus>()
{
  return "turtle_custom_msgs::msg::TurtleStatus";
}

template<>
inline const char * name<turtle_custom_msgs::msg::TurtleStatus>()
{
  return "turtle_custom_msgs/msg/TurtleStatus";
}

template<>
struct has_fixed_size<turtle_custom_msgs::msg::TurtleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_custom_msgs::msg::TurtleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_custom_msgs::msg::TurtleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__TRAITS_HPP_
