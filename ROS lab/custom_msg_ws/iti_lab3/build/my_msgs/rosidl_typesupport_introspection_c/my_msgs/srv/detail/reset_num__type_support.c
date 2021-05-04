// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_msgs:srv/ResetNum.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_msgs/srv/detail/reset_num__rosidl_typesupport_introspection_c.h"
#include "my_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_msgs/srv/detail/reset_num__functions.h"
#include "my_msgs/srv/detail/reset_num__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_msgs__srv__ResetNum_Request__init(message_memory);
}

void ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_fini_function(void * message_memory)
{
  my_msgs__srv__ResetNum_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_message_member_array[1] = {
  {
    "booldata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msgs__srv__ResetNum_Request, booldata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_message_members = {
  "my_msgs__srv",  // message namespace
  "ResetNum_Request",  // message name
  1,  // number of fields
  sizeof(my_msgs__srv__ResetNum_Request),
  ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_message_member_array,  // message members
  ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_message_type_support_handle = {
  0,
  &ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_msgs, srv, ResetNum_Request)() {
  if (!ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_message_type_support_handle.typesupport_identifier) {
    ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ResetNum_Request__rosidl_typesupport_introspection_c__ResetNum_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_msgs/srv/detail/reset_num__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_msgs/srv/detail/reset_num__functions.h"
// already included above
// #include "my_msgs/srv/detail/reset_num__struct.h"


// Include directives for member types
// Member `strdata`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_msgs__srv__ResetNum_Response__init(message_memory);
}

void ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_fini_function(void * message_memory)
{
  my_msgs__srv__ResetNum_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_message_member_array[1] = {
  {
    "strdata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msgs__srv__ResetNum_Response, strdata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_message_members = {
  "my_msgs__srv",  // message namespace
  "ResetNum_Response",  // message name
  1,  // number of fields
  sizeof(my_msgs__srv__ResetNum_Response),
  ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_message_member_array,  // message members
  ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_message_type_support_handle = {
  0,
  &ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_msgs, srv, ResetNum_Response)() {
  if (!ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_message_type_support_handle.typesupport_identifier) {
    ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ResetNum_Response__rosidl_typesupport_introspection_c__ResetNum_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_msgs/srv/detail/reset_num__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_msgs__srv__detail__reset_num__rosidl_typesupport_introspection_c__ResetNum_service_members = {
  "my_msgs__srv",  // service namespace
  "ResetNum",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_msgs__srv__detail__reset_num__rosidl_typesupport_introspection_c__ResetNum_Request_message_type_support_handle,
  NULL  // response message
  // my_msgs__srv__detail__reset_num__rosidl_typesupport_introspection_c__ResetNum_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_msgs__srv__detail__reset_num__rosidl_typesupport_introspection_c__ResetNum_service_type_support_handle = {
  0,
  &my_msgs__srv__detail__reset_num__rosidl_typesupport_introspection_c__ResetNum_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_msgs, srv, ResetNum_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_msgs, srv, ResetNum_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_msgs, srv, ResetNum)() {
  if (!my_msgs__srv__detail__reset_num__rosidl_typesupport_introspection_c__ResetNum_service_type_support_handle.typesupport_identifier) {
    my_msgs__srv__detail__reset_num__rosidl_typesupport_introspection_c__ResetNum_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_msgs__srv__detail__reset_num__rosidl_typesupport_introspection_c__ResetNum_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_msgs, srv, ResetNum_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_msgs, srv, ResetNum_Response)()->data;
  }

  return &my_msgs__srv__detail__reset_num__rosidl_typesupport_introspection_c__ResetNum_service_type_support_handle;
}
