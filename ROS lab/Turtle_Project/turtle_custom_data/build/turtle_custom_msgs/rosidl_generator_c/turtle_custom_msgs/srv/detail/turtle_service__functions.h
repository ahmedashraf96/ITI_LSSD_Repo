// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtle_custom_msgs:srv/TurtleService.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__FUNCTIONS_H_
#define TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_custom_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "turtle_custom_msgs/srv/detail/turtle_service__struct.h"

/// Initialize srv/TurtleService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_custom_msgs__srv__TurtleService_Request
 * )) before or use
 * turtle_custom_msgs__srv__TurtleService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
bool
turtle_custom_msgs__srv__TurtleService_Request__init(turtle_custom_msgs__srv__TurtleService_Request * msg);

/// Finalize srv/TurtleService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__srv__TurtleService_Request__fini(turtle_custom_msgs__srv__TurtleService_Request * msg);

/// Create srv/TurtleService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_custom_msgs__srv__TurtleService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
turtle_custom_msgs__srv__TurtleService_Request *
turtle_custom_msgs__srv__TurtleService_Request__create();

/// Destroy srv/TurtleService message.
/**
 * It calls
 * turtle_custom_msgs__srv__TurtleService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__srv__TurtleService_Request__destroy(turtle_custom_msgs__srv__TurtleService_Request * msg);


/// Initialize array of srv/TurtleService messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_custom_msgs__srv__TurtleService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
bool
turtle_custom_msgs__srv__TurtleService_Request__Sequence__init(turtle_custom_msgs__srv__TurtleService_Request__Sequence * array, size_t size);

/// Finalize array of srv/TurtleService messages.
/**
 * It calls
 * turtle_custom_msgs__srv__TurtleService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__srv__TurtleService_Request__Sequence__fini(turtle_custom_msgs__srv__TurtleService_Request__Sequence * array);

/// Create array of srv/TurtleService messages.
/**
 * It allocates the memory for the array and calls
 * turtle_custom_msgs__srv__TurtleService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
turtle_custom_msgs__srv__TurtleService_Request__Sequence *
turtle_custom_msgs__srv__TurtleService_Request__Sequence__create(size_t size);

/// Destroy array of srv/TurtleService messages.
/**
 * It calls
 * turtle_custom_msgs__srv__TurtleService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__srv__TurtleService_Request__Sequence__destroy(turtle_custom_msgs__srv__TurtleService_Request__Sequence * array);

/// Initialize srv/TurtleService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_custom_msgs__srv__TurtleService_Response
 * )) before or use
 * turtle_custom_msgs__srv__TurtleService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
bool
turtle_custom_msgs__srv__TurtleService_Response__init(turtle_custom_msgs__srv__TurtleService_Response * msg);

/// Finalize srv/TurtleService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__srv__TurtleService_Response__fini(turtle_custom_msgs__srv__TurtleService_Response * msg);

/// Create srv/TurtleService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_custom_msgs__srv__TurtleService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
turtle_custom_msgs__srv__TurtleService_Response *
turtle_custom_msgs__srv__TurtleService_Response__create();

/// Destroy srv/TurtleService message.
/**
 * It calls
 * turtle_custom_msgs__srv__TurtleService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__srv__TurtleService_Response__destroy(turtle_custom_msgs__srv__TurtleService_Response * msg);


/// Initialize array of srv/TurtleService messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_custom_msgs__srv__TurtleService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
bool
turtle_custom_msgs__srv__TurtleService_Response__Sequence__init(turtle_custom_msgs__srv__TurtleService_Response__Sequence * array, size_t size);

/// Finalize array of srv/TurtleService messages.
/**
 * It calls
 * turtle_custom_msgs__srv__TurtleService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__srv__TurtleService_Response__Sequence__fini(turtle_custom_msgs__srv__TurtleService_Response__Sequence * array);

/// Create array of srv/TurtleService messages.
/**
 * It allocates the memory for the array and calls
 * turtle_custom_msgs__srv__TurtleService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
turtle_custom_msgs__srv__TurtleService_Response__Sequence *
turtle_custom_msgs__srv__TurtleService_Response__Sequence__create(size_t size);

/// Destroy array of srv/TurtleService messages.
/**
 * It calls
 * turtle_custom_msgs__srv__TurtleService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_custom_msgs
void
turtle_custom_msgs__srv__TurtleService_Response__Sequence__destroy(turtle_custom_msgs__srv__TurtleService_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CUSTOM_MSGS__SRV__DETAIL__TURTLE_SERVICE__FUNCTIONS_H_
