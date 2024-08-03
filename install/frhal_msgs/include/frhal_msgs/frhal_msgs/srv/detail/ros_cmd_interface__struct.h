// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from frhal_msgs:srv/ROSCmdInterface.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__STRUCT_H_
#define FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd_str'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ROSCmdInterface in the package frhal_msgs.
typedef struct frhal_msgs__srv__ROSCmdInterface_Request
{
  /// ros用户输入的字符串指令，比如movej(p1,100)
  rosidl_runtime_c__String cmd_str;
} frhal_msgs__srv__ROSCmdInterface_Request;

// Struct for a sequence of frhal_msgs__srv__ROSCmdInterface_Request.
typedef struct frhal_msgs__srv__ROSCmdInterface_Request__Sequence
{
  frhal_msgs__srv__ROSCmdInterface_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} frhal_msgs__srv__ROSCmdInterface_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'cmd_res'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ROSCmdInterface in the package frhal_msgs.
typedef struct frhal_msgs__srv__ROSCmdInterface_Response
{
  /// 创建结果反馈，0-成功，-1-失败
  rosidl_runtime_c__String cmd_res;
} frhal_msgs__srv__ROSCmdInterface_Response;

// Struct for a sequence of frhal_msgs__srv__ROSCmdInterface_Response.
typedef struct frhal_msgs__srv__ROSCmdInterface_Response__Sequence
{
  frhal_msgs__srv__ROSCmdInterface_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} frhal_msgs__srv__ROSCmdInterface_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__STRUCT_H_
