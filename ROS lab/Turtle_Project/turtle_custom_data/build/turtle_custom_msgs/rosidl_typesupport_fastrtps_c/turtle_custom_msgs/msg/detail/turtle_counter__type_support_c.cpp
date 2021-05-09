// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_custom_msgs:msg/TurtleCounter.idl
// generated code does not contain a copyright notice
#include "turtle_custom_msgs/msg/detail/turtle_counter__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_custom_msgs/msg/detail/turtle_counter__struct.h"
#include "turtle_custom_msgs/msg/detail/turtle_counter__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TurtleCounter__ros_msg_type = turtle_custom_msgs__msg__TurtleCounter;

static bool _TurtleCounter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TurtleCounter__ros_msg_type * ros_message = static_cast<const _TurtleCounter__ros_msg_type *>(untyped_ros_message);
  // Field name: counter
  {
    cdr << ros_message->counter;
  }

  return true;
}

static bool _TurtleCounter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TurtleCounter__ros_msg_type * ros_message = static_cast<_TurtleCounter__ros_msg_type *>(untyped_ros_message);
  // Field name: counter
  {
    cdr >> ros_message->counter;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_custom_msgs
size_t get_serialized_size_turtle_custom_msgs__msg__TurtleCounter(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TurtleCounter__ros_msg_type * ros_message = static_cast<const _TurtleCounter__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name counter
  {
    size_t item_size = sizeof(ros_message->counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TurtleCounter__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_custom_msgs__msg__TurtleCounter(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_custom_msgs
size_t max_serialized_size_turtle_custom_msgs__msg__TurtleCounter(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TurtleCounter__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_custom_msgs__msg__TurtleCounter(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TurtleCounter = {
  "turtle_custom_msgs::msg",
  "TurtleCounter",
  _TurtleCounter__cdr_serialize,
  _TurtleCounter__cdr_deserialize,
  _TurtleCounter__get_serialized_size,
  _TurtleCounter__max_serialized_size
};

static rosidl_message_type_support_t _TurtleCounter__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TurtleCounter,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_custom_msgs, msg, TurtleCounter)() {
  return &_TurtleCounter__type_support;
}

#if defined(__cplusplus)
}
#endif
