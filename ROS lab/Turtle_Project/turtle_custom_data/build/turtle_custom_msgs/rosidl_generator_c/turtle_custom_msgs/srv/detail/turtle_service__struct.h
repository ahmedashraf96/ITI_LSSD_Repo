// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_custom_msgs:srv/TurtleService.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__STRUCT_H_
#define TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TurtleService in the package turtle_custom_msgs.
typedef struct turtle_custom_msgs__srv__TurtleService_Request
{
  bool status;
} turtle_custom_msgs__srv__TurtleService_Request;

// Struct for a sequence of turtle_custom_msgs__srv__TurtleService_Request.
typedef struct turtle_custom_msgs__srv__TurtleService_Request__Sequence
{
  turtle_custom_msgs__srv__TurtleService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_custom_msgs__srv__TurtleService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/TurtleService in the package turtle_custom_msgs.
typedef struct turtle_custom_msgs__srv__TurtleService_Response
{
  rosidl_runtime_c__String name;
} turtle_custom_msgs__srv__TurtleService_Response;

// Struct for a sequence of turtle_custom_msgs__srv__TurtleService_Response.
typedef struct turtle_custom_msgs__srv__TurtleService_Response__Sequence
{
  turtle_custom_msgs__srv__TurtleService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_custom_msgs__srv__TurtleService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__STRUCT_H_
