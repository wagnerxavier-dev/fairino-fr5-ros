// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from frhal_msgs:srv/ROSCmdInterface.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__FUNCTIONS_H_
#define FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "frhal_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "frhal_msgs/srv/detail/ros_cmd_interface__struct.h"

/// Initialize srv/ROSCmdInterface message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * frhal_msgs__srv__ROSCmdInterface_Request
 * )) before or use
 * frhal_msgs__srv__ROSCmdInterface_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Request__init(frhal_msgs__srv__ROSCmdInterface_Request * msg);

/// Finalize srv/ROSCmdInterface message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__srv__ROSCmdInterface_Request__fini(frhal_msgs__srv__ROSCmdInterface_Request * msg);

/// Create srv/ROSCmdInterface message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * frhal_msgs__srv__ROSCmdInterface_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
frhal_msgs__srv__ROSCmdInterface_Request *
frhal_msgs__srv__ROSCmdInterface_Request__create();

/// Destroy srv/ROSCmdInterface message.
/**
 * It calls
 * frhal_msgs__srv__ROSCmdInterface_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__srv__ROSCmdInterface_Request__destroy(frhal_msgs__srv__ROSCmdInterface_Request * msg);

/// Check for srv/ROSCmdInterface message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Request__are_equal(const frhal_msgs__srv__ROSCmdInterface_Request * lhs, const frhal_msgs__srv__ROSCmdInterface_Request * rhs);

/// Copy a srv/ROSCmdInterface message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Request__copy(
  const frhal_msgs__srv__ROSCmdInterface_Request * input,
  frhal_msgs__srv__ROSCmdInterface_Request * output);

/// Initialize array of srv/ROSCmdInterface messages.
/**
 * It allocates the memory for the number of elements and calls
 * frhal_msgs__srv__ROSCmdInterface_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__init(frhal_msgs__srv__ROSCmdInterface_Request__Sequence * array, size_t size);

/// Finalize array of srv/ROSCmdInterface messages.
/**
 * It calls
 * frhal_msgs__srv__ROSCmdInterface_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__fini(frhal_msgs__srv__ROSCmdInterface_Request__Sequence * array);

/// Create array of srv/ROSCmdInterface messages.
/**
 * It allocates the memory for the array and calls
 * frhal_msgs__srv__ROSCmdInterface_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
frhal_msgs__srv__ROSCmdInterface_Request__Sequence *
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__create(size_t size);

/// Destroy array of srv/ROSCmdInterface messages.
/**
 * It calls
 * frhal_msgs__srv__ROSCmdInterface_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__destroy(frhal_msgs__srv__ROSCmdInterface_Request__Sequence * array);

/// Check for srv/ROSCmdInterface message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__are_equal(const frhal_msgs__srv__ROSCmdInterface_Request__Sequence * lhs, const frhal_msgs__srv__ROSCmdInterface_Request__Sequence * rhs);

/// Copy an array of srv/ROSCmdInterface messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Request__Sequence__copy(
  const frhal_msgs__srv__ROSCmdInterface_Request__Sequence * input,
  frhal_msgs__srv__ROSCmdInterface_Request__Sequence * output);

/// Initialize srv/ROSCmdInterface message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * frhal_msgs__srv__ROSCmdInterface_Response
 * )) before or use
 * frhal_msgs__srv__ROSCmdInterface_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Response__init(frhal_msgs__srv__ROSCmdInterface_Response * msg);

/// Finalize srv/ROSCmdInterface message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__srv__ROSCmdInterface_Response__fini(frhal_msgs__srv__ROSCmdInterface_Response * msg);

/// Create srv/ROSCmdInterface message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * frhal_msgs__srv__ROSCmdInterface_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
frhal_msgs__srv__ROSCmdInterface_Response *
frhal_msgs__srv__ROSCmdInterface_Response__create();

/// Destroy srv/ROSCmdInterface message.
/**
 * It calls
 * frhal_msgs__srv__ROSCmdInterface_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__srv__ROSCmdInterface_Response__destroy(frhal_msgs__srv__ROSCmdInterface_Response * msg);

/// Check for srv/ROSCmdInterface message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Response__are_equal(const frhal_msgs__srv__ROSCmdInterface_Response * lhs, const frhal_msgs__srv__ROSCmdInterface_Response * rhs);

/// Copy a srv/ROSCmdInterface message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Response__copy(
  const frhal_msgs__srv__ROSCmdInterface_Response * input,
  frhal_msgs__srv__ROSCmdInterface_Response * output);

/// Initialize array of srv/ROSCmdInterface messages.
/**
 * It allocates the memory for the number of elements and calls
 * frhal_msgs__srv__ROSCmdInterface_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__init(frhal_msgs__srv__ROSCmdInterface_Response__Sequence * array, size_t size);

/// Finalize array of srv/ROSCmdInterface messages.
/**
 * It calls
 * frhal_msgs__srv__ROSCmdInterface_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__fini(frhal_msgs__srv__ROSCmdInterface_Response__Sequence * array);

/// Create array of srv/ROSCmdInterface messages.
/**
 * It allocates the memory for the array and calls
 * frhal_msgs__srv__ROSCmdInterface_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
frhal_msgs__srv__ROSCmdInterface_Response__Sequence *
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__create(size_t size);

/// Destroy array of srv/ROSCmdInterface messages.
/**
 * It calls
 * frhal_msgs__srv__ROSCmdInterface_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__destroy(frhal_msgs__srv__ROSCmdInterface_Response__Sequence * array);

/// Check for srv/ROSCmdInterface message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__are_equal(const frhal_msgs__srv__ROSCmdInterface_Response__Sequence * lhs, const frhal_msgs__srv__ROSCmdInterface_Response__Sequence * rhs);

/// Copy an array of srv/ROSCmdInterface messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__srv__ROSCmdInterface_Response__Sequence__copy(
  const frhal_msgs__srv__ROSCmdInterface_Response__Sequence * input,
  frhal_msgs__srv__ROSCmdInterface_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__FUNCTIONS_H_
