// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtle_custom_msgs:msg/TurtleCounter.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_custom_msgs/msg/detail/turtle_counter__struct.h"
#include "turtle_custom_msgs/msg/detail/turtle_counter__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool turtle_custom_msgs__msg__turtle_counter__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("turtle_custom_msgs.msg._turtle_counter.TurtleCounter", full_classname_dest, 52) == 0);
  }
  turtle_custom_msgs__msg__TurtleCounter * ros_message = _ros_message;
  {  // counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->counter = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_custom_msgs__msg__turtle_counter__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TurtleCounter */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_custom_msgs.msg._turtle_counter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TurtleCounter");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtle_custom_msgs__msg__TurtleCounter * ros_message = (turtle_custom_msgs__msg__TurtleCounter *)raw_ros_message;
  {  // counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
