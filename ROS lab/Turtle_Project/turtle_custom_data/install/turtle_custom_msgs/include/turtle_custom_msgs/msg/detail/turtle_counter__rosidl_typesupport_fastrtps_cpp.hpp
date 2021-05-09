// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from turtle_custom_msgs:msg/TurtleCounter.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_COUNTER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_COUNTER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtle_custom_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "turtle_custom_msgs/msg/detail/turtle_counter__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace turtle_custom_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
cdr_serialize(
  const turtle_custom_msgs::msg::TurtleCounter & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  turtle_custom_msgs::msg::TurtleCounter & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
get_serialized_size(
  const turtle_custom_msgs::msg::TurtleCounter & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
max_serialized_size_TurtleCounter(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace turtle_custom_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_custom_msgs, msg, TurtleCounter)();

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_COUNTER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
