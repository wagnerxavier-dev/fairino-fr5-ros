// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from frhal_msgs:srv/ROSCmdInterface.idl
// generated code does not contain a copyright notice
#include "frhal_msgs/srv/detail/ros_cmd_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `cmd_str`
#include "rosidl_runtime_c/string_functions.h"

bool
frhal_msgs__srv__ROSCmdInterface_Request__init(frhal_msgs__srv__ROSCmdInterface_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_str
  if (!rosidl_runtime_c__String__init(&msg->cmd_str)) {
    frhal_msgs__srv__ROSCmdInterface_Request__fini(msg);
    return false;
  }
  return true;
}

void
frhal_msgs__srv__ROSCmdInterface_Request__fini(frhal_msgs__srv__ROSCmdInterface_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd_str
  rosidl_runtime_c__String__fini(&msg->cmd_str);
}

bool
frhal_msgs__srv__ROSCmdInterface_Request__are_equal(const frhal_msgs__srv__ROSCmdInterface_Request * lhs, const frhal_msgs__srv__ROSCmdInterface_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd_str
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cmd_str), &(rhs->cmd_str)))
  {
    return false;
  }
  return true;
}

bool
frhal_msgs__srv__ROSCmdInterface_Request__copy(
  const frhal_msgs__srv__ROSCmdInterface_Request * input,
  frhal_msgs__srv__ROSCmdInterface_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd_str
  if (!rosidl_runtime_c__String__copy(
      &(input->cmd_str), &(output->cmd_str)))
  {
    return false;
  }
  return true;
}

