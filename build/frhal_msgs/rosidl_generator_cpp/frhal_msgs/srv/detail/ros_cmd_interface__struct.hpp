// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from frhal_msgs:srv/ROSCmdInterface.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__STRUCT_HPP_
#define FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__frhal_msgs__srv__ROSCmdInterface_Request __attribute__((deprecated))
#else
# define DEPRECATED__frhal_msgs__srv__ROSCmdInterface_Request __declspec(deprecated)
#endif

namespace frhal_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ROSCmdInterface_Request_
{
  using Type = ROSCmdInterface_Request_<ContainerAllocator>;

  explicit ROSCmdInterface_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_str = "";
    }
  }

  explicit ROSCmdInterface_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd_str(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_str = "";
    }
  }

  // field types and members
  using _cmd_str_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_str_type cmd_str;

  // setters for named parameter idiom
  Type & set__cmd_str(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd_str = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__frhal_msgs__srv__ROSCmdInterface_Request
    std::shared_ptr<frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__frhal_msgs__srv__ROSCmdInterface_Request
    std::shared_ptr<frhal_msgs::srv::ROSCmdInterface_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ROSCmdInterface_Request_ & other) const
  {
    if (this->cmd_str != other.cmd_str) {
      return false;
    }
    return true;
  }
  bool operator!=(const ROSCmdInterface_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ROSCmdInterface_Request_

// alias to use template instance with default allocator
using ROSCmdInterface_Request =
  frhal_msgs::srv::ROSCmdInterface_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace frhal_msgs


#ifndef _WIN32
# define DEPRECATED__frhal_msgs__srv__ROSCmdInterface_Response __attribute__((deprecated))
#else
# define DEPRECATED__frhal_msgs__srv__ROSCmdInterface_Response __declspec(deprecated)
#endif

namespace frhal_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ROSCmdInterface_Response_
{
  using Type = ROSCmdInterface_Response_<ContainerAllocator>;

  explicit ROSCmdInterface_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_res = "";
    }
  }

  explicit ROSCmdInterface_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd_res(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_res = "";
    }
  }

  // field types and members
  using _cmd_res_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_res_type cmd_res;

  // setters for named parameter idiom
  Type & set__cmd_res(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd_res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__frhal_msgs__srv__ROSCmdInterface_Response
    std::shared_ptr<frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__frhal_msgs__srv__ROSCmdInterface_Response
    std::shared_ptr<frhal_msgs::srv::ROSCmdInterface_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ROSCmdInterface_Response_ & other) const
  {
    if (this->cmd_res != other.cmd_res) {
      return false;
    }
    return true;
  }
  bool operator!=(const ROSCmdInterface_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ROSCmdInterface_Response_

// alias to use template instance with default allocator
using ROSCmdInterface_Response =
  frhal_msgs::srv::ROSCmdInterface_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace frhal_msgs

namespace frhal_msgs
{

namespace srv
{

struct ROSCmdInterface
{
  using Request = frhal_msgs::srv::ROSCmdInterface_Request;
  using Response = frhal_msgs::srv::ROSCmdInterface_Response;
};

}  // namespace srv

}  // namespace frhal_msgs

#endif  // FRHAL_MSGS__SRV__DETAIL__ROS_CMD_INTERFACE__STRUCT_HPP_
