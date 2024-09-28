// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interface:srv/Basic.idl
// generated code does not contain a copyright notice
#include "custom_interface/srv/detail/basic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `mode`
#include "std_msgs/msg/detail/int64__functions.h"
// Member `x`
// Member `y`
// Member `z`
#include "std_msgs/msg/detail/float64__functions.h"

bool
custom_interface__srv__Basic_Request__init(custom_interface__srv__Basic_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  if (!std_msgs__msg__Int64__init(&msg->mode)) {
    custom_interface__srv__Basic_Request__fini(msg);
    return false;
  }
  // x
  if (!std_msgs__msg__Float64__init(&msg->x)) {
    custom_interface__srv__Basic_Request__fini(msg);
    return false;
  }
  // y
  if (!std_msgs__msg__Float64__init(&msg->y)) {
    custom_interface__srv__Basic_Request__fini(msg);
    return false;
  }
  // z
  if (!std_msgs__msg__Float64__init(&msg->z)) {
    custom_interface__srv__Basic_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__srv__Basic_Request__fini(custom_interface__srv__Basic_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode
  std_msgs__msg__Int64__fini(&msg->mode);
  // x
  std_msgs__msg__Float64__fini(&msg->x);
  // y
  std_msgs__msg__Float64__fini(&msg->y);
  // z
  std_msgs__msg__Float64__fini(&msg->z);
}

bool
custom_interface__srv__Basic_Request__are_equal(const custom_interface__srv__Basic_Request * lhs, const custom_interface__srv__Basic_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (!std_msgs__msg__Int64__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // x
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // z
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->z), &(rhs->z)))
  {
    return false;
  }
  return true;
}

bool
custom_interface__srv__Basic_Request__copy(
  const custom_interface__srv__Basic_Request * input,
  custom_interface__srv__Basic_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  if (!std_msgs__msg__Int64__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // x
  if (!std_msgs__msg__Float64__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!std_msgs__msg__Float64__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // z
  if (!std_msgs__msg__Float64__copy(
      &(input->z), &(output->z)))
  {
    return false;
  }
  return true;
}

custom_interface__srv__Basic_Request *
custom_interface__srv__Basic_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__srv__Basic_Request * msg = (custom_interface__srv__Basic_Request *)allocator.allocate(sizeof(custom_interface__srv__Basic_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__srv__Basic_Request));
  bool success = custom_interface__srv__Basic_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interface__srv__Basic_Request__destroy(custom_interface__srv__Basic_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interface__srv__Basic_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interface__srv__Basic_Request__Sequence__init(custom_interface__srv__Basic_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__srv__Basic_Request * data = NULL;

  if (size) {
    data = (custom_interface__srv__Basic_Request *)allocator.zero_allocate(size, sizeof(custom_interface__srv__Basic_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__srv__Basic_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__srv__Basic_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__srv__Basic_Request__Sequence__fini(custom_interface__srv__Basic_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__srv__Basic_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__srv__Basic_Request__Sequence *
custom_interface__srv__Basic_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__srv__Basic_Request__Sequence * array = (custom_interface__srv__Basic_Request__Sequence *)allocator.allocate(sizeof(custom_interface__srv__Basic_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__srv__Basic_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interface__srv__Basic_Request__Sequence__destroy(custom_interface__srv__Basic_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interface__srv__Basic_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interface__srv__Basic_Request__Sequence__are_equal(const custom_interface__srv__Basic_Request__Sequence * lhs, const custom_interface__srv__Basic_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__srv__Basic_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__srv__Basic_Request__Sequence__copy(
  const custom_interface__srv__Basic_Request__Sequence * input,
  custom_interface__srv__Basic_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__srv__Basic_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interface__srv__Basic_Request * data =
      (custom_interface__srv__Basic_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__srv__Basic_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interface__srv__Basic_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interface__srv__Basic_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `success`
#include "std_msgs/msg/detail/bool__functions.h"

bool
custom_interface__srv__Basic_Response__init(custom_interface__srv__Basic_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  if (!std_msgs__msg__Bool__init(&msg->success)) {
    custom_interface__srv__Basic_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__srv__Basic_Response__fini(custom_interface__srv__Basic_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  std_msgs__msg__Bool__fini(&msg->success);
}

bool
custom_interface__srv__Basic_Response__are_equal(const custom_interface__srv__Basic_Response * lhs, const custom_interface__srv__Basic_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->success), &(rhs->success)))
  {
    return false;
  }
  return true;
}

bool
custom_interface__srv__Basic_Response__copy(
  const custom_interface__srv__Basic_Response * input,
  custom_interface__srv__Basic_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  if (!std_msgs__msg__Bool__copy(
      &(input->success), &(output->success)))
  {
    return false;
  }
  return true;
}

custom_interface__srv__Basic_Response *
custom_interface__srv__Basic_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__srv__Basic_Response * msg = (custom_interface__srv__Basic_Response *)allocator.allocate(sizeof(custom_interface__srv__Basic_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__srv__Basic_Response));
  bool success = custom_interface__srv__Basic_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interface__srv__Basic_Response__destroy(custom_interface__srv__Basic_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interface__srv__Basic_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interface__srv__Basic_Response__Sequence__init(custom_interface__srv__Basic_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__srv__Basic_Response * data = NULL;

  if (size) {
    data = (custom_interface__srv__Basic_Response *)allocator.zero_allocate(size, sizeof(custom_interface__srv__Basic_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__srv__Basic_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__srv__Basic_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__srv__Basic_Response__Sequence__fini(custom_interface__srv__Basic_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__srv__Basic_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__srv__Basic_Response__Sequence *
custom_interface__srv__Basic_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface__srv__Basic_Response__Sequence * array = (custom_interface__srv__Basic_Response__Sequence *)allocator.allocate(sizeof(custom_interface__srv__Basic_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__srv__Basic_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interface__srv__Basic_Response__Sequence__destroy(custom_interface__srv__Basic_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interface__srv__Basic_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interface__srv__Basic_Response__Sequence__are_equal(const custom_interface__srv__Basic_Response__Sequence * lhs, const custom_interface__srv__Basic_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface__srv__Basic_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface__srv__Basic_Response__Sequence__copy(
  const custom_interface__srv__Basic_Response__Sequence * input,
  custom_interface__srv__Basic_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface__srv__Basic_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interface__srv__Basic_Response * data =
      (custom_interface__srv__Basic_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface__srv__Basic_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interface__srv__Basic_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interface__srv__Basic_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
