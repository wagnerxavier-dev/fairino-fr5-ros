// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from frhal_msgs:msg/FRState.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__MSG__DETAIL__FR_STATE__FUNCTIONS_H_
#define FRHAL_MSGS__MSG__DETAIL__FR_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "frhal_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "frhal_msgs/msg/detail/fr_state__struct.h"

/// Initialize msg/FRState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * frhal_msgs__msg__FRState
 * )) before or use
 * frhal_msgs__msg__FRState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__msg__FRState__init(frhal_msgs__msg__FRState * msg);

/// Finalize msg/FRState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__msg__FRState__fini(frhal_msgs__msg__FRState * msg);

/// Create msg/FRState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * frhal_msgs__msg__FRState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
frhal_msgs__msg__FRState *
frhal_msgs__msg__FRState__create();

/// Destroy msg/FRState message.
/**
 * It calls
 * frhal_msgs__msg__FRState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__msg__FRState__destroy(frhal_msgs__msg__FRState * msg);

/// Check for msg/FRState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__msg__FRState__are_equal(const frhal_msgs__msg__FRState * lhs, const frhal_msgs__msg__FRState * rhs);

/// Copy a msg/FRState message.
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
frhal_msgs__msg__FRState__copy(
  const frhal_msgs__msg__FRState * input,
  frhal_msgs__msg__FRState * output);

/// Initialize array of msg/FRState messages.
/**
 * It allocates the memory for the number of elements and calls
 * frhal_msgs__msg__FRState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__msg__FRState__Sequence__init(frhal_msgs__msg__FRState__Sequence * array, size_t size);

/// Finalize array of msg/FRState messages.
/**
 * It calls
 * frhal_msgs__msg__FRState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__msg__FRState__Sequence__fini(frhal_msgs__msg__FRState__Sequence * array);

/// Create array of msg/FRState messages.
/**
 * It allocates the memory for the array and calls
 * frhal_msgs__msg__FRState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
frhal_msgs__msg__FRState__Sequence *
frhal_msgs__msg__FRState__Sequence__create(size_t size);

/// Destroy array of msg/FRState messages.
/**
 * It calls
 * frhal_msgs__msg__FRState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
void
frhal_msgs__msg__FRState__Sequence__destroy(frhal_msgs__msg__FRState__Sequence * array);

/// Check for msg/FRState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_frhal_msgs
bool
frhal_msgs__msg__FRState__Sequence__are_equal(const frhal_msgs__msg__FRState__Sequence * lhs, const frhal_msgs__msg__FRState__Sequence * rhs);

/// Copy an array of msg/FRState messages.
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
frhal_msgs__msg__FRState__Sequence__copy(
  const frhal_msgs__msg__FRState__Sequence * input,
  frhal_msgs__msg__FRState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FRHAL_MSGS__MSG__DETAIL__FR_STATE__FUNCTIONS_H_
