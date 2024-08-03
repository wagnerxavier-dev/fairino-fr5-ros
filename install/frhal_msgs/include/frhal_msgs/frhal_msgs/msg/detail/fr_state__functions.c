// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from frhal_msgs:msg/FRState.idl
// generated code does not contain a copyright notice
#include "frhal_msgs/msg/detail/fr_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `prg_name`
// Member `start_return`
#include "rosidl_runtime_c/string_functions.h"

bool
frhal_msgs__msg__FRState__init(frhal_msgs__msg__FRState * msg)
{
  if (!msg) {
    return false;
  }
  // prg_state
  // error_code
  // robot_mode
  // j1_cur_pos
  // j2_cur_pos
  // j3_cur_pos
  // j4_cur_pos
  // j5_cur_pos
  // j6_cur_pos
  // cart_x_cur_pos
  // cart_y_cur_pos
  // cart_z_cur_pos
  // cart_a_cur_pos
  // cart_b_cur_pos
  // cart_c_cur_pos
  // tool_num
  // work_num
  // j1_cur_tor
  // j2_cur_tor
  // j3_cur_tor
  // j4_cur_tor
  // j5_cur_tor
  // j6_cur_tor
  // prg_name
  if (!rosidl_runtime_c__String__init(&msg->prg_name)) {
    frhal_msgs__msg__FRState__fini(msg);
    return false;
  }
  // prg_total_line
  // prg_cur_line
  // dgt_output_h
  // dgt_output_l
  // tl_dgt_output_l
  // dgt_input_h
  // dgt_input_l
  // tl_dgt_input_l
  // ft_fx_data
  // ft_fy_data
  // ft_fz_data
  // ft_tx_data
  // ft_ty_data
  // ft_tz_data
  // ft_actstatus
  // emg
  // robot_motion_done
  // grip_motion_done
  // exaxispos1
  // exaxispos2
  // exaxispos3
  // exaxispos4
  // check_sum
  // start_return
  if (!rosidl_runtime_c__String__init(&msg->start_return)) {
    frhal_msgs__msg__FRState__fini(msg);
    return false;
  }
  return true;
}

void
frhal_msgs__msg__FRState__fini(frhal_msgs__msg__FRState * msg)
{
  if (!msg) {
    return;
  }
  // prg_state
  // error_code
  // robot_mode
  // j1_cur_pos
  // j2_cur_pos
  // j3_cur_pos
  // j4_cur_pos
  // j5_cur_pos
  // j6_cur_pos
  // cart_x_cur_pos
  // cart_y_cur_pos
  // cart_z_cur_pos
  // cart_a_cur_pos
  // cart_b_cur_pos
  // cart_c_cur_pos
  // tool_num
  // work_num
  // j1_cur_tor
  // j2_cur_tor
  // j3_cur_tor
  // j4_cur_tor
  // j5_cur_tor
  // j6_cur_tor
  // prg_name
  rosidl_runtime_c__String__fini(&msg->prg_name);
  // prg_total_line
  // prg_cur_line
  // dgt_output_h
  // dgt_output_l
  // tl_dgt_output_l
  // dgt_input_h
  // dgt_input_l
  // tl_dgt_input_l
  // ft_fx_data
  // ft_fy_data
  // ft_fz_data
  // ft_tx_data
  // ft_ty_data
  // ft_tz_data
  // ft_actstatus
  // emg
  // robot_motion_done
  // grip_motion_done
  // exaxispos1
  // exaxispos2
  // exaxispos3
  // exaxispos4
  // check_sum
  // start_return
  rosidl_runtime_c__String__fini(&msg->start_return);
}

