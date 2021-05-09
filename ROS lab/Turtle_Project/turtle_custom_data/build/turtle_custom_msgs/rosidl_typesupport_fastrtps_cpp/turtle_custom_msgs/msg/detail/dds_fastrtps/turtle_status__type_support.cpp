// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from turtle_custom_msgs:msg/TurtleStatus.idl
// generated code does not contain a copyright notice
#include "turtle_custom_msgs/msg/detail/turtle_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "turtle_custom_msgs/msg/detail/turtle_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace turtle_custom_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
cdr_serialize(
  const turtle_custom_msgs::msg::TurtleStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << (ros_message.status ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  turtle_custom_msgs::msg::TurtleStatus & ros_message)
{
  // Member: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
get_serialized_size(
  const turtle_custom_msgs::msg::TurtleStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
max_serialized_size_TurtleStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TurtleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const turtle_custom_msgs::msg::TurtleStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TurtleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtle_custom_msgs::msg::TurtleStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TurtleStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtle_custom_msgs::msg::TurtleStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TurtleStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TurtleStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _TurtleStatus__callbacks = {
  "turtle_custom_msgs::msg",
  "TurtleStatus",
  _TurtleStatus__cdr_serialize,
  _TurtleStatus__cdr_deserialize,
  _TurtleStatus__get_serialized_size,
  _TurtleStatus__max_serialized_size
};

static rosidl_message_type_support_t _TurtleStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TurtleStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace turtle_custom_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_turtle_custom_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_custom_msgs::msg::TurtleStatus>()
{
  return &turtle_custom_msgs::msg::typesupport_fastrtps_cpp::_TurtleStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_custom_msgs, msg, TurtleStatus)() {
  return &turtle_custom_msgs::msg::typesupport_fastrtps_cpp::_TurtleStatus__handle;
}

#ifdef __cplusplus
}
#endif
