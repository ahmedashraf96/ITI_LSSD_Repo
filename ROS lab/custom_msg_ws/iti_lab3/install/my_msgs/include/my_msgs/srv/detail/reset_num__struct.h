// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_msgs:srv/ResetNum.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__SRV__DETAIL__RESET_NUM__STRUCT_H_
#define MY_MSGS__SRV__DETAIL__RESET_NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ResetNum in the package my_msgs.
typedef struct my_msgs__srv__ResetNum_Request
{
  bool booldata;
} my_msgs__srv__ResetNum_Request;

// Struct for a sequence of my_msgs__srv__ResetNum_Request.
typedef struct my_msgs__srv__ResetNum_Request__Sequence
{
  my_msgs__srv__ResetNum_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_msgs__srv__ResetNum_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'strdata'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ResetNum in the package my_msgs.
typedef struct my_msgs__srv__ResetNum_Response
{
  rosidl_runtime_c__String strdata;
} my_msgs__srv__ResetNum_Response;

// Struct for a sequence of my_msgs__srv__ResetNum_Response.
typedef struct my_msgs__srv__ResetNum_Response__Sequence
{
  my_msgs__srv__ResetNum_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_msgs__srv__ResetNum_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_MSGS__SRV__DETAIL__RESET_NUM__STRUCT_H_
