// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_msgs:srv/ResetNum.idl
// generated code does not contain a copyright notice
#include "my_msgs/srv/detail/reset_num__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_msgs/srv/detail/reset_num__struct.h"
#include "my_msgs/srv/detail/reset_num__functions.h"
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


using _ResetNum_Request__ros_msg_type = my_msgs__srv__ResetNum_Request;

static bool _ResetNum_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ResetNum_Request__ros_msg_type * ros_message = static_cast<const _ResetNum_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: booldata
  {
    cdr << (ros_message->booldata ? true : false);
  }

  return true;
}

static bool _ResetNum_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ResetNum_Request__ros_msg_type * ros_message = static_cast<_ResetNum_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: booldata
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->booldata = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msgs
size_t get_serialized_size_my_msgs__srv__ResetNum_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ResetNum_Request__ros_msg_type * ros_message = static_cast<const _ResetNum_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name booldata
  {
    size_t item_size = sizeof(ros_message->booldata);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ResetNum_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_msgs__srv__ResetNum_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msgs
size_t max_serialized_size_my_msgs__srv__ResetNum_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: booldata
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ResetNum_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_my_msgs__srv__ResetNum_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ResetNum_Request = {
  "my_msgs::srv",
  "ResetNum_Request",
  _ResetNum_Request__cdr_serialize,
  _ResetNum_Request__cdr_deserialize,
  _ResetNum_Request__get_serialized_size,
  _ResetNum_Request__max_serialized_size
};

static rosidl_message_type_support_t _ResetNum_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ResetNum_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_msgs, srv, ResetNum_Request)() {
  return &_ResetNum_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "my_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "my_msgs/srv/detail/reset_num__struct.h"
// already included above
// #include "my_msgs/srv/detail/reset_num__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/string.h"  // strdata
#include "rosidl_runtime_c/string_functions.h"  // strdata

// forward declare type support functions


using _ResetNum_Response__ros_msg_type = my_msgs__srv__ResetNum_Response;

static bool _ResetNum_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ResetNum_Response__ros_msg_type * ros_message = static_cast<const _ResetNum_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: strdata
  {
    const rosidl_runtime_c__String * str = &ros_message->strdata;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ResetNum_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ResetNum_Response__ros_msg_type * ros_message = static_cast<_ResetNum_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: strdata
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->strdata.data) {
      rosidl_runtime_c__String__init(&ros_message->strdata);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->strdata,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'strdata'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msgs
size_t get_serialized_size_my_msgs__srv__ResetNum_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ResetNum_Response__ros_msg_type * ros_message = static_cast<const _ResetNum_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name strdata
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->strdata.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ResetNum_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_msgs__srv__ResetNum_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msgs
size_t max_serialized_size_my_msgs__srv__ResetNum_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: strdata
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ResetNum_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_my_msgs__srv__ResetNum_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ResetNum_Response = {
  "my_msgs::srv",
  "ResetNum_Response",
  _ResetNum_Response__cdr_serialize,
  _ResetNum_Response__cdr_deserialize,
  _ResetNum_Response__get_serialized_size,
  _ResetNum_Response__max_serialized_size
};

static rosidl_message_type_support_t _ResetNum_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ResetNum_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_msgs, srv, ResetNum_Response)() {
  return &_ResetNum_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "my_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_msgs/srv/reset_num.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ResetNum__callbacks = {
  "my_msgs::srv",
  "ResetNum",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_msgs, srv, ResetNum_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_msgs, srv, ResetNum_Response)(),
};

static rosidl_service_type_support_t ResetNum__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ResetNum__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_msgs, srv, ResetNum)() {
  return &ResetNum__handle;
}

#if defined(__cplusplus)
}
#endif