bool
frhal_msgs__msg__FRState__are_equal(const frhal_msgs__msg__FRState * lhs, const frhal_msgs__msg__FRState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prg_state
  if (lhs->prg_state != rhs->prg_state) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // robot_mode
  if (lhs->robot_mode != rhs->robot_mode) {
    return false;
  }
  // j1_cur_pos
  if (lhs->j1_cur_pos != rhs->j1_cur_pos) {
    return false;
  }
  // j2_cur_pos
  if (lhs->j2_cur_pos != rhs->j2_cur_pos) {
    return false;
  }
  // j3_cur_pos
  if (lhs->j3_cur_pos != rhs->j3_cur_pos) {
    return false;
  }
  // j4_cur_pos
  if (lhs->j4_cur_pos != rhs->j4_cur_pos) {
    return false;
  }
  // j5_cur_pos
  if (lhs->j5_cur_pos != rhs->j5_cur_pos) {
    return false;
  }
  // j6_cur_pos
  if (lhs->j6_cur_pos != rhs->j6_cur_pos) {
    return false;
  }
  // cart_x_cur_pos
  if (lhs->cart_x_cur_pos != rhs->cart_x_cur_pos) {
    return false;
  }
  // cart_y_cur_pos
  if (lhs->cart_y_cur_pos != rhs->cart_y_cur_pos) {
    return false;
  }
  // cart_z_cur_pos
  if (lhs->cart_z_cur_pos != rhs->cart_z_cur_pos) {
    return false;
  }
  // cart_a_cur_pos
  if (lhs->cart_a_cur_pos != rhs->cart_a_cur_pos) {
    return false;
  }
  // cart_b_cur_pos
  if (lhs->cart_b_cur_pos != rhs->cart_b_cur_pos) {
    return false;
  }
  // cart_c_cur_pos
  if (lhs->cart_c_cur_pos != rhs->cart_c_cur_pos) {
    return false;
  }
  // tool_num
  if (lhs->tool_num != rhs->tool_num) {
    return false;
  }
  // work_num
  if (lhs->work_num != rhs->work_num) {
    return false;
  }
  // j1_cur_tor
  if (lhs->j1_cur_tor != rhs->j1_cur_tor) {
    return false;
  }
  // j2_cur_tor
  if (lhs->j2_cur_tor != rhs->j2_cur_tor) {
    return false;
  }
  // j3_cur_tor
  if (lhs->j3_cur_tor != rhs->j3_cur_tor) {
    return false;
  }
  // j4_cur_tor
  if (lhs->j4_cur_tor != rhs->j4_cur_tor) {
    return false;
  }
  // j5_cur_tor
  if (lhs->j5_cur_tor != rhs->j5_cur_tor) {
    return false;
  }
  // j6_cur_tor
  if (lhs->j6_cur_tor != rhs->j6_cur_tor) {
    return false;
  }
  // prg_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->prg_name), &(rhs->prg_name)))
  {
    return false;
  }
  // prg_total_line
  if (lhs->prg_total_line != rhs->prg_total_line) {
    return false;
  }
  // prg_cur_line
  if (lhs->prg_cur_line != rhs->prg_cur_line) {
    return false;
  }
  // dgt_output_h
  if (lhs->dgt_output_h != rhs->dgt_output_h) {
    return false;
  }
  // dgt_output_l
  if (lhs->dgt_output_l != rhs->dgt_output_l) {
    return false;
  }
  // tl_dgt_output_l
  if (lhs->tl_dgt_output_l != rhs->tl_dgt_output_l) {
    return false;
  }
  // dgt_input_h
  if (lhs->dgt_input_h != rhs->dgt_input_h) {
    return false;
  }
  // dgt_input_l
  if (lhs->dgt_input_l != rhs->dgt_input_l) {
    return false;
  }
  // tl_dgt_input_l
  if (lhs->tl_dgt_input_l != rhs->tl_dgt_input_l) {
    return false;
  }
  // ft_fx_data
  if (lhs->ft_fx_data != rhs->ft_fx_data) {
    return false;
  }
  // ft_fy_data
  if (lhs->ft_fy_data != rhs->ft_fy_data) {
    return false;
  }
  // ft_fz_data
  if (lhs->ft_fz_data != rhs->ft_fz_data) {
    return false;
  }
  // ft_tx_data
  if (lhs->ft_tx_data != rhs->ft_tx_data) {
    return false;
  }
  // ft_ty_data
  if (lhs->ft_ty_data != rhs->ft_ty_data) {
    return false;
  }
  // ft_tz_data
  if (lhs->ft_tz_data != rhs->ft_tz_data) {
    return false;
  }
  // ft_actstatus
  if (lhs->ft_actstatus != rhs->ft_actstatus) {
    return false;
  }
  // emg
  if (lhs->emg != rhs->emg) {
    return false;
  }
  // robot_motion_done
  if (lhs->robot_motion_done != rhs->robot_motion_done) {
    return false;
  }
  // grip_motion_done
  if (lhs->grip_motion_done != rhs->grip_motion_done) {
    return false;
  }
  // exaxispos1
  if (lhs->exaxispos1 != rhs->exaxispos1) {
    return false;
  }
  // exaxispos2
  if (lhs->exaxispos2 != rhs->exaxispos2) {
    return false;
  }
  // exaxispos3
  if (lhs->exaxispos3 != rhs->exaxispos3) {
    return false;
  }
  // exaxispos4
  if (lhs->exaxispos4 != rhs->exaxispos4) {
    return false;
  }
  // check_sum
  if (lhs->check_sum != rhs->check_sum) {
    return false;
  }
  // start_return
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->start_return), &(rhs->start_return)))
  {
    return false;
  }
  return true;
}

