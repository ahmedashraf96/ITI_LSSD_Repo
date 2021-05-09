// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_custom_msgs:msg/TurtleCounter.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_COUNTER__STRUCT_H_
#define TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_COUNTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TurtleCounter in the package turtle_custom_msgs.
typedef struct turtle_custom_msgs__msg__TurtleCounter
{
  uint64_t counter;
} turtle_custom_msgs__msg__TurtleCounter;

// Struct for a sequence of turtle_custom_msgs__msg__TurtleCounter.
typedef struct turtle_custom_msgs__msg__TurtleCounter__Sequence
{
  turtle_custom_msgs__msg__TurtleCounter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_custom_msgs__msg__TurtleCounter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_COUNTER__STRUCT_H_
