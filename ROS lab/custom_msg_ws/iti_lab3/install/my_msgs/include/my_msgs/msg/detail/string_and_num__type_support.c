// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_msgs:msg/StringAndNum.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_msgs/msg/detail/string_and_num__rosidl_typesupport_introspection_c.h"
#include "my_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_msgs/msg/detail/string_and_num__functions.h"
#include "my_msgs/msg/detail/string_and_num__struct.h"


// Include directives for member types
// Member `datamsg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_msgs__msg__StringAndNum__init(message_memory);
}

void StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_fini_function(void * message_memory)
{
  my_msgs__msg__StringAndNum__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_message_member_array[2] = {
  {
    "datamsg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msgs__msg__StringAndNum, datamsg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msgs__msg__StringAndNum, counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_message_members = {
  "my_msgs__msg",  // message namespace
  "StringAndNum",  // message name
  2,  // number of fields
  sizeof(my_msgs__msg__StringAndNum),
  StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_message_member_array,  // message members
  StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_init_function,  // function to initialize message memory (memory has to be allocated)
  StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_message_type_support_handle = {
  0,
  &StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_msgs, msg, StringAndNum)() {
  if (!StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_message_type_support_handle.typesupport_identifier) {
    StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StringAndNum__rosidl_typesupport_introspection_c__StringAndNum_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