frhal_msgs__srv__ROSCmdInterface_Request *
frhal_msgs__srv__ROSCmdInterface_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  frhal_msgs__srv__ROSCmdInterface_Request * msg = (frhal_msgs__srv__ROSCmdInterface_Request *)allocator.allocate(sizeof(frhal_msgs__srv__ROSCmdInterface_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(frhal_msgs__srv__ROSCmdInterface_Request));
  bool success = frhal_msgs__srv__ROSCmdInterface_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
frhal_msgs__srv__ROSCmdInterface_Request__destroy(frhal_msgs__srv__ROSCmdInterface_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    frhal_msgs__srv__ROSCmdInterface_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__init(frhal_msgs__srv__ROSCmdInterface_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  frhal_msgs__srv__ROSCmdInterface_Request * data = NULL;

  if (size) {
    data = (frhal_msgs__srv__ROSCmdInterface_Request *)allocator.zero_allocate(size, sizeof(frhal_msgs__srv__ROSCmdInterface_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = frhal_msgs__srv__ROSCmdInterface_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        frhal_msgs__srv__ROSCmdInterface_Request__fini(&data[i - 1]);
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
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__fini(frhal_msgs__srv__ROSCmdInterface_Request__Sequence * array)
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
      frhal_msgs__srv__ROSCmdInterface_Request__fini(&array->data[i]);
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

frhal_msgs__srv__ROSCmdInterface_Request__Sequence *
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  frhal_msgs__srv__ROSCmdInterface_Request__Sequence * array = (frhal_msgs__srv__ROSCmdInterface_Request__Sequence *)allocator.allocate(sizeof(frhal_msgs__srv__ROSCmdInterface_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = frhal_msgs__srv__ROSCmdInterface_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__destroy(frhal_msgs__srv__ROSCmdInterface_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    frhal_msgs__srv__ROSCmdInterface_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__are_equal(const frhal_msgs__srv__ROSCmdInterface_Request__Sequence * lhs, const frhal_msgs__srv__ROSCmdInterface_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!frhal_msgs__srv__ROSCmdInterface_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__copy(
  const frhal_msgs__srv__ROSCmdInterface_Request__Sequence * input,
  frhal_msgs__srv__ROSCmdInterface_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(frhal_msgs__srv__ROSCmdInterface_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    frhal_msgs__srv__ROSCmdInterface_Request * data =
      (frhal_msgs__srv__ROSCmdInterface_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!frhal_msgs__srv__ROSCmdInterface_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          frhal_msgs__srv__ROSCmdInterface_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!frhal_msgs__srv__ROSCmdInterface_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `cmd_res`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
frhal_msgs__srv__ROSCmdInterface_Response__init(frhal_msgs__srv__ROSCmdInterface_Response * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_res
  if (!rosidl_runtime_c__String__init(&msg->cmd_res)) {
    frhal_msgs__srv__ROSCmdInterface_Response__fini(msg);
    return false;
  }
  return true;
}

void
frhal_msgs__srv__ROSCmdInterface_Response__fini(frhal_msgs__srv__ROSCmdInterface_Response * msg)
{
  if (!msg) {
    return;
  }
  // cmd_res
  rosidl_runtime_c__String__fini(&msg->cmd_res);
}

bool
frhal_msgs__srv__ROSCmdInterface_Response__are_equal(const frhal_msgs__srv__ROSCmdInterface_Response * lhs, const frhal_msgs__srv__ROSCmdInterface_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd_res
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cmd_res), &(rhs->cmd_res)))
  {
    return false;
  }
  return true;
}

bool
frhal_msgs__srv__ROSCmdInterface_Response__copy(
  const frhal_msgs__srv__ROSCmdInterface_Response * input,
  frhal_msgs__srv__ROSCmdInterface_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd_res
  if (!rosidl_runtime_c__String__copy(
      &(input->cmd_res), &(output->cmd_res)))
  {
    return false;
  }
  return true;
}

frhal_msgs__srv__ROSCmdInterface_Response *
frhal_msgs__srv__ROSCmdInterface_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  frhal_msgs__srv__ROSCmdInterface_Response * msg = (frhal_msgs__srv__ROSCmdInterface_Response *)allocator.allocate(sizeof(frhal_msgs__srv__ROSCmdInterface_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(frhal_msgs__srv__ROSCmdInterface_Response));
  bool success = frhal_msgs__srv__ROSCmdInterface_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
frhal_msgs__srv__ROSCmdInterface_Response__destroy(frhal_msgs__srv__ROSCmdInterface_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    frhal_msgs__srv__ROSCmdInterface_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__init(frhal_msgs__srv__ROSCmdInterface_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  frhal_msgs__srv__ROSCmdInterface_Response * data = NULL;

  if (size) {
    data = (frhal_msgs__srv__ROSCmdInterface_Response *)allocator.zero_allocate(size, sizeof(frhal_msgs__srv__ROSCmdInterface_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = frhal_msgs__srv__ROSCmdInterface_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        frhal_msgs__srv__ROSCmdInterface_Response__fini(&data[i - 1]);
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
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__fini(frhal_msgs__srv__ROSCmdInterface_Response__Sequence * array)
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
      frhal_msgs__srv__ROSCmdInterface_Response__fini(&array->data[i]);
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

frhal_msgs__srv__ROSCmdInterface_Response__Sequence *
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  frhal_msgs__srv__ROSCmdInterface_Response__Sequence * array = (frhal_msgs__srv__ROSCmdInterface_Response__Sequence *)allocator.allocate(sizeof(frhal_msgs__srv__ROSCmdInterface_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = frhal_msgs__srv__ROSCmdInterface_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__destroy(frhal_msgs__srv__ROSCmdInterface_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    frhal_msgs__srv__ROSCmdInterface_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__are_equal(const frhal_msgs__srv__ROSCmdInterface_Response__Sequence * lhs, const frhal_msgs__srv__ROSCmdInterface_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!frhal_msgs__srv__ROSCmdInterface_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__copy(
  const frhal_msgs__srv__ROSCmdInterface_Response__Sequence * input,
  frhal_msgs__srv__ROSCmdInterface_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(frhal_msgs__srv__ROSCmdInterface_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    frhal_msgs__srv__ROSCmdInterface_Response * data =
      (frhal_msgs__srv__ROSCmdInterface_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!frhal_msgs__srv__ROSCmdInterface_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          frhal_msgs__srv__ROSCmdInterface_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!frhal_msgs__srv__ROSCmdInterface_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
