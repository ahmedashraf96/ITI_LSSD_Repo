// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_msgs:msg/StringAndNum.idl
// generated code does not contain a copyright notice
#include "my_msgs/msg/detail/string_and_num__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `datamsg`
#include "rosidl_runtime_c/string_functions.h"

bool
my_msgs__msg__StringAndNum__init(my_msgs__msg__StringAndNum * msg)
{
  if (!msg) {
    return false;
  }
  // datamsg
  if (!rosidl_runtime_c__String__init(&msg->datamsg)) {
    my_msgs__msg__StringAndNum__fini(msg);
    return false;
  }
  // counter
  return true;
}

void
my_msgs__msg__StringAndNum__fini(my_msgs__msg__StringAndNum * msg)
{
  if (!msg) {
    return;
  }
  // datamsg
  rosidl_runtime_c__String__fini(&msg->datamsg);
  // counter
}

my_msgs__msg__StringAndNum *
my_msgs__msg__StringAndNum__create()
{
  my_msgs__msg__StringAndNum * msg = (my_msgs__msg__StringAndNum *)malloc(sizeof(my_msgs__msg__StringAndNum));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_msgs__msg__StringAndNum));
  bool success = my_msgs__msg__StringAndNum__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_msgs__msg__StringAndNum__destroy(my_msgs__msg__StringAndNum * msg)
{
  if (msg) {
    my_msgs__msg__StringAndNum__fini(msg);
  }
  free(msg);
}


bool
my_msgs__msg__StringAndNum__Sequence__init(my_msgs__msg__StringAndNum__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_msgs__msg__StringAndNum * data = NULL;
  if (size) {
    data = (my_msgs__msg__StringAndNum *)calloc(size, sizeof(my_msgs__msg__StringAndNum));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_msgs__msg__StringAndNum__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_msgs__msg__StringAndNum__fini(&data[i - 1]);
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
my_msgs__msg__StringAndNum__Sequence__fini(my_msgs__msg__StringAndNum__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_msgs__msg__StringAndNum__fini(&array->data[i]);
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

my_msgs__msg__StringAndNum__Sequence *
my_msgs__msg__StringAndNum__Sequence__create(size_t size)
{
  my_msgs__msg__StringAndNum__Sequence * array = (my_msgs__msg__StringAndNum__Sequence *)malloc(sizeof(my_msgs__msg__StringAndNum__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_msgs__msg__StringAndNum__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_msgs__msg__StringAndNum__Sequence__destroy(my_msgs__msg__StringAndNum__Sequence * array)
{
  if (array) {
    my_msgs__msg__StringAndNum__Sequence__fini(array);
  }
  free(array);
}
