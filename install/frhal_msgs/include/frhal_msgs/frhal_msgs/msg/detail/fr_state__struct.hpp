// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from frhal_msgs:msg/FRState.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__MSG__DETAIL__FR_STATE__STRUCT_HPP_
#define FRHAL_MSGS__MSG__DETAIL__FR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__frhal_msgs__msg__FRState __attribute__((deprecated))
#else
# define DEPRECATED__frhal_msgs__msg__FRState __declspec(deprecated)
#endif

namespace frhal_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FRState_
{
  using Type = FRState_<ContainerAllocator>;

  explicit FRState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prg_state = 0;
      this->error_code = 0;
      this->robot_mode = 0;
      this->j1_cur_pos = 0.0;
      this->j2_cur_pos = 0.0;
      this->j3_cur_pos = 0.0;
      this->j4_cur_pos = 0.0;
      this->j5_cur_pos = 0.0;
      this->j6_cur_pos = 0.0;
      this->cart_x_cur_pos = 0.0;
      this->cart_y_cur_pos = 0.0;
      this->cart_z_cur_pos = 0.0;
      this->cart_a_cur_pos = 0.0;
      this->cart_b_cur_pos = 0.0;
      this->cart_c_cur_pos = 0.0;
      this->tool_num = 0l;
      this->work_num = 0l;
      this->j1_cur_tor = 0.0;
      this->j2_cur_tor = 0.0;
      this->j3_cur_tor = 0.0;
      this->j4_cur_tor = 0.0;
      this->j5_cur_tor = 0.0;
      this->j6_cur_tor = 0.0;
      this->prg_name = "";
      this->prg_total_line = 0;
      this->prg_cur_line = 0;
      this->dgt_output_h = 0;
      this->dgt_output_l = 0;
      this->tl_dgt_output_l = 0;
      this->dgt_input_h = 0;
      this->dgt_input_l = 0;
      this->tl_dgt_input_l = 0;
      this->ft_fx_data = 0.0;
      this->ft_fy_data = 0.0;
      this->ft_fz_data = 0.0;
      this->ft_tx_data = 0.0;
      this->ft_ty_data = 0.0;
      this->ft_tz_data = 0.0;
      this->ft_actstatus = 0;
      this->emg = 0;
      this->robot_motion_done = 0l;
      this->grip_motion_done = 0;
      this->exaxispos1 = 0.0;
      this->exaxispos2 = 0.0;
      this->exaxispos3 = 0.0;
      this->exaxispos4 = 0.0;
      this->check_sum = 0;
      this->start_return = "";
    }
  }

  explicit FRState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prg_name(_alloc),
    start_return(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prg_state = 0;
      this->error_code = 0;
      this->robot_mode = 0;
      this->j1_cur_pos = 0.0;
      this->j2_cur_pos = 0.0;
      this->j3_cur_pos = 0.0;
      this->j4_cur_pos = 0.0;
      this->j5_cur_pos = 0.0;
      this->j6_cur_pos = 0.0;
      this->cart_x_cur_pos = 0.0;
      this->cart_y_cur_pos = 0.0;
      this->cart_z_cur_pos = 0.0;
      this->cart_a_cur_pos = 0.0;
      this->cart_b_cur_pos = 0.0;
      this->cart_c_cur_pos = 0.0;
      this->tool_num = 0l;
      this->work_num = 0l;
      this->j1_cur_tor = 0.0;
      this->j2_cur_tor = 0.0;
      this->j3_cur_tor = 0.0;
      this->j4_cur_tor = 0.0;
      this->j5_cur_tor = 0.0;
      this->j6_cur_tor = 0.0;
      this->prg_name = "";
      this->prg_total_line = 0;
      this->prg_cur_line = 0;
      this->dgt_output_h = 0;
      this->dgt_output_l = 0;
      this->tl_dgt_output_l = 0;
      this->dgt_input_h = 0;
      this->dgt_input_l = 0;
      this->tl_dgt_input_l = 0;
      this->ft_fx_data = 0.0;
      this->ft_fy_data = 0.0;
      this->ft_fz_data = 0.0;
      this->ft_tx_data = 0.0;
      this->ft_ty_data = 0.0;
      this->ft_tz_data = 0.0;
      this->ft_actstatus = 0;
      this->emg = 0;
      this->robot_motion_done = 0l;
      this->grip_motion_done = 0;
      this->exaxispos1 = 0.0;
      this->exaxispos2 = 0.0;
      this->exaxispos3 = 0.0;
      this->exaxispos4 = 0.0;
      this->check_sum = 0;
      this->start_return = "";
    }
  }

  // field types and members
  using _prg_state_type =
    uint8_t;
  _prg_state_type prg_state;
  using _error_code_type =
    uint8_t;
  _error_code_type error_code;
  using _robot_mode_type =
    uint8_t;
  _robot_mode_type robot_mode;
  using _j1_cur_pos_type =
    double;
  _j1_cur_pos_type j1_cur_pos;
  using _j2_cur_pos_type =
    double;
  _j2_cur_pos_type j2_cur_pos;
  using _j3_cur_pos_type =
    double;
  _j3_cur_pos_type j3_cur_pos;
  using _j4_cur_pos_type =
    double;
  _j4_cur_pos_type j4_cur_pos;
  using _j5_cur_pos_type =
    double;
  _j5_cur_pos_type j5_cur_pos;
  using _j6_cur_pos_type =
    double;
  _j6_cur_pos_type j6_cur_pos;
  using _cart_x_cur_pos_type =
    double;
  _cart_x_cur_pos_type cart_x_cur_pos;
  using _cart_y_cur_pos_type =
    double;
  _cart_y_cur_pos_type cart_y_cur_pos;
  using _cart_z_cur_pos_type =
    double;
  _cart_z_cur_pos_type cart_z_cur_pos;
  using _cart_a_cur_pos_type =
    double;
  _cart_a_cur_pos_type cart_a_cur_pos;
  using _cart_b_cur_pos_type =
    double;
  _cart_b_cur_pos_type cart_b_cur_pos;
  using _cart_c_cur_pos_type =
    double;
  _cart_c_cur_pos_type cart_c_cur_pos;
  using _tool_num_type =
    int32_t;
  _tool_num_type tool_num;
  using _work_num_type =
    int32_t;
  _work_num_type work_num;
  using _j1_cur_tor_type =
    double;
  _j1_cur_tor_type j1_cur_tor;
  using _j2_cur_tor_type =
    double;
  _j2_cur_tor_type j2_cur_tor;
  using _j3_cur_tor_type =
    double;
  _j3_cur_tor_type j3_cur_tor;
  using _j4_cur_tor_type =
    double;
  _j4_cur_tor_type j4_cur_tor;
  using _j5_cur_tor_type =
    double;
  _j5_cur_tor_type j5_cur_tor;
  using _j6_cur_tor_type =
    double;
  _j6_cur_tor_type j6_cur_tor;
  using _prg_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _prg_name_type prg_name;
  using _prg_total_line_type =
    uint8_t;
  _prg_total_line_type prg_total_line;
  using _prg_cur_line_type =
    uint8_t;
  _prg_cur_line_type prg_cur_line;
  using _dgt_output_h_type =
    uint8_t;
  _dgt_output_h_type dgt_output_h;
  using _dgt_output_l_type =
    uint8_t;
  _dgt_output_l_type dgt_output_l;
  using _tl_dgt_output_l_type =
    uint8_t;
  _tl_dgt_output_l_type tl_dgt_output_l;
  using _dgt_input_h_type =
    uint8_t;
  _dgt_input_h_type dgt_input_h;
  using _dgt_input_l_type =
    uint8_t;
  _dgt_input_l_type dgt_input_l;
  using _tl_dgt_input_l_type =
    uint8_t;
  _tl_dgt_input_l_type tl_dgt_input_l;
  using _ft_fx_data_type =
    double;
  _ft_fx_data_type ft_fx_data;
  using _ft_fy_data_type =
    double;
  _ft_fy_data_type ft_fy_data;
  using _ft_fz_data_type =
    double;
  _ft_fz_data_type ft_fz_data;
  using _ft_tx_data_type =
    double;
  _ft_tx_data_type ft_tx_data;
  using _ft_ty_data_type =
    double;
  _ft_ty_data_type ft_ty_data;
  using _ft_tz_data_type =
    double;
  _ft_tz_data_type ft_tz_data;
  using _ft_actstatus_type =
    uint8_t;
  _ft_actstatus_type ft_actstatus;
  using _emg_type =
    uint8_t;
  _emg_type emg;
  using _robot_motion_done_type =
    int32_t;
  _robot_motion_done_type robot_motion_done;
  using _grip_motion_done_type =
    uint8_t;
  _grip_motion_done_type grip_motion_done;
  using _exaxispos1_type =
    double;
  _exaxispos1_type exaxispos1;
  using _exaxispos2_type =
    double;
  _exaxispos2_type exaxispos2;
  using _exaxispos3_type =
    double;
  _exaxispos3_type exaxispos3;
  using _exaxispos4_type =
    double;
  _exaxispos4_type exaxispos4;
  using _check_sum_type =
    uint8_t;
  _check_sum_type check_sum;
  using _start_return_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_return_type start_return;

  // setters for named parameter idiom
  Type & set__prg_state(
    const uint8_t & _arg)
  {
    this->prg_state = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__robot_mode(
    const uint8_t & _arg)
  {
    this->robot_mode = _arg;
    return *this;
  }
  Type & set__j1_cur_pos(
    const double & _arg)
  {
    this->j1_cur_pos = _arg;
    return *this;
  }
  Type & set__j2_cur_pos(
    const double & _arg)
  {
    this->j2_cur_pos = _arg;
    return *this;
  }
  Type & set__j3_cur_pos(
    const double & _arg)
  {
    this->j3_cur_pos = _arg;
    return *this;
  }
  Type & set__j4_cur_pos(
    const double & _arg)
  {
    this->j4_cur_pos = _arg;
    return *this;
  }
  Type & set__j5_cur_pos(
    const double & _arg)
  {
    this->j5_cur_pos = _arg;
    return *this;
  }
  Type & set__j6_cur_pos(
    const double & _arg)
  {
    this->j6_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_x_cur_pos(
    const double & _arg)
  {
    this->cart_x_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_y_cur_pos(
    const double & _arg)
  {
    this->cart_y_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_z_cur_pos(
    const double & _arg)
  {
    this->cart_z_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_a_cur_pos(
    const double & _arg)
  {
    this->cart_a_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_b_cur_pos(
    const double & _arg)
  {
    this->cart_b_cur_pos = _arg;
    return *this;
  }
  Type & set__cart_c_cur_pos(
    const double & _arg)
  {
    this->cart_c_cur_pos = _arg;
    return *this;
  }
  Type & set__tool_num(
    const int32_t & _arg)
  {
    this->tool_num = _arg;
    return *this;
  }
  Type & set__work_num(
    const int32_t & _arg)
  {
    this->work_num = _arg;
    return *this;
  }
  Type & set__j1_cur_tor(
    const double & _arg)
  {
    this->j1_cur_tor = _arg;
    return *this;
  }
  Type & set__j2_cur_tor(
    const double & _arg)
  {
    this->j2_cur_tor = _arg;
    return *this;
  }
  Type & set__j3_cur_tor(
    const double & _arg)
  {
    this->j3_cur_tor = _arg;
    return *this;
  }
  Type & set__j4_cur_tor(
    const double & _arg)
  {
    this->j4_cur_tor = _arg;
    return *this;
  }
  Type & set__j5_cur_tor(
    const double & _arg)
  {
    this->j5_cur_tor = _arg;
    return *this;
  }
  Type & set__j6_cur_tor(
    const double & _arg)
  {
    this->j6_cur_tor = _arg;
    return *this;
  }
  Type & set__prg_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->prg_name = _arg;
    return *this;
  }
  Type & set__prg_total_line(
    const uint8_t & _arg)
  {
    this->prg_total_line = _arg;
    return *this;
  }
  Type & set__prg_cur_line(
    const uint8_t & _arg)
  {
    this->prg_cur_line = _arg;
    return *this;
  }
  Type & set__dgt_output_h(
    const uint8_t & _arg)
  {
    this->dgt_output_h = _arg;
    return *this;
  }
  Type & set__dgt_output_l(
    const uint8_t & _arg)
  {
    this->dgt_output_l = _arg;
    return *this;
  }
  Type & set__tl_dgt_output_l(
    const uint8_t & _arg)
  {
    this->tl_dgt_output_l = _arg;
    return *this;
  }
  Type & set__dgt_input_h(
    const uint8_t & _arg)
  {
    this->dgt_input_h = _arg;
    return *this;
  }
  Type & set__dgt_input_l(
    const uint8_t & _arg)
  {
    this->dgt_input_l = _arg;
    return *this;
  }
  Type & set__tl_dgt_input_l(
    const uint8_t & _arg)
  {
    this->tl_dgt_input_l = _arg;
    return *this;
  }
  Type & set__ft_fx_data(
    const double & _arg)
  {
    this->ft_fx_data = _arg;
    return *this;
  }
  Type & set__ft_fy_data(
    const double & _arg)
  {
    this->ft_fy_data = _arg;
    return *this;
  }
  Type & set__ft_fz_data(
    const double & _arg)
  {
    this->ft_fz_data = _arg;
    return *this;
  }
  Type & set__ft_tx_data(
    const double & _arg)
  {
    this->ft_tx_data = _arg;
    return *this;
  }
  Type & set__ft_ty_data(
    const double & _arg)
  {
    this->ft_ty_data = _arg;
    return *this;
  }
  Type & set__ft_tz_data(
    const double & _arg)
  {
    this->ft_tz_data = _arg;
    return *this;
  }
  Type & set__ft_actstatus(
    const uint8_t & _arg)
  {
    this->ft_actstatus = _arg;
    return *this;
  }
  Type & set__emg(
    const uint8_t & _arg)
  {
    this->emg = _arg;
    return *this;
  }
  Type & set__robot_motion_done(
    const int32_t & _arg)
  {
    this->robot_motion_done = _arg;
    return *this;
  }
  Type & set__grip_motion_done(
    const uint8_t & _arg)
  {
    this->grip_motion_done = _arg;
    return *this;
  }
  Type & set__exaxispos1(
    const double & _arg)
  {
    this->exaxispos1 = _arg;
    return *this;
  }
  Type & set__exaxispos2(
    const double & _arg)
  {
    this->exaxispos2 = _arg;
    return *this;
  }
  Type & set__exaxispos3(
    const double & _arg)
  {
    this->exaxispos3 = _arg;
    return *this;
  }
  Type & set__exaxispos4(
    const double & _arg)
  {
    this->exaxispos4 = _arg;
    return *this;
  }
  Type & set__check_sum(
    const uint8_t & _arg)
  {
    this->check_sum = _arg;
    return *this;
  }
  Type & set__start_return(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start_return = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    frhal_msgs::msg::FRState_<ContainerAllocator> *;
  using ConstRawPtr =
    const frhal_msgs::msg::FRState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<frhal_msgs::msg::FRState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<frhal_msgs::msg::FRState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::msg::FRState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::msg::FRState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::msg::FRState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::msg::FRState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<frhal_msgs::msg::FRState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<frhal_msgs::msg::FRState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__frhal_msgs__msg__FRState
    std::shared_ptr<frhal_msgs::msg::FRState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__frhal_msgs__msg__FRState
    std::shared_ptr<frhal_msgs::msg::FRState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FRState_ & other) const
  {
    if (this->prg_state != other.prg_state) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->robot_mode != other.robot_mode) {
      return false;
    }
    if (this->j1_cur_pos != other.j1_cur_pos) {
      return false;
    }
    if (this->j2_cur_pos != other.j2_cur_pos) {
      return false;
    }
    if (this->j3_cur_pos != other.j3_cur_pos) {
      return false;
    }
    if (this->j4_cur_pos != other.j4_cur_pos) {
      return false;
    }
    if (this->j5_cur_pos != other.j5_cur_pos) {
      return false;
    }
    if (this->j6_cur_pos != other.j6_cur_pos) {
      return false;
    }
    if (this->cart_x_cur_pos != other.cart_x_cur_pos) {
      return false;
    }
    if (this->cart_y_cur_pos != other.cart_y_cur_pos) {
      return false;
    }
    if (this->cart_z_cur_pos != other.cart_z_cur_pos) {
      return false;
    }
    if (this->cart_a_cur_pos != other.cart_a_cur_pos) {
      return false;
    }
    if (this->cart_b_cur_pos != other.cart_b_cur_pos) {
      return false;
    }
    if (this->cart_c_cur_pos != other.cart_c_cur_pos) {
      return false;
    }
    if (this->tool_num != other.tool_num) {
      return false;
    }
    if (this->work_num != other.work_num) {
      return false;
    }
    if (this->j1_cur_tor != other.j1_cur_tor) {
      return false;
    }
    if (this->j2_cur_tor != other.j2_cur_tor) {
      return false;
    }
    if (this->j3_cur_tor != other.j3_cur_tor) {
      return false;
    }
    if (this->j4_cur_tor != other.j4_cur_tor) {
      return false;
    }
    if (this->j5_cur_tor != other.j5_cur_tor) {
      return false;
    }
    if (this->j6_cur_tor != other.j6_cur_tor) {
      return false;
    }
    if (this->prg_name != other.prg_name) {
      return false;
    }
    if (this->prg_total_line != other.prg_total_line) {
      return false;
    }
    if (this->prg_cur_line != other.prg_cur_line) {
      return false;
    }
    if (this->dgt_output_h != other.dgt_output_h) {
      return false;
    }
    if (this->dgt_output_l != other.dgt_output_l) {
      return false;
    }
    if (this->tl_dgt_output_l != other.tl_dgt_output_l) {
      return false;
    }
    if (this->dgt_input_h != other.dgt_input_h) {
      return false;
    }
    if (this->dgt_input_l != other.dgt_input_l) {
      return false;
    }
    if (this->tl_dgt_input_l != other.tl_dgt_input_l) {
      return false;
    }
    if (this->ft_fx_data != other.ft_fx_data) {
      return false;
    }
    if (this->ft_fy_data != other.ft_fy_data) {
      return false;
    }
    if (this->ft_fz_data != other.ft_fz_data) {
      return false;
    }
    if (this->ft_tx_data != other.ft_tx_data) {
      return false;
    }
    if (this->ft_ty_data != other.ft_ty_data) {
      return false;
    }
    if (this->ft_tz_data != other.ft_tz_data) {
      return false;
    }
    if (this->ft_actstatus != other.ft_actstatus) {
      return false;
    }
    if (this->emg != other.emg) {
      return false;
    }
    if (this->robot_motion_done != other.robot_motion_done) {
      return false;
    }
    if (this->grip_motion_done != other.grip_motion_done) {
      return false;
    }
    if (this->exaxispos1 != other.exaxispos1) {
      return false;
    }
    if (this->exaxispos2 != other.exaxispos2) {
      return false;
    }
    if (this->exaxispos3 != other.exaxispos3) {
      return false;
    }
    if (this->exaxispos4 != other.exaxispos4) {
      return false;
    }
    if (this->check_sum != other.check_sum) {
      return false;
    }
    if (this->start_return != other.start_return) {
      return false;
    }
    return true;
  }
  bool operator!=(const FRState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FRState_

// alias to use template instance with default allocator
using FRState =
  frhal_msgs::msg::FRState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace frhal_msgs

#endif  // FRHAL_MSGS__MSG__DETAIL__FR_STATE__STRUCT_HPP_
