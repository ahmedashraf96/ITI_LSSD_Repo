// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_msgs:srv/ResetNum.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__SRV__DETAIL__RESET_NUM__TRAITS_HPP_
#define MY_MSGS__SRV__DETAIL__RESET_NUM__TRAITS_HPP_

#include "my_msgs/srv/detail/reset_num__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_msgs::srv::ResetNum_Request>()
{
  return "my_msgs::srv::ResetNum_Request";
}

template<>
inline const char * name<my_msgs::srv::ResetNum_Request>()
{
  return "my_msgs/srv/ResetNum_Request";
}

template<>
struct has_fixed_size<my_msgs::srv::ResetNum_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_msgs::srv::ResetNum_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_msgs::srv::ResetNum_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_msgs::srv::ResetNum_Response>()
{
  return "my_msgs::srv::ResetNum_Response";
}

template<>
inline const char * name<my_msgs::srv::ResetNum_Response>()
{
  return "my_msgs/srv/ResetNum_Response";
}

template<>
struct has_fixed_size<my_msgs::srv::ResetNum_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_msgs::srv::ResetNum_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_msgs::srv::ResetNum_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_msgs::srv::ResetNum>()
{
  return "my_msgs::srv::ResetNum";
}

template<>
inline const char * name<my_msgs::srv::ResetNum>()
{
  return "my_msgs/srv/ResetNum";
}

template<>
struct has_fixed_size<my_msgs::srv::ResetNum>
  : std::integral_constant<
    bool,
    has_fixed_size<my_msgs::srv::ResetNum_Request>::value &&
    has_fixed_size<my_msgs::srv::ResetNum_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_msgs::srv::ResetNum>
  : std::integral_constant<
    bool,
    has_bounded_size<my_msgs::srv::ResetNum_Request>::value &&
    has_bounded_size<my_msgs::srv::ResetNum_Response>::value
  >
{
};

template<>
struct is_service<my_msgs::srv::ResetNum>
  : std::true_type
{
};

template<>
struct is_service_request<my_msgs::srv::ResetNum_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_msgs::srv::ResetNum_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_MSGS__SRV__DETAIL__RESET_NUM__TRAITS_HPP_
