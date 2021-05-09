// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from turtle_custom_msgs:msg/TurtleCounter.idl
// generated code does not contain a copyright notice
#include "turtle_custom_msgs/msg/detail/turtle_counter__rosidl_typesupport_fastrtps_cpp.hpp"
#include "turtle_custom_msgs/msg/detail/turtle_counter__struct.hpp"

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
  const turtle_custom_msgs::msg::TurtleCounter & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: counter
  cdr << ros_message.counter;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  turtle_custom_msgs::msg::TurtleCounter & ros_message)
{
  // Member: counter
  cdr >> ros_message.counter;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
get_serialized_size(
  const turtle_custom_msgs::msg::TurtleCounter & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: counter
  {
    size_t item_size = sizeof(ros_message.counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_custom_msgs
max_serialized_size_TurtleCounter(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TurtleCounter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const turtle_custom_msgs::msg::TurtleCounter *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TurtleCounter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtle_custom_msgs::msg::TurtleCounter *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TurtleCounter__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtle_custom_msgs::msg::TurtleCounter *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TurtleCounter__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TurtleCounter(full_bounded, 0);
}

static message_type_support_callbacks_t _TurtleCounter__callbacks = {
  "turtle_custom_msgs::msg",
  "TurtleCounter",
  _TurtleCounter__cdr_serialize,
  _TurtleCounter__cdr_deserialize,
  _TurtleCounter__get_serialized_size,
  _TurtleCounter__max_serialized_size
};

static rosidl_message_type_support_t _TurtleCounter__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TurtleCounter__callbacks,
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
get_message_type_support_handle<turtle_custom_msgs::msg::TurtleCounter>()
{
  return &turtle_custom_msgs::msg::typesupport_fastrtps_cpp::_TurtleCounter__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_custom_msgs, msg, TurtleCounter)() {
  return &turtle_custom_msgs::msg::typesupport_fastrtps_cpp::_TurtleCounter__handle;
}

#ifdef __cplusplus
}
#endif
