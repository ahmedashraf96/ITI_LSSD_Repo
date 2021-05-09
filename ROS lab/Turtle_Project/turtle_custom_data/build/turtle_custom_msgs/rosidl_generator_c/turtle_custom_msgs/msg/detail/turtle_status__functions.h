// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtle_custom_msgs:msg/TurtleStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__FUNCTIONS_H_
#define TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_custom_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "turtle_custom_msgs/msg/detail/turtle_status__struct.h"

/// Initialize msg/TurtleStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_custom_msgs__msg__TurtleStatus
 * )) before or use
 * turtle_custom_msgs__msg__TurtleStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
bool
turtle_custom_msgs__msg__TurtleStatus__init(turtle_custom_msgs__msg__TurtleStatus * msg);

/// Finalize msg/TurtleStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__msg__TurtleStatus__fini(turtle_custom_msgs__msg__TurtleStatus * msg);

/// Create msg/TurtleStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_custom_msgs__msg__TurtleStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
turtle_custom_msgs__msg__TurtleStatus *
turtle_custom_msgs__msg__TurtleStatus__create();

/// Destroy msg/TurtleStatus message.
/**
 * It calls
 * turtle_custom_msgs__msg__TurtleStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__msg__TurtleStatus__destroy(turtle_custom_msgs__msg__TurtleStatus * msg);


/// Initialize array of msg/TurtleStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_custom_msgs__msg__TurtleStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
bool
turtle_custom_msgs__msg__TurtleStatus__Sequence__init(turtle_custom_msgs__msg__TurtleStatus__Sequence * array, size_t size);

/// Finalize array of msg/TurtleStatus messages.
/**
 * It calls
 * turtle_custom_msgs__msg__TurtleStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__msg__TurtleStatus__Sequence__fini(turtle_custom_msgs__msg__TurtleStatus__Sequence * array);

/// Create array of msg/TurtleStatus messages.
/**
 * It allocates the memory for the array and calls
 * turtle_custom_msgs__msg__TurtleStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
turtle_custom_msgs__msg__TurtleStatus__Sequence *
turtle_custom_msgs__msg__TurtleStatus__Sequence__create(size_t size);

/// Destroy array of msg/TurtleStatus messages.
/**
 * It calls
 * turtle_custom_msgs__msg__TurtleStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__msg__TurtleStatus__Sequence__destroy(turtle_custom_msgs__msg__TurtleStatus__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CUSTOM_MSGS__MSG__DETAIL__TURTLE_STATUS__FUNCTIONS_H_
