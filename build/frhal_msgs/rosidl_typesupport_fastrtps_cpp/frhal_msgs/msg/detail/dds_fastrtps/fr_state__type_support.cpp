// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from frhal_msgs:msg/FRState.idl
// generated code does not contain a copyright notice
#include "frhal_msgs/msg/detail/fr_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "frhal_msgs/msg/detail/fr_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace frhal_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_frhal_msgs
cdr_serialize(
  const frhal_msgs::msg::FRState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: prg_state
  cdr << ros_message.prg_state;
  // Member: error_code
  cdr << ros_message.error_code;
  // Member: robot_mode
  cdr << ros_message.robot_mode;
  // Member: j1_cur_pos
  cdr << ros_message.j1_cur_pos;
  // Member: j2_cur_pos
  cdr << ros_message.j2_cur_pos;
  // Member: j3_cur_pos
  cdr << ros_message.j3_cur_pos;
  // Member: j4_cur_pos
  cdr << ros_message.j4_cur_pos;
  // Member: j5_cur_pos
  cdr << ros_message.j5_cur_pos;
  // Member: j6_cur_pos
  cdr << ros_message.j6_cur_pos;
  // Member: cart_x_cur_pos
  cdr << ros_message.cart_x_cur_pos;
  // Member: cart_y_cur_pos
  cdr << ros_message.cart_y_cur_pos;
  // Member: cart_z_cur_pos
  cdr << ros_message.cart_z_cur_pos;
  // Member: cart_a_cur_pos
  cdr << ros_message.cart_a_cur_pos;
  // Member: cart_b_cur_pos
  cdr << ros_message.cart_b_cur_pos;
  // Member: cart_c_cur_pos
  cdr << ros_message.cart_c_cur_pos;
  // Member: tool_num
  cdr << ros_message.tool_num;
  // Member: work_num
  cdr << ros_message.work_num;
  // Member: j1_cur_tor
  cdr << ros_message.j1_cur_tor;
  // Member: j2_cur_tor
  cdr << ros_message.j2_cur_tor;
  // Member: j3_cur_tor
  cdr << ros_message.j3_cur_tor;
  // Member: j4_cur_tor
  cdr << ros_message.j4_cur_tor;
  // Member: j5_cur_tor
  cdr << ros_message.j5_cur_tor;
  // Member: j6_cur_tor
  cdr << ros_message.j6_cur_tor;
  // Member: prg_name
  cdr << ros_message.prg_name;
  // Member: prg_total_line
  cdr << ros_message.prg_total_line;
  // Member: prg_cur_line
  cdr << ros_message.prg_cur_line;
  // Member: dgt_output_h
  cdr << ros_message.dgt_output_h;
  // Member: dgt_output_l
  cdr << ros_message.dgt_output_l;
  // Member: tl_dgt_output_l
  cdr << ros_message.tl_dgt_output_l;
  // Member: dgt_input_h
  cdr << ros_message.dgt_input_h;
  // Member: dgt_input_l
  cdr << ros_message.dgt_input_l;
  // Member: tl_dgt_input_l
  cdr << ros_message.tl_dgt_input_l;
  // Member: ft_fx_data
  cdr << ros_message.ft_fx_data;
  // Member: ft_fy_data
  cdr << ros_message.ft_fy_data;
  // Member: ft_fz_data
  cdr << ros_message.ft_fz_data;
  // Member: ft_tx_data
  cdr << ros_message.ft_tx_data;
  // Member: ft_ty_data
  cdr << ros_message.ft_ty_data;
  // Member: ft_tz_data
  cdr << ros_message.ft_tz_data;
  // Member: ft_actstatus
  cdr << ros_message.ft_actstatus;
  // Member: emg
  cdr << ros_message.emg;
  // Member: robot_motion_done
  cdr << ros_message.robot_motion_done;
  // Member: grip_motion_done
  cdr << ros_message.grip_motion_done;
  // Member: exaxispos1
  cdr << ros_message.exaxispos1;
  // Member: exaxispos2
  cdr << ros_message.exaxispos2;
  // Member: exaxispos3
  cdr << ros_message.exaxispos3;
  // Member: exaxispos4
  cdr << ros_message.exaxispos4;
  // Member: check_sum
  cdr << ros_message.check_sum;
  // Member: start_return
  cdr << ros_message.start_return;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_frhal_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  frhal_msgs::msg::FRState & ros_message)
{
  // Member: prg_state
  cdr >> ros_message.prg_state;

  // Member: error_code
  cdr >> ros_message.error_code;

  // Member: robot_mode
  cdr >> ros_message.robot_mode;

  // Member: j1_cur_pos
  cdr >> ros_message.j1_cur_pos;

  // Member: j2_cur_pos
  cdr >> ros_message.j2_cur_pos;

  // Member: j3_cur_pos
  cdr >> ros_message.j3_cur_pos;

  // Member: j4_cur_pos
  cdr >> ros_message.j4_cur_pos;

  // Member: j5_cur_pos
  cdr >> ros_message.j5_cur_pos;

  // Member: j6_cur_pos
  cdr >> ros_message.j6_cur_pos;

  // Member: cart_x_cur_pos
  cdr >> ros_message.cart_x_cur_pos;

  // Member: cart_y_cur_pos
  cdr >> ros_message.cart_y_cur_pos;

  // Member: cart_z_cur_pos
  cdr >> ros_message.cart_z_cur_pos;

  // Member: cart_a_cur_pos
  cdr >> ros_message.cart_a_cur_pos;

  // Member: cart_b_cur_pos
  cdr >> ros_message.cart_b_cur_pos;

  // Member: cart_c_cur_pos
  cdr >> ros_message.cart_c_cur_pos;

  // Member: tool_num
  cdr >> ros_message.tool_num;

  // Member: work_num
  cdr >> ros_message.work_num;

  // Member: j1_cur_tor
  cdr >> ros_message.j1_cur_tor;

  // Member: j2_cur_tor
  cdr >> ros_message.j2_cur_tor;

  // Member: j3_cur_tor
  cdr >> ros_message.j3_cur_tor;

  // Member: j4_cur_tor
  cdr >> ros_message.j4_cur_tor;

  // Member: j5_cur_tor
  cdr >> ros_message.j5_cur_tor;

  // Member: j6_cur_tor
  cdr >> ros_message.j6_cur_tor;

  // Member: prg_name
  cdr >> ros_message.prg_name;

  // Member: prg_total_line
  cdr >> ros_message.prg_total_line;

  // Member: prg_cur_line
  cdr >> ros_message.prg_cur_line;

  // Member: dgt_output_h
  cdr >> ros_message.dgt_output_h;

  // Member: dgt_output_l
  cdr >> ros_message.dgt_output_l;

  // Member: tl_dgt_output_l
  cdr >> ros_message.tl_dgt_output_l;

  // Member: dgt_input_h
  cdr >> ros_message.dgt_input_h;

  // Member: dgt_input_l
  cdr >> ros_message.dgt_input_l;

  // Member: tl_dgt_input_l
  cdr >> ros_message.tl_dgt_input_l;

  // Member: ft_fx_data
  cdr >> ros_message.ft_fx_data;

  // Member: ft_fy_data
  cdr >> ros_message.ft_fy_data;

  // Member: ft_fz_data
  cdr >> ros_message.ft_fz_data;

  // Member: ft_tx_data
  cdr >> ros_message.ft_tx_data;

  // Member: ft_ty_data
  cdr >> ros_message.ft_ty_data;

  // Member: ft_tz_data
  cdr >> ros_message.ft_tz_data;

  // Member: ft_actstatus
  cdr >> ros_message.ft_actstatus;

  // Member: emg
  cdr >> ros_message.emg;

  // Member: robot_motion_done
  cdr >> ros_message.robot_motion_done;

  // Member: grip_motion_done
  cdr >> ros_message.grip_motion_done;

  // Member: exaxispos1
  cdr >> ros_message.exaxispos1;

  // Member: exaxispos2
  cdr >> ros_message.exaxispos2;

  // Member: exaxispos3
  cdr >> ros_message.exaxispos3;

  // Member: exaxispos4
  cdr >> ros_message.exaxispos4;

  // Member: check_sum
  cdr >> ros_message.check_sum;

  // Member: start_return
  cdr >> ros_message.start_return;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_frhal_msgs
get_serialized_size(
  const frhal_msgs::msg::FRState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: prg_state
  {
    size_t item_size = sizeof(ros_message.prg_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_code
  {
    size_t item_size = sizeof(ros_message.error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_mode
  {
    size_t item_size = sizeof(ros_message.robot_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j1_cur_pos
  {
    size_t item_size = sizeof(ros_message.j1_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j2_cur_pos
  {
    size_t item_size = sizeof(ros_message.j2_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j3_cur_pos
  {
    size_t item_size = sizeof(ros_message.j3_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j4_cur_pos
  {
    size_t item_size = sizeof(ros_message.j4_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j5_cur_pos
  {
    size_t item_size = sizeof(ros_message.j5_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j6_cur_pos
  {
    size_t item_size = sizeof(ros_message.j6_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_x_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_x_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_y_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_y_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_z_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_z_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_a_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_a_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_b_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_b_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_c_cur_pos
  {
    size_t item_size = sizeof(ros_message.cart_c_cur_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_num
  {
    size_t item_size = sizeof(ros_message.tool_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: work_num
  {
    size_t item_size = sizeof(ros_message.work_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j1_cur_tor
  {
    size_t item_size = sizeof(ros_message.j1_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j2_cur_tor
  {
    size_t item_size = sizeof(ros_message.j2_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j3_cur_tor
  {
    size_t item_size = sizeof(ros_message.j3_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j4_cur_tor
  {
    size_t item_size = sizeof(ros_message.j4_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j5_cur_tor
  {
    size_t item_size = sizeof(ros_message.j5_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j6_cur_tor
  {
    size_t item_size = sizeof(ros_message.j6_cur_tor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prg_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.prg_name.size() + 1);
  // Member: prg_total_line
  {
    size_t item_size = sizeof(ros_message.prg_total_line);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prg_cur_line
  {
    size_t item_size = sizeof(ros_message.prg_cur_line);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dgt_output_h
  {
    size_t item_size = sizeof(ros_message.dgt_output_h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dgt_output_l
  {
    size_t item_size = sizeof(ros_message.dgt_output_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tl_dgt_output_l
  {
    size_t item_size = sizeof(ros_message.tl_dgt_output_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dgt_input_h
  {
    size_t item_size = sizeof(ros_message.dgt_input_h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dgt_input_l
  {
    size_t item_size = sizeof(ros_message.dgt_input_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tl_dgt_input_l
  {
    size_t item_size = sizeof(ros_message.tl_dgt_input_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_fx_data
  {
    size_t item_size = sizeof(ros_message.ft_fx_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_fy_data
  {
    size_t item_size = sizeof(ros_message.ft_fy_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_fz_data
  {
    size_t item_size = sizeof(ros_message.ft_fz_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_tx_data
  {
    size_t item_size = sizeof(ros_message.ft_tx_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_ty_data
  {
    size_t item_size = sizeof(ros_message.ft_ty_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_tz_data
  {
    size_t item_size = sizeof(ros_message.ft_tz_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ft_actstatus
  {
    size_t item_size = sizeof(ros_message.ft_actstatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emg
  {
    size_t item_size = sizeof(ros_message.emg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_motion_done
  {
    size_t item_size = sizeof(ros_message.robot_motion_done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: grip_motion_done
  {
    size_t item_size = sizeof(ros_message.grip_motion_done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exaxispos1
  {
    size_t item_size = sizeof(ros_message.exaxispos1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exaxispos2
  {
    size_t item_size = sizeof(ros_message.exaxispos2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exaxispos3
  {
    size_t item_size = sizeof(ros_message.exaxispos3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exaxispos4
  {
    size_t item_size = sizeof(ros_message.exaxispos4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_sum
  {
    size_t item_size = sizeof(ros_message.check_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_return
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.start_return.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_frhal_msgs
max_serialized_size_FRState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: prg_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: robot_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: j1_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j2_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j3_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j4_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j5_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j6_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_x_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_y_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_z_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_a_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_b_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_c_cur_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tool_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: work_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: j1_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j2_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j3_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j4_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j5_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: j6_cur_tor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: prg_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: prg_total_line
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prg_cur_line
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dgt_output_h
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dgt_output_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tl_dgt_output_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dgt_input_h
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dgt_input_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tl_dgt_input_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ft_fx_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_fy_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_fz_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_tx_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_ty_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_tz_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ft_actstatus
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: robot_motion_done
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: grip_motion_done
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: exaxispos1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: exaxispos2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: exaxispos3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: exaxispos4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: check_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: start_return
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = frhal_msgs::msg::FRState;
    is_plain =
      (
      offsetof(DataType, start_return) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _FRState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const frhal_msgs::msg::FRState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FRState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<frhal_msgs::msg::FRState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FRState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const frhal_msgs::msg::FRState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FRState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FRState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FRState__callbacks = {
  "frhal_msgs::msg",
  "FRState",
  _FRState__cdr_serialize,
  _FRState__cdr_deserialize,
  _FRState__get_serialized_size,
  _FRState__max_serialized_size
};

static rosidl_message_type_support_t _FRState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FRState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace frhal_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_frhal_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<frhal_msgs::msg::FRState>()
{
  return &frhal_msgs::msg::typesupport_fastrtps_cpp::_FRState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, frhal_msgs, msg, FRState)() {
  return &frhal_msgs::msg::typesupport_fastrtps_cpp::_FRState__handle;
}

#ifdef __cplusplus
}
#endif
