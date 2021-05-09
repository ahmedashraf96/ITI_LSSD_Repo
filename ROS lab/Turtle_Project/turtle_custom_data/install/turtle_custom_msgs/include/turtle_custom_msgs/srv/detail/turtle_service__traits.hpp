// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_custom_msgs:srv/TurtleService.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__TRAITS_HPP_
#define TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__TRAITS_HPP_

#include "turtle_custom_msgs/srv/detail/turtle_service__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_custom_msgs::srv::TurtleService_Request>()
{
  return "turtle_custom_msgs::srv::TurtleService_Request";
}

template<>
inline const char * name<turtle_custom_msgs::srv::TurtleService_Request>()
{
  return "turtle_custom_msgs/srv/TurtleService_Request";
}

template<>
struct has_fixed_size<turtle_custom_msgs::srv::TurtleService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_custom_msgs::srv::TurtleService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_custom_msgs::srv::TurtleService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_custom_msgs::srv::TurtleService_Response>()
{
  return "turtle_custom_msgs::srv::TurtleService_Response";
}

template<>
inline const char * name<turtle_custom_msgs::srv::TurtleService_Response>()
{
  return "turtle_custom_msgs/srv/TurtleService_Response";
}

template<>
struct has_fixed_size<turtle_custom_msgs::srv::TurtleService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_custom_msgs::srv::TurtleService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_custom_msgs::srv::TurtleService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_custom_msgs::srv::TurtleService>()
{
  return "turtle_custom_msgs::srv::TurtleService";
}

template<>
inline const char * name<turtle_custom_msgs::srv::TurtleService>()
{
  return "turtle_custom_msgs/srv/TurtleService";
}

template<>
struct has_fixed_size<turtle_custom_msgs::srv::TurtleService>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_custom_msgs::srv::TurtleService_Request>::value &&
    has_fixed_size<turtle_custom_msgs::srv::TurtleService_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_custom_msgs::srv::TurtleService>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_custom_msgs::srv::TurtleService_Request>::value &&
    has_bounded_size<turtle_custom_msgs::srv::TurtleService_Response>::value
  >
{
};

template<>
struct is_service<turtle_custom_msgs::srv::TurtleService>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_custom_msgs::srv::TurtleService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_custom_msgs::srv::TurtleService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__TRAITS_HPP_