bool
frhal_msgs__msg__FRState__copy(
  const frhal_msgs__msg__FRState * input,
  frhal_msgs__msg__FRState * output)
{
  if (!input || !output) {
    return false;
  }
  // prg_state
  output->prg_state = input->prg_state;
  // error_code
  output->error_code = input->error_code;
  // robot_mode
  output->robot_mode = input->robot_mode;
  // j1_cur_pos
  output->j1_cur_pos = input->j1_cur_pos;
  // j2_cur_pos
  output->j2_cur_pos = input->j2_cur_pos;
  // j3_cur_pos
  output->j3_cur_pos = input->j3_cur_pos;
  // j4_cur_pos
  output->j4_cur_pos = input->j4_cur_pos;
  // j5_cur_pos
  output->j5_cur_pos = input->j5_cur_pos;
  // j6_cur_pos
  output->j6_cur_pos = input->j6_cur_pos;
  // cart_x_cur_pos
  output->cart_x_cur_pos = input->cart_x_cur_pos;
  // cart_y_cur_pos
  output->cart_y_cur_pos = input->cart_y_cur_pos;
  // cart_z_cur_pos
  output->cart_z_cur_pos = input->cart_z_cur_pos;
  // cart_a_cur_pos
  output->cart_a_cur_pos = input->cart_a_cur_pos;
  // cart_b_cur_pos
  output->cart_b_cur_pos = input->cart_b_cur_pos;
  // cart_c_cur_pos
  output->cart_c_cur_pos = input->cart_c_cur_pos;
  // tool_num
  output->tool_num = input->tool_num;
  // work_num
  output->work_num = input->work_num;
  // j1_cur_tor
  output->j1_cur_tor = input->j1_cur_tor;
  // j2_cur_tor
  output->j2_cur_tor = input->j2_cur_tor;
  // j3_cur_tor
  output->j3_cur_tor = input->j3_cur_tor;
  // j4_cur_tor
  output->j4_cur_tor = input->j4_cur_tor;
  // j5_cur_tor
  output->j5_cur_tor = input->j5_cur_tor;
  // j6_cur_tor
  output->j6_cur_tor = input->j6_cur_tor;
  // prg_name
  if (!rosidl_runtime_c__String__copy(
      &(input->prg_name), &(output->prg_name)))
  {
    return false;
  }
  // prg_total_line
  output->prg_total_line = input->prg_total_line;
  // prg_cur_line
  output->prg_cur_line = input->prg_cur_line;
  // dgt_output_h
  output->dgt_output_h = input->dgt_output_h;
  // dgt_output_l
  output->dgt_output_l = input->dgt_output_l;
  // tl_dgt_output_l
  output->tl_dgt_output_l = input->tl_dgt_output_l;
  // dgt_input_h
  output->dgt_input_h = input->dgt_input_h;
  // dgt_input_l
  output->dgt_input_l = input->dgt_input_l;
  // tl_dgt_input_l
  output->tl_dgt_input_l = input->tl_dgt_input_l;
  // ft_fx_data
  output->ft_fx_data = input->ft_fx_data;
  // ft_fy_data
  output->ft_fy_data = input->ft_fy_data;
  // ft_fz_data
  output->ft_fz_data = input->ft_fz_data;
  // ft_tx_data
  output->ft_tx_data = input->ft_tx_data;
  // ft_ty_data
  output->ft_ty_data = input->ft_ty_data;
  // ft_tz_data
  output->ft_tz_data = input->ft_tz_data;
  // ft_actstatus
  output->ft_actstatus = input->ft_actstatus;
  // emg
  output->emg = input->emg;
  // robot_motion_done
  output->robot_motion_done = input->robot_motion_done;
  // grip_motion_done
  output->grip_motion_done = input->grip_motion_done;
  // exaxispos1
  output->exaxispos1 = input->exaxispos1;
  // exaxispos2
  output->exaxispos2 = input->exaxispos2;
  // exaxispos3
  output->exaxispos3 = input->exaxispos3;
  // exaxispos4
  output->exaxispos4 = input->exaxispos4;
  // check_sum
  output->check_sum = input->check_sum;
  // start_return
  if (!rosidl_runtime_c__String__copy(
      &(input->start_return), &(output->start_return)))
  {
    return false;
  }
  return true;
}

