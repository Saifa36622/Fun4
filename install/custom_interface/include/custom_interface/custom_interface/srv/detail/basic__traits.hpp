// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interface:srv/Basic.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__BASIC__TRAITS_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__BASIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interface/srv/detail/basic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mode'
#include "std_msgs/msg/detail/int64__traits.hpp"
// Member 'x'
// Member 'y'
// Member 'z'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Basic_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    to_flow_style_yaml(msg.mode, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    to_flow_style_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    to_flow_style_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    to_flow_style_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Basic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode:\n";
    to_block_style_yaml(msg.mode, out, indentation + 2);
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x:\n";
    to_block_style_yaml(msg.x, out, indentation + 2);
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y:\n";
    to_block_style_yaml(msg.y, out, indentation + 2);
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z:\n";
    to_block_style_yaml(msg.z, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Basic_Request & msg, bool use_flow_style = false)
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

}  // namespace custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use custom_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interface::srv::Basic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interface::srv::Basic_Request & msg)
{
  return custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interface::srv::Basic_Request>()
{
  return "custom_interface::srv::Basic_Request";
}

template<>
inline const char * name<custom_interface::srv::Basic_Request>()
{
  return "custom_interface/srv/Basic_Request";
}

template<>
struct has_fixed_size<custom_interface::srv::Basic_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::Int64>::value> {};

template<>
struct has_bounded_size<custom_interface::srv::Basic_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::Int64>::value> {};

template<>
struct is_message<custom_interface::srv::Basic_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'success'
#include "std_msgs/msg/detail/bool__traits.hpp"

namespace custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Basic_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    to_flow_style_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Basic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success:\n";
    to_block_style_yaml(msg.success, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Basic_Response & msg, bool use_flow_style = false)
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

}  // namespace custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use custom_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interface::srv::Basic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interface::srv::Basic_Response & msg)
{
  return custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interface::srv::Basic_Response>()
{
  return "custom_interface::srv::Basic_Response";
}

template<>
inline const char * name<custom_interface::srv::Basic_Response>()
{
  return "custom_interface/srv/Basic_Response";
}

template<>
struct has_fixed_size<custom_interface::srv::Basic_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<custom_interface::srv::Basic_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<custom_interface::srv::Basic_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::srv::Basic>()
{
  return "custom_interface::srv::Basic";
}

template<>
inline const char * name<custom_interface::srv::Basic>()
{
  return "custom_interface/srv/Basic";
}

template<>
struct has_fixed_size<custom_interface::srv::Basic>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interface::srv::Basic_Request>::value &&
    has_fixed_size<custom_interface::srv::Basic_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interface::srv::Basic>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interface::srv::Basic_Request>::value &&
    has_bounded_size<custom_interface::srv::Basic_Response>::value
  >
{
};

template<>
struct is_service<custom_interface::srv::Basic>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interface::srv::Basic_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interface::srv::Basic_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__BASIC__TRAITS_HPP_
