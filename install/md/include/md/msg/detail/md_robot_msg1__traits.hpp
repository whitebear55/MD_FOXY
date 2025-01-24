// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from md:msg/MdRobotMsg1.idl
// generated code does not contain a copyright notice

#ifndef MD__MSG__DETAIL__MD_ROBOT_MSG1__TRAITS_HPP_
#define MD__MSG__DETAIL__MD_ROBOT_MSG1__TRAITS_HPP_

#include "md/msg/detail/md_robot_msg1__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<md::msg::MdRobotMsg1>()
{
  return "md::msg::MdRobotMsg1";
}

template<>
inline const char * name<md::msg::MdRobotMsg1>()
{
  return "md/msg/MdRobotMsg1";
}

template<>
struct has_fixed_size<md::msg::MdRobotMsg1>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<md::msg::MdRobotMsg1>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<md::msg::MdRobotMsg1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MD__MSG__DETAIL__MD_ROBOT_MSG1__TRAITS_HPP_
