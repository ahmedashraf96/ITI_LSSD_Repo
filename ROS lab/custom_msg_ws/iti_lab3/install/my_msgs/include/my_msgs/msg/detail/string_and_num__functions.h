// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_msgs:msg/StringAndNum.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__STRING_AND_NUM__FUNCTIONS_H_
#define MY_MSGS__MSG__DETAIL__STRING_AND_NUM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "my_msgs/msg/detail/string_and_num__struct.h"

/// Initialize msg/StringAndNum message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_msgs__msg__StringAndNum
 * )) before or use
 * my_msgs__msg__StringAndNum__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
bool
my_msgs__msg__StringAndNum__init(my_msgs__msg__StringAndNum * msg);

/// Finalize msg/StringAndNum message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
void
my_msgs__msg__StringAndNum__fini(my_msgs__msg__StringAndNum * msg);

/// Create msg/StringAndNum message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_msgs__msg__StringAndNum__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
my_msgs__msg__StringAndNum *
my_msgs__msg__StringAndNum__create();

/// Destroy msg/StringAndNum message.
/**
 * It calls
 * my_msgs__msg__StringAndNum__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
void
my_msgs__msg__StringAndNum__destroy(my_msgs__msg__StringAndNum * msg);


/// Initialize array of msg/StringAndNum messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_msgs__msg__StringAndNum__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
bool
my_msgs__msg__StringAndNum__Sequence__init(my_msgs__msg__StringAndNum__Sequence * array, size_t size);

/// Finalize array of msg/StringAndNum messages.
/**
 * It calls
 * my_msgs__msg__StringAndNum__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
void
my_msgs__msg__StringAndNum__Sequence__fini(my_msgs__msg__StringAndNum__Sequence * array);

/// Create array of msg/StringAndNum messages.
/**
 * It allocates the memory for the array and calls
 * my_msgs__msg__StringAndNum__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
my_msgs__msg__StringAndNum__Sequence *
my_msgs__msg__StringAndNum__Sequence__create(size_t size);

/// Destroy array of msg/StringAndNum messages.
/**
 * It calls
 * my_msgs__msg__StringAndNum__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
void
my_msgs__msg__StringAndNum__Sequence__destroy(my_msgs__msg__StringAndNum__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MY_MSGS__MSG__DETAIL__STRING_AND_NUM__FUNCTIONS_H_
