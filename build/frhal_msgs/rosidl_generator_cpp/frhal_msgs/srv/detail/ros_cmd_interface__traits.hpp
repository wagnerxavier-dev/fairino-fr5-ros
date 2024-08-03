// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from frhal_msgs:srv/ROSCmdInterface.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__TRAITS_HPP_
#define FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "frhal_msgs/srv/detail/ros_cmd_interface__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace frhal_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ROSCmdInterface_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd_str
  {
    out << "cmd_str: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_str, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ROSCmdInterface_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_str
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_str: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_str, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ROSCmdInterface_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace frhal_msgs

namespace rosidl_generator_traits
{

[[deprecated("use frhal_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const frhal_msgs::srv::ROSCmdInterface_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  frhal_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use frhal_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const frhal_msgs::srv::ROSCmdInterface_Request & msg)
{
  return frhal_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<frhal_msgs::srv::ROSCmdInterface_Request>()
{
  return "frhal_msgs::srv::ROSCmdInterface_Request";
}

template<>
inline const char * name<frhal_msgs::srv::ROSCmdInterface_Request>()
{
  return "frhal_msgs/srv/ROSCmdInterface_Request";
}

template<>
struct has_fixed_size<frhal_msgs::srv::ROSCmdInterface_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<frhal_msgs::srv::ROSCmdInterface_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<frhal_msgs::srv::ROSCmdInterface_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace frhal_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ROSCmdInterface_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd_res
  {
    out << "cmd_res: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_res, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ROSCmdInterface_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_res: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_res, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ROSCmdInterface_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace frhal_msgs

namespace rosidl_generator_traits
{

[[deprecated("use frhal_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const frhal_msgs::srv::ROSCmdInterface_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  frhal_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use frhal_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const frhal_msgs::srv::ROSCmdInterface_Response & msg)
{
  return frhal_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<frhal_msgs::srv::ROSCmdInterface_Response>()
{
  return "frhal_msgs::srv::ROSCmdInterface_Response";
}

template<>
inline const char * name<frhal_msgs::srv::ROSCmdInterface_Response>()
{
  return "frhal_msgs/srv/ROSCmdInterface_Response";
}

template<>
struct has_fixed_size<frhal_msgs::srv::ROSCmdInterface_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<frhal_msgs::srv::ROSCmdInterface_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<frhal_msgs::srv::ROSCmdInterface_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<frhal_msgs::srv::ROSCmdInterface>()
{
  return "frhal_msgs::srv::ROSCmdInterface";
}

template<>
inline const char * name<frhal_msgs::srv::ROSCmdInterface>()
{
  return "frhal_msgs/srv/ROSCmdInterface";
}

template<>
struct has_fixed_size<frhal_msgs::srv::ROSCmdInterface>
  : std::integral_constant<
    bool,
    has_fixed_size<frhal_msgs::srv::ROSCmdInterface_Request>::value &&
    has_fixed_size<frhal_msgs::srv::ROSCmdInterface_Response>::value
  >
{
};

template<>
struct has_bounded_size<frhal_msgs::srv::ROSCmdInterface>
  : std::integral_constant<
    bool,
    has_bounded_size<frhal_msgs::srv::ROSCmdInterface_Request>::value &&
    has_bounded_size<frhal_msgs::srv::ROSCmdInterface_Response>::value
  >
{
};

template<>
struct is_service<frhal_msgs::srv::ROSCmdInterface>
  : std::true_type
{
};

template<>
struct is_service_request<frhal_msgs::srv::ROSCmdInterface_Request>
  : std::true_type
{
};

template<>
struct is_service_response<frhal_msgs::srv::ROSCmdInterface_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__TRAITS_HPP_
