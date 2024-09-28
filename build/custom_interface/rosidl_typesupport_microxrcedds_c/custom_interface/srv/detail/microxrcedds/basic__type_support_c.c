// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from custom_interface:srv/Basic.idl
// generated code does not contain a copyright notice
#include "custom_interface/srv/detail/basic__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "custom_interface/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "custom_interface/srv/detail/basic__struct.h"
#include "custom_interface/srv/detail/basic__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/float64__functions.h"  // x, y, z
#include "std_msgs/msg/detail/int64__functions.h"  // mode

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_custom_interface
size_t get_serialized_size_std_msgs__msg__Float64(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_custom_interface
size_t max_serialized_size_std_msgs__msg__Float64(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Float64)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_custom_interface
size_t get_serialized_size_std_msgs__msg__Int64(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_custom_interface
size_t max_serialized_size_std_msgs__msg__Int64(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Int64)();


typedef custom_interface__srv__Basic_Request _Basic_Request__ros_msg_type;

static bool _Basic_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Basic_Request__ros_msg_type * ros_message = (_Basic_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: mode
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Int64
      )()->data))->cdr_serialize(&ros_message->mode, cdr);
  // Member: x
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Float64
      )()->data))->cdr_serialize(&ros_message->x, cdr);
  // Member: y
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Float64
      )()->data))->cdr_serialize(&ros_message->y, cdr);
  // Member: z
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Float64
      )()->data))->cdr_serialize(&ros_message->z, cdr);

  return rv;
}

static bool _Basic_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Basic_Request__ros_msg_type * ros_message = (_Basic_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: mode
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Int64
      )()->data))->cdr_deserialize(cdr, &ros_message->mode);
  // Field name: x
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Float64
      )()->data))->cdr_deserialize(cdr, &ros_message->x);
  // Field name: y
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Float64
      )()->data))->cdr_deserialize(cdr, &ros_message->y);
  // Field name: z
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Float64
      )()->data))->cdr_deserialize(cdr, &ros_message->z);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_custom_interface
size_t get_serialized_size_custom_interface__srv__Basic_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Basic_Request__ros_msg_type * ros_message = (const _Basic_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: mode
  current_alignment +=
    get_serialized_size_std_msgs__msg__Int64(&ros_message->mode, current_alignment);
  // Member: x
  current_alignment +=
    get_serialized_size_std_msgs__msg__Float64(&ros_message->x, current_alignment);
  // Member: y
  current_alignment +=
    get_serialized_size_std_msgs__msg__Float64(&ros_message->y, current_alignment);
  // Member: z
  current_alignment +=
    get_serialized_size_std_msgs__msg__Float64(&ros_message->z, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Basic_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_custom_interface__srv__Basic_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_custom_interface
size_t max_serialized_size_custom_interface__srv__Basic_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: mode
  current_alignment +=
    max_serialized_size_std_msgs__msg__Int64(full_bounded, current_alignment);
  // Member: x
  current_alignment +=
    max_serialized_size_std_msgs__msg__Float64(full_bounded, current_alignment);
  // Member: y
  current_alignment +=
    max_serialized_size_std_msgs__msg__Float64(full_bounded, current_alignment);
  // Member: z
  current_alignment +=
    max_serialized_size_std_msgs__msg__Float64(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _Basic_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_custom_interface__srv__Basic_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Basic_Request = {
  "custom_interface::srv",
  "Basic_Request",
  _Basic_Request__cdr_serialize,
  _Basic_Request__cdr_deserialize,
  _Basic_Request__get_serialized_size,
  get_serialized_size_custom_interface__srv__Basic_Request,
  _Basic_Request__max_serialized_size
};

static rosidl_message_type_support_t _Basic_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Basic_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, custom_interface, srv, Basic_Request)() {
  return &_Basic_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "custom_interface/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "custom_interface/srv/detail/basic__struct.h"
// already included above
// #include "custom_interface/srv/detail/basic__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/bool__functions.h"  // success

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_custom_interface
size_t get_serialized_size_std_msgs__msg__Bool(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_custom_interface
size_t max_serialized_size_std_msgs__msg__Bool(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Bool)();


typedef custom_interface__srv__Basic_Response _Basic_Response__ros_msg_type;

static bool _Basic_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Basic_Response__ros_msg_type * ros_message = (_Basic_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: success
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Bool
      )()->data))->cdr_serialize(&ros_message->success, cdr);

  return rv;
}

static bool _Basic_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Basic_Response__ros_msg_type * ros_message = (_Basic_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: success
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Bool
      )()->data))->cdr_deserialize(cdr, &ros_message->success);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_custom_interface
size_t get_serialized_size_custom_interface__srv__Basic_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Basic_Response__ros_msg_type * ros_message = (const _Basic_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment +=
    get_serialized_size_std_msgs__msg__Bool(&ros_message->success, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Basic_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_custom_interface__srv__Basic_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_custom_interface
size_t max_serialized_size_custom_interface__srv__Basic_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment +=
    max_serialized_size_std_msgs__msg__Bool(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _Basic_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_custom_interface__srv__Basic_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Basic_Response = {
  "custom_interface::srv",
  "Basic_Response",
  _Basic_Response__cdr_serialize,
  _Basic_Response__cdr_deserialize,
  _Basic_Response__get_serialized_size,
  get_serialized_size_custom_interface__srv__Basic_Response,
  _Basic_Response__max_serialized_size
};

static rosidl_message_type_support_t _Basic_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Basic_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, custom_interface, srv, Basic_Response)() {
  return &_Basic_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "custom_interface/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "custom_interface/srv/basic.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Basic__callbacks = {
  "custom_interface::srv",
  "Basic",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, custom_interface, srv, Basic_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, custom_interface, srv, Basic_Response),
};

static rosidl_service_type_support_t Basic__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &Basic__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, custom_interface, srv, Basic)() {
  return &Basic__handle;
}

#if defined(__cplusplus)
}
#endif
