// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_custom_msgs:srv/TurtleService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_custom_msgs/srv/detail/turtle_service__rosidl_typesupport_introspection_c.h"
#include "turtle_custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_custom_msgs/srv/detail/turtle_service__functions.h"
#include "turtle_custom_msgs/srv/detail/turtle_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_custom_msgs__srv__TurtleService_Request__init(message_memory);
}

void TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_fini_function(void * message_memory)
{
  turtle_custom_msgs__srv__TurtleService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_custom_msgs__srv__TurtleService_Request, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_message_members = {
  "turtle_custom_msgs__srv",  // message namespace
  "TurtleService_Request",  // message name
  1,  // number of fields
  sizeof(turtle_custom_msgs__srv__TurtleService_Request),
  TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_message_member_array,  // message members
  TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_message_type_support_handle = {
  0,
  &TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_custom_msgs, srv, TurtleService_Request)() {
  if (!TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_message_type_support_handle.typesupport_identifier) {
    TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtleService_Request__rosidl_typesupport_introspection_c__TurtleService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtle_custom_msgs/srv/detail/turtle_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtle_custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtle_custom_msgs/srv/detail/turtle_service__functions.h"
// already included above
// #include "turtle_custom_msgs/srv/detail/turtle_service__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_custom_msgs__srv__TurtleService_Response__init(message_memory);
}

void TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_fini_function(void * message_memory)
{
  turtle_custom_msgs__srv__TurtleService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_message_member_array[1] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_custom_msgs__srv__TurtleService_Response, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_message_members = {
  "turtle_custom_msgs__srv",  // message namespace
  "TurtleService_Response",  // message name
  1,  // number of fields
  sizeof(turtle_custom_msgs__srv__TurtleService_Response),
  TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_message_member_array,  // message members
  TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_message_type_support_handle = {
  0,
  &TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_custom_msgs, srv, TurtleService_Response)() {
  if (!TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_message_type_support_handle.typesupport_identifier) {
    TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtleService_Response__rosidl_typesupport_introspection_c__TurtleService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtle_custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtle_custom_msgs/srv/detail/turtle_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtle_custom_msgs__srv__detail__turtle_service__rosidl_typesupport_introspection_c__TurtleService_service_members = {
  "turtle_custom_msgs__srv",  // service namespace
  "TurtleService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtle_custom_msgs__srv__detail__turtle_service__rosidl_typesupport_introspection_c__TurtleService_Request_message_type_support_handle,
  NULL  // response message
  // turtle_custom_msgs__srv__detail__turtle_service__rosidl_typesupport_introspection_c__TurtleService_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtle_custom_msgs__srv__detail__turtle_service__rosidl_typesupport_introspection_c__TurtleService_service_type_support_handle = {
  0,
  &turtle_custom_msgs__srv__detail__turtle_service__rosidl_typesupport_introspection_c__TurtleService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_custom_msgs, srv, TurtleService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_custom_msgs, srv, TurtleService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_custom_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_custom_msgs, srv, TurtleService)() {
  if (!turtle_custom_msgs__srv__detail__turtle_service__rosidl_typesupport_introspection_c__TurtleService_service_type_support_handle.typesupport_identifier) {
    turtle_custom_msgs__srv__detail__turtle_service__rosidl_typesupport_introspection_c__TurtleService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtle_custom_msgs__srv__detail__turtle_service__rosidl_typesupport_introspection_c__TurtleService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_custom_msgs, srv, TurtleService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_custom_msgs, srv, TurtleService_Response)()->data;
  }

  return &turtle_custom_msgs__srv__detail__turtle_service__rosidl_typesupport_introspection_c__TurtleService_service_type_support_handle;
}
