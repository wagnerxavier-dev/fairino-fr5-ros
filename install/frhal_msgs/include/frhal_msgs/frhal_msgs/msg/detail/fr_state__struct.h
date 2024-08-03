// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from frhal_msgs:msg/FRState.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__MSG__DETAIL__FR_STATE__STRUCT_H_
#define FRHAL_MSGS__MSG__DETAIL__FR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prg_name'
// Member 'start_return'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FRState in the package frhal_msgs.
typedef struct frhal_msgs__msg__FRState
{
  uint8_t prg_state;
  uint8_t error_code;
  uint8_t robot_mode;
  double j1_cur_pos;
  double j2_cur_pos;
  double j3_cur_pos;
  double j4_cur_pos;
  double j5_cur_pos;
  double j6_cur_pos;
  double cart_x_cur_pos;
  double cart_y_cur_pos;
  double cart_z_cur_pos;
  double cart_a_cur_pos;
  double cart_b_cur_pos;
  double cart_c_cur_pos;
  int32_t tool_num;
  int32_t work_num;
  double j1_cur_tor;
  double j2_cur_tor;
  double j3_cur_tor;
  double j4_cur_tor;
  double j5_cur_tor;
  double j6_cur_tor;
  rosidl_runtime_c__String prg_name;
  uint8_t prg_total_line;
  uint8_t prg_cur_line;
  uint8_t dgt_output_h;
  uint8_t dgt_output_l;
  uint8_t tl_dgt_output_l;
  uint8_t dgt_input_h;
  uint8_t dgt_input_l;
  uint8_t tl_dgt_input_l;
  double ft_fx_data;
  double ft_fy_data;
  double ft_fz_data;
  double ft_tx_data;
  double ft_ty_data;
  double ft_tz_data;
  uint8_t ft_actstatus;
  uint8_t emg;
  int32_t robot_motion_done;
  uint8_t grip_motion_done;
  double exaxispos1;
  double exaxispos2;
  double exaxispos3;
  double exaxispos4;
  uint8_t check_sum;
  rosidl_runtime_c__String start_return;
} frhal_msgs__msg__FRState;

// Struct for a sequence of frhal_msgs__msg__FRState.
typedef struct frhal_msgs__msg__FRState__Sequence
{
  frhal_msgs__msg__FRState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} frhal_msgs__msg__FRState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRHAL_MSGS__MSG__DETAIL__FR_STATE__STRUCT_H_
