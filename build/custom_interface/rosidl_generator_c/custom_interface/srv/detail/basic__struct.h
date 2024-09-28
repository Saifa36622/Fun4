// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface:srv/Basic.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__BASIC__STRUCT_H_
#define CUSTOM_INTERFACE__SRV__DETAIL__BASIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "std_msgs/msg/detail/int64__struct.h"
// Member 'x'
// Member 'y'
// Member 'z'
#include "std_msgs/msg/detail/float64__struct.h"

/// Struct defined in srv/Basic in the package custom_interface.
typedef struct custom_interface__srv__Basic_Request
{
  std_msgs__msg__Int64 mode;
  std_msgs__msg__Float64 x;
  std_msgs__msg__Float64 y;
  std_msgs__msg__Float64 z;
} custom_interface__srv__Basic_Request;

// Struct for a sequence of custom_interface__srv__Basic_Request.
typedef struct custom_interface__srv__Basic_Request__Sequence
{
  custom_interface__srv__Basic_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__srv__Basic_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'success'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in srv/Basic in the package custom_interface.
typedef struct custom_interface__srv__Basic_Response
{
  std_msgs__msg__Bool success;
} custom_interface__srv__Basic_Response;

// Struct for a sequence of custom_interface__srv__Basic_Response.
typedef struct custom_interface__srv__Basic_Response__Sequence
{
  custom_interface__srv__Basic_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__srv__Basic_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__BASIC__STRUCT_H_
