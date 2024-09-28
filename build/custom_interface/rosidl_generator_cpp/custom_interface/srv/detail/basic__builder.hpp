// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:srv/Basic.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__BASIC__BUILDER_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__BASIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interface/srv/detail/basic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_Basic_Request_z
{
public:
  explicit Init_Basic_Request_z(::custom_interface::srv::Basic_Request & msg)
  : msg_(msg)
  {}
  ::custom_interface::srv::Basic_Request z(::custom_interface::srv::Basic_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::Basic_Request msg_;
};

class Init_Basic_Request_y
{
public:
  explicit Init_Basic_Request_y(::custom_interface::srv::Basic_Request & msg)
  : msg_(msg)
  {}
  Init_Basic_Request_z y(::custom_interface::srv::Basic_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Basic_Request_z(msg_);
  }

private:
  ::custom_interface::srv::Basic_Request msg_;
};

class Init_Basic_Request_x
{
public:
  explicit Init_Basic_Request_x(::custom_interface::srv::Basic_Request & msg)
  : msg_(msg)
  {}
  Init_Basic_Request_y x(::custom_interface::srv::Basic_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Basic_Request_y(msg_);
  }

private:
  ::custom_interface::srv::Basic_Request msg_;
};

class Init_Basic_Request_mode
{
public:
  Init_Basic_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Basic_Request_x mode(::custom_interface::srv::Basic_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Basic_Request_x(msg_);
  }

private:
  ::custom_interface::srv::Basic_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::Basic_Request>()
{
  return custom_interface::srv::builder::Init_Basic_Request_mode();
}

}  // namespace custom_interface


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_Basic_Response_success
{
public:
  Init_Basic_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interface::srv::Basic_Response success(::custom_interface::srv::Basic_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::Basic_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::Basic_Response>()
{
  return custom_interface::srv::builder::Init_Basic_Response_success();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__BASIC__BUILDER_HPP_
