// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface:srv/Basic.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__BASIC__STRUCT_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__BASIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mode'
#include "std_msgs/msg/detail/int64__struct.hpp"
// Member 'x'
// Member 'y'
// Member 'z'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_interface__srv__Basic_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface__srv__Basic_Request __declspec(deprecated)
#endif

namespace custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Basic_Request_
{
  using Type = Basic_Request_<ContainerAllocator>;

  explicit Basic_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_init),
    x(_init),
    y(_init),
    z(_init)
  {
    (void)_init;
  }

  explicit Basic_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc, _init),
    x(_alloc, _init),
    y(_alloc, _init),
    z(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _mode_type =
    std_msgs::msg::Int64_<ContainerAllocator>;
  _mode_type mode;
  using _x_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _x_type x;
  using _y_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _y_type y;
  using _z_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _z_type z;

  // setters for named parameter idiom
  Type & set__mode(
    const std_msgs::msg::Int64_<ContainerAllocator> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__x(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface::srv::Basic_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface::srv::Basic_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface::srv::Basic_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface::srv::Basic_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface::srv::Basic_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface::srv::Basic_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface::srv::Basic_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface::srv::Basic_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface::srv::Basic_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface::srv::Basic_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface__srv__Basic_Request
    std::shared_ptr<custom_interface::srv::Basic_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface__srv__Basic_Request
    std::shared_ptr<custom_interface::srv::Basic_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Basic_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Basic_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Basic_Request_

// alias to use template instance with default allocator
using Basic_Request =
  custom_interface::srv::Basic_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interface


// Include directives for member types
// Member 'success'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_interface__srv__Basic_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface__srv__Basic_Response __declspec(deprecated)
#endif

namespace custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Basic_Response_
{
  using Type = Basic_Response_<ContainerAllocator>;

  explicit Basic_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : success(_init)
  {
    (void)_init;
  }

  explicit Basic_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : success(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _success_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface::srv::Basic_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface::srv::Basic_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface::srv::Basic_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface::srv::Basic_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface::srv::Basic_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface::srv::Basic_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface::srv::Basic_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface::srv::Basic_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface::srv::Basic_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface::srv::Basic_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface__srv__Basic_Response
    std::shared_ptr<custom_interface::srv::Basic_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface__srv__Basic_Response
    std::shared_ptr<custom_interface::srv::Basic_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Basic_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Basic_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Basic_Response_

// alias to use template instance with default allocator
using Basic_Response =
  custom_interface::srv::Basic_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interface

namespace custom_interface
{

namespace srv
{

struct Basic
{
  using Request = custom_interface::srv::Basic_Request;
  using Response = custom_interface::srv::Basic_Response;
};

}  // namespace srv

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__BASIC__STRUCT_HPP_
