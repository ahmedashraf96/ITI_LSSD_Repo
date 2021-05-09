// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_custom_msgs:msg/TurtleStatus.idl
// generated code does not contain a copyright notice
#include "turtle_custom_msgs/msg/detail/turtle_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
turtle_custom_msgs__msg__TurtleStatus__init(turtle_custom_msgs__msg__TurtleStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
turtle_custom_msgs__msg__TurtleStatus__fini(turtle_custom_msgs__msg__TurtleStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
}

turtle_custom_msgs__msg__TurtleStatus *
turtle_custom_msgs__msg__TurtleStatus__create()
{
  turtle_custom_msgs__msg__TurtleStatus * msg = (turtle_custom_msgs__msg__TurtleStatus *)malloc(sizeof(turtle_custom_msgs__msg__TurtleStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_custom_msgs__msg__TurtleStatus));
  bool success = turtle_custom_msgs__msg__TurtleStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_custom_msgs__msg__TurtleStatus__destroy(turtle_custom_msgs__msg__TurtleStatus * msg)
{
  if (msg) {
    turtle_custom_msgs__msg__TurtleStatus__fini(msg);
  }
  free(msg);
}


bool
turtle_custom_msgs__msg__TurtleStatus__Sequence__init(turtle_custom_msgs__msg__TurtleStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_custom_msgs__msg__TurtleStatus * data = NULL;
  if (size) {
    data = (turtle_custom_msgs__msg__TurtleStatus *)calloc(size, sizeof(turtle_custom_msgs__msg__TurtleStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_custom_msgs__msg__TurtleStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_custom_msgs__msg__TurtleStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtle_custom_msgs__msg__TurtleStatus__Sequence__fini(turtle_custom_msgs__msg__TurtleStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_custom_msgs__msg__TurtleStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtle_custom_msgs__msg__TurtleStatus__Sequence *
turtle_custom_msgs__msg__TurtleStatus__Sequence__create(size_t size)
{
  turtle_custom_msgs__msg__TurtleStatus__Sequence * array = (turtle_custom_msgs__msg__TurtleStatus__Sequence *)malloc(sizeof(turtle_custom_msgs__msg__TurtleStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_custom_msgs__msg__TurtleStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_custom_msgs__msg__TurtleStatus__Sequence__destroy(turtle_custom_msgs__msg__TurtleStatus__Sequence * array)
{
  if (array) {
    turtle_custom_msgs__msg__TurtleStatus__Sequence__fini(array);
  }
  free(array);
}
