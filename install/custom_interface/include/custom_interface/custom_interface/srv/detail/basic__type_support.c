// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interface:srv/Basic.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interface/srv/detail/basic__rosidl_typesupport_introspection_c.h"
#include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interface/srv/detail/basic__functions.h"
#include "custom_interface/srv/detail/basic__struct.h"


// Include directives for member types
// Member `mode`
#include "std_msgs/msg/int64.h"
// Member `mode`
#include "std_msgs/msg/detail/int64__rosidl_typesupport_introspection_c.h"
// Member `x`
// Member `y`
// Member `z`
#include "std_msgs/msg/float64.h"
// Member `x`
// Member `y`
// Member `z`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interface__srv__Basic_Request__init(message_memory);
}

void custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_fini_function(void * message_memory)
{
  custom_interface__srv__Basic_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_member_array[4] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__srv__Basic_Request, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__srv__Basic_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__srv__Basic_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__srv__Basic_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_members = {
  "custom_interface__srv",  // message namespace
  "Basic_Request",  // message name
  4,  // number of fields
  sizeof(custom_interface__srv__Basic_Request),
  custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_member_array,  // message members
  custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_type_support_handle = {
  0,
  &custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, Basic_Request)() {
  custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64)();
  custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_type_support_handle.typesupport_identifier) {
    custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interface__srv__Basic_Request__rosidl_typesupport_introspection_c__Basic_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interface/srv/detail/basic__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interface/srv/detail/basic__functions.h"
// already included above
// #include "custom_interface/srv/detail/basic__struct.h"


// Include directives for member types
// Member `success`
#include "std_msgs/msg/bool.h"
// Member `success`
#include "std_msgs/msg/detail/bool__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interface__srv__Basic_Response__init(message_memory);
}

void custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_fini_function(void * message_memory)
{
  custom_interface__srv__Basic_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__srv__Basic_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_message_members = {
  "custom_interface__srv",  // message namespace
  "Basic_Response",  // message name
  1,  // number of fields
  sizeof(custom_interface__srv__Basic_Response),
  custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_message_member_array,  // message members
  custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_message_type_support_handle = {
  0,
  &custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, Basic_Response)() {
  custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  if (!custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_message_type_support_handle.typesupport_identifier) {
    custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interface__srv__Basic_Response__rosidl_typesupport_introspection_c__Basic_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_interface/srv/detail/basic__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_interface__srv__detail__basic__rosidl_typesupport_introspection_c__Basic_service_members = {
  "custom_interface__srv",  // service namespace
  "Basic",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_interface__srv__detail__basic__rosidl_typesupport_introspection_c__Basic_Request_message_type_support_handle,
  NULL  // response message
  // custom_interface__srv__detail__basic__rosidl_typesupport_introspection_c__Basic_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_interface__srv__detail__basic__rosidl_typesupport_introspection_c__Basic_service_type_support_handle = {
  0,
  &custom_interface__srv__detail__basic__rosidl_typesupport_introspection_c__Basic_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, Basic_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, Basic_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, Basic)() {
  if (!custom_interface__srv__detail__basic__rosidl_typesupport_introspection_c__Basic_service_type_support_handle.typesupport_identifier) {
    custom_interface__srv__detail__basic__rosidl_typesupport_introspection_c__Basic_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_interface__srv__detail__basic__rosidl_typesupport_introspection_c__Basic_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, Basic_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, Basic_Response)()->data;
  }

  return &custom_interface__srv__detail__basic__rosidl_typesupport_introspection_c__Basic_service_type_support_handle;
}
