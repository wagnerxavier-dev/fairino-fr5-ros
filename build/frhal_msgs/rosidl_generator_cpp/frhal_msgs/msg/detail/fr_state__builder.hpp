// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from frhal_msgs:msg/FRState.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__MSG__DETAIL__FR_STATE__BUILDER_HPP_
#define FRHAL_MSGS__MSG__DETAIL__FR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "frhal_msgs/msg/detail/fr_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace frhal_msgs
{

namespace msg
{

namespace builder
{

class Init_FRState_start_return
{
public:
  explicit Init_FRState_start_return(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  ::frhal_msgs::msg::FRState start_return(::frhal_msgs::msg::FRState::_start_return_type arg)
  {
    msg_.start_return = std::move(arg);
    return std::move(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_check_sum
{
public:
  explicit Init_FRState_check_sum(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_start_return check_sum(::frhal_msgs::msg::FRState::_check_sum_type arg)
  {
    msg_.check_sum = std::move(arg);
    return Init_FRState_start_return(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_exaxispos4
{
public:
  explicit Init_FRState_exaxispos4(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_check_sum exaxispos4(::frhal_msgs::msg::FRState::_exaxispos4_type arg)
  {
    msg_.exaxispos4 = std::move(arg);
    return Init_FRState_check_sum(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_exaxispos3
{
public:
  explicit Init_FRState_exaxispos3(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_exaxispos4 exaxispos3(::frhal_msgs::msg::FRState::_exaxispos3_type arg)
  {
    msg_.exaxispos3 = std::move(arg);
    return Init_FRState_exaxispos4(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_exaxispos2
{
public:
  explicit Init_FRState_exaxispos2(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_exaxispos3 exaxispos2(::frhal_msgs::msg::FRState::_exaxispos2_type arg)
  {
    msg_.exaxispos2 = std::move(arg);
    return Init_FRState_exaxispos3(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_exaxispos1
{
public:
  explicit Init_FRState_exaxispos1(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_exaxispos2 exaxispos1(::frhal_msgs::msg::FRState::_exaxispos1_type arg)
  {
    msg_.exaxispos1 = std::move(arg);
    return Init_FRState_exaxispos2(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_grip_motion_done
{
public:
  explicit Init_FRState_grip_motion_done(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_exaxispos1 grip_motion_done(::frhal_msgs::msg::FRState::_grip_motion_done_type arg)
  {
    msg_.grip_motion_done = std::move(arg);
    return Init_FRState_exaxispos1(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_robot_motion_done
{
public:
  explicit Init_FRState_robot_motion_done(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_grip_motion_done robot_motion_done(::frhal_msgs::msg::FRState::_robot_motion_done_type arg)
  {
    msg_.robot_motion_done = std::move(arg);
    return Init_FRState_grip_motion_done(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_emg
{
public:
  explicit Init_FRState_emg(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_robot_motion_done emg(::frhal_msgs::msg::FRState::_emg_type arg)
  {
    msg_.emg = std::move(arg);
    return Init_FRState_robot_motion_done(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_ft_actstatus
{
public:
  explicit Init_FRState_ft_actstatus(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_emg ft_actstatus(::frhal_msgs::msg::FRState::_ft_actstatus_type arg)
  {
    msg_.ft_actstatus = std::move(arg);
    return Init_FRState_emg(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_ft_tz_data
{
public:
  explicit Init_FRState_ft_tz_data(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_ft_actstatus ft_tz_data(::frhal_msgs::msg::FRState::_ft_tz_data_type arg)
  {
    msg_.ft_tz_data = std::move(arg);
    return Init_FRState_ft_actstatus(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_ft_ty_data
{
public:
  explicit Init_FRState_ft_ty_data(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_ft_tz_data ft_ty_data(::frhal_msgs::msg::FRState::_ft_ty_data_type arg)
  {
    msg_.ft_ty_data = std::move(arg);
    return Init_FRState_ft_tz_data(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_ft_tx_data
{
public:
  explicit Init_FRState_ft_tx_data(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_ft_ty_data ft_tx_data(::frhal_msgs::msg::FRState::_ft_tx_data_type arg)
  {
    msg_.ft_tx_data = std::move(arg);
    return Init_FRState_ft_ty_data(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_ft_fz_data
{
public:
  explicit Init_FRState_ft_fz_data(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_ft_tx_data ft_fz_data(::frhal_msgs::msg::FRState::_ft_fz_data_type arg)
  {
    msg_.ft_fz_data = std::move(arg);
    return Init_FRState_ft_tx_data(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_ft_fy_data
{
public:
  explicit Init_FRState_ft_fy_data(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_ft_fz_data ft_fy_data(::frhal_msgs::msg::FRState::_ft_fy_data_type arg)
  {
    msg_.ft_fy_data = std::move(arg);
    return Init_FRState_ft_fz_data(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_ft_fx_data
{
public:
  explicit Init_FRState_ft_fx_data(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_ft_fy_data ft_fx_data(::frhal_msgs::msg::FRState::_ft_fx_data_type arg)
  {
    msg_.ft_fx_data = std::move(arg);
    return Init_FRState_ft_fy_data(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_tl_dgt_input_l
{
public:
  explicit Init_FRState_tl_dgt_input_l(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_ft_fx_data tl_dgt_input_l(::frhal_msgs::msg::FRState::_tl_dgt_input_l_type arg)
  {
    msg_.tl_dgt_input_l = std::move(arg);
    return Init_FRState_ft_fx_data(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_dgt_input_l
{
public:
  explicit Init_FRState_dgt_input_l(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_tl_dgt_input_l dgt_input_l(::frhal_msgs::msg::FRState::_dgt_input_l_type arg)
  {
    msg_.dgt_input_l = std::move(arg);
    return Init_FRState_tl_dgt_input_l(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_dgt_input_h
{
public:
  explicit Init_FRState_dgt_input_h(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_dgt_input_l dgt_input_h(::frhal_msgs::msg::FRState::_dgt_input_h_type arg)
  {
    msg_.dgt_input_h = std::move(arg);
    return Init_FRState_dgt_input_l(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_tl_dgt_output_l
{
public:
  explicit Init_FRState_tl_dgt_output_l(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_dgt_input_h tl_dgt_output_l(::frhal_msgs::msg::FRState::_tl_dgt_output_l_type arg)
  {
    msg_.tl_dgt_output_l = std::move(arg);
    return Init_FRState_dgt_input_h(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_dgt_output_l
{
public:
  explicit Init_FRState_dgt_output_l(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_tl_dgt_output_l dgt_output_l(::frhal_msgs::msg::FRState::_dgt_output_l_type arg)
  {
    msg_.dgt_output_l = std::move(arg);
    return Init_FRState_tl_dgt_output_l(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_dgt_output_h
{
public:
  explicit Init_FRState_dgt_output_h(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_dgt_output_l dgt_output_h(::frhal_msgs::msg::FRState::_dgt_output_h_type arg)
  {
    msg_.dgt_output_h = std::move(arg);
    return Init_FRState_dgt_output_l(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_prg_cur_line
{
public:
  explicit Init_FRState_prg_cur_line(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_dgt_output_h prg_cur_line(::frhal_msgs::msg::FRState::_prg_cur_line_type arg)
  {
    msg_.prg_cur_line = std::move(arg);
    return Init_FRState_dgt_output_h(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_prg_total_line
{
public:
  explicit Init_FRState_prg_total_line(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_prg_cur_line prg_total_line(::frhal_msgs::msg::FRState::_prg_total_line_type arg)
  {
    msg_.prg_total_line = std::move(arg);
    return Init_FRState_prg_cur_line(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_prg_name
{
public:
  explicit Init_FRState_prg_name(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_prg_total_line prg_name(::frhal_msgs::msg::FRState::_prg_name_type arg)
  {
    msg_.prg_name = std::move(arg);
    return Init_FRState_prg_total_line(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j6_cur_tor
{
public:
  explicit Init_FRState_j6_cur_tor(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_prg_name j6_cur_tor(::frhal_msgs::msg::FRState::_j6_cur_tor_type arg)
  {
    msg_.j6_cur_tor = std::move(arg);
    return Init_FRState_prg_name(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j5_cur_tor
{
public:
  explicit Init_FRState_j5_cur_tor(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j6_cur_tor j5_cur_tor(::frhal_msgs::msg::FRState::_j5_cur_tor_type arg)
  {
    msg_.j5_cur_tor = std::move(arg);
    return Init_FRState_j6_cur_tor(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j4_cur_tor
{
public:
  explicit Init_FRState_j4_cur_tor(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j5_cur_tor j4_cur_tor(::frhal_msgs::msg::FRState::_j4_cur_tor_type arg)
  {
    msg_.j4_cur_tor = std::move(arg);
    return Init_FRState_j5_cur_tor(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j3_cur_tor
{
public:
  explicit Init_FRState_j3_cur_tor(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j4_cur_tor j3_cur_tor(::frhal_msgs::msg::FRState::_j3_cur_tor_type arg)
  {
    msg_.j3_cur_tor = std::move(arg);
    return Init_FRState_j4_cur_tor(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j2_cur_tor
{
public:
  explicit Init_FRState_j2_cur_tor(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j3_cur_tor j2_cur_tor(::frhal_msgs::msg::FRState::_j2_cur_tor_type arg)
  {
    msg_.j2_cur_tor = std::move(arg);
    return Init_FRState_j3_cur_tor(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j1_cur_tor
{
public:
  explicit Init_FRState_j1_cur_tor(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j2_cur_tor j1_cur_tor(::frhal_msgs::msg::FRState::_j1_cur_tor_type arg)
  {
    msg_.j1_cur_tor = std::move(arg);
    return Init_FRState_j2_cur_tor(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_work_num
{
public:
  explicit Init_FRState_work_num(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j1_cur_tor work_num(::frhal_msgs::msg::FRState::_work_num_type arg)
  {
    msg_.work_num = std::move(arg);
    return Init_FRState_j1_cur_tor(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_tool_num
{
public:
  explicit Init_FRState_tool_num(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_work_num tool_num(::frhal_msgs::msg::FRState::_tool_num_type arg)
  {
    msg_.tool_num = std::move(arg);
    return Init_FRState_work_num(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_cart_c_cur_pos
{
public:
  explicit Init_FRState_cart_c_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_tool_num cart_c_cur_pos(::frhal_msgs::msg::FRState::_cart_c_cur_pos_type arg)
  {
    msg_.cart_c_cur_pos = std::move(arg);
    return Init_FRState_tool_num(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_cart_b_cur_pos
{
public:
  explicit Init_FRState_cart_b_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_cart_c_cur_pos cart_b_cur_pos(::frhal_msgs::msg::FRState::_cart_b_cur_pos_type arg)
  {
    msg_.cart_b_cur_pos = std::move(arg);
    return Init_FRState_cart_c_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_cart_a_cur_pos
{
public:
  explicit Init_FRState_cart_a_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_cart_b_cur_pos cart_a_cur_pos(::frhal_msgs::msg::FRState::_cart_a_cur_pos_type arg)
  {
    msg_.cart_a_cur_pos = std::move(arg);
    return Init_FRState_cart_b_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_cart_z_cur_pos
{
public:
  explicit Init_FRState_cart_z_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_cart_a_cur_pos cart_z_cur_pos(::frhal_msgs::msg::FRState::_cart_z_cur_pos_type arg)
  {
    msg_.cart_z_cur_pos = std::move(arg);
    return Init_FRState_cart_a_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_cart_y_cur_pos
{
public:
  explicit Init_FRState_cart_y_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_cart_z_cur_pos cart_y_cur_pos(::frhal_msgs::msg::FRState::_cart_y_cur_pos_type arg)
  {
    msg_.cart_y_cur_pos = std::move(arg);
    return Init_FRState_cart_z_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_cart_x_cur_pos
{
public:
  explicit Init_FRState_cart_x_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_cart_y_cur_pos cart_x_cur_pos(::frhal_msgs::msg::FRState::_cart_x_cur_pos_type arg)
  {
    msg_.cart_x_cur_pos = std::move(arg);
    return Init_FRState_cart_y_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j6_cur_pos
{
public:
  explicit Init_FRState_j6_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_cart_x_cur_pos j6_cur_pos(::frhal_msgs::msg::FRState::_j6_cur_pos_type arg)
  {
    msg_.j6_cur_pos = std::move(arg);
    return Init_FRState_cart_x_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j5_cur_pos
{
public:
  explicit Init_FRState_j5_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j6_cur_pos j5_cur_pos(::frhal_msgs::msg::FRState::_j5_cur_pos_type arg)
  {
    msg_.j5_cur_pos = std::move(arg);
    return Init_FRState_j6_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j4_cur_pos
{
public:
  explicit Init_FRState_j4_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j5_cur_pos j4_cur_pos(::frhal_msgs::msg::FRState::_j4_cur_pos_type arg)
  {
    msg_.j4_cur_pos = std::move(arg);
    return Init_FRState_j5_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j3_cur_pos
{
public:
  explicit Init_FRState_j3_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j4_cur_pos j3_cur_pos(::frhal_msgs::msg::FRState::_j3_cur_pos_type arg)
  {
    msg_.j3_cur_pos = std::move(arg);
    return Init_FRState_j4_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j2_cur_pos
{
public:
  explicit Init_FRState_j2_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j3_cur_pos j2_cur_pos(::frhal_msgs::msg::FRState::_j2_cur_pos_type arg)
  {
    msg_.j2_cur_pos = std::move(arg);
    return Init_FRState_j3_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_j1_cur_pos
{
public:
  explicit Init_FRState_j1_cur_pos(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j2_cur_pos j1_cur_pos(::frhal_msgs::msg::FRState::_j1_cur_pos_type arg)
  {
    msg_.j1_cur_pos = std::move(arg);
    return Init_FRState_j2_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_robot_mode
{
public:
  explicit Init_FRState_robot_mode(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_j1_cur_pos robot_mode(::frhal_msgs::msg::FRState::_robot_mode_type arg)
  {
    msg_.robot_mode = std::move(arg);
    return Init_FRState_j1_cur_pos(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_error_code
{
public:
  explicit Init_FRState_error_code(::frhal_msgs::msg::FRState & msg)
  : msg_(msg)
  {}
  Init_FRState_robot_mode error_code(::frhal_msgs::msg::FRState::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_FRState_robot_mode(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

class Init_FRState_prg_state
{
public:
  Init_FRState_prg_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FRState_error_code prg_state(::frhal_msgs::msg::FRState::_prg_state_type arg)
  {
    msg_.prg_state = std::move(arg);
    return Init_FRState_error_code(msg_);
  }

private:
  ::frhal_msgs::msg::FRState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::frhal_msgs::msg::FRState>()
{
  return frhal_msgs::msg::builder::Init_FRState_prg_state();
}

}  // namespace frhal_msgs

#endif  // FRHAL_MSGS__MSG__DETAIL__FR_STATE__BUILDER_HPP_