frhal_msgs__msg__FRState *
frhal_msgs__msg__FRState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  frhal_msgs__msg__FRState * msg = (frhal_msgs__msg__FRState *)allocator.allocate(sizeof(frhal_msgs__msg__FRState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(frhal_msgs__msg__FRState));
  bool success = frhal_msgs__msg__FRState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
frhal_msgs__msg__FRState__destroy(frhal_msgs__msg__FRState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    frhal_msgs__msg__FRState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
frhal_msgs__msg__FRState__Sequence__init(frhal_msgs__msg__FRState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  frhal_msgs__msg__FRState * data = NULL;

  if (size) {
    data = (frhal_msgs__msg__FRState *)allocator.zero_allocate(size, sizeof(frhal_msgs__msg__FRState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = frhal_msgs__msg__FRState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        frhal_msgs__msg__FRState__fini(&data[i - 1]);
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
frhal_msgs__msg__FRState__Sequence__fini(frhal_msgs__msg__FRState__Sequence * array)
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
      frhal_msgs__msg__FRState__fini(&array->data[i]);
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

frhal_msgs__msg__FRState__Sequence *
frhal_msgs__msg__FRState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  frhal_msgs__msg__FRState__Sequence * array = (frhal_msgs__msg__FRState__Sequence *)allocator.allocate(sizeof(frhal_msgs__msg__FRState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = frhal_msgs__msg__FRState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
frhal_msgs__msg__FRState__Sequence__destroy(frhal_msgs__msg__FRState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    frhal_msgs__msg__FRState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
frhal_msgs__msg__FRState__Sequence__are_equal(const frhal_msgs__msg__FRState__Sequence * lhs, const frhal_msgs__msg__FRState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!frhal_msgs__msg__FRState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
frhal_msgs__msg__FRState__Sequence__copy(
  const frhal_msgs__msg__FRState__Sequence * input,
  frhal_msgs__msg__FRState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(frhal_msgs__msg__FRState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    frhal_msgs__msg__FRState * data =
      (frhal_msgs__msg__FRState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!frhal_msgs__msg__FRState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          frhal_msgs__msg__FRState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!frhal_msgs__msg__FRState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
