// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from md:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef MD__MSG__DETAIL__POSE__BUILDER_HPP_
#define MD__MSG__DETAIL__POSE__BUILDER_HPP_

#include "md/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace md
{

namespace msg
{

namespace builder
{

class Init_Pose_right_motor_state
{
public:
  explicit Init_Pose_right_motor_state(::md::msg::Pose & msg)
  : msg_(msg)
  {}
  ::md::msg::Pose right_motor_state(::md::msg::Pose::_right_motor_state_type arg)
  {
    msg_.right_motor_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

class Init_Pose_left_motor_state
{
public:
  explicit Init_Pose_left_motor_state(::md::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_right_motor_state left_motor_state(::md::msg::Pose::_left_motor_state_type arg)
  {
    msg_.left_motor_state = std::move(arg);
    return Init_Pose_right_motor_state(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

class Init_Pose_platform_state
{
public:
  explicit Init_Pose_platform_state(::md::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_left_motor_state platform_state(::md::msg::Pose::_platform_state_type arg)
  {
    msg_.platform_state = std::move(arg);
    return Init_Pose_left_motor_state(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

class Init_Pose_us_4
{
public:
  explicit Init_Pose_us_4(::md::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_platform_state us_4(::md::msg::Pose::_us_4_type arg)
  {
    msg_.us_4 = std::move(arg);
    return Init_Pose_platform_state(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

class Init_Pose_us_3
{
public:
  explicit Init_Pose_us_3(::md::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_us_4 us_3(::md::msg::Pose::_us_3_type arg)
  {
    msg_.us_3 = std::move(arg);
    return Init_Pose_us_4(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

class Init_Pose_us_2
{
public:
  explicit Init_Pose_us_2(::md::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_us_3 us_2(::md::msg::Pose::_us_2_type arg)
  {
    msg_.us_2 = std::move(arg);
    return Init_Pose_us_3(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

class Init_Pose_us_1
{
public:
  explicit Init_Pose_us_1(::md::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_us_2 us_1(::md::msg::Pose::_us_1_type arg)
  {
    msg_.us_1 = std::move(arg);
    return Init_Pose_us_2(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

class Init_Pose_angular_velocity
{
public:
  explicit Init_Pose_angular_velocity(::md::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_us_1 angular_velocity(::md::msg::Pose::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Pose_us_1(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

class Init_Pose_linear_velocity
{
public:
  explicit Init_Pose_linear_velocity(::md::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_angular_velocity linear_velocity(::md::msg::Pose::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_Pose_angular_velocity(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

class Init_Pose_theta
{
public:
  explicit Init_Pose_theta(::md::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_linear_velocity theta(::md::msg::Pose::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Pose_linear_velocity(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

class Init_Pose_y
{
public:
  explicit Init_Pose_y(::md::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_theta y(::md::msg::Pose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pose_theta(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

class Init_Pose_x
{
public:
  Init_Pose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_y x(::md::msg::Pose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pose_y(msg_);
  }

private:
  ::md::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::md::msg::Pose>()
{
  return md::msg::builder::Init_Pose_x();
}

}  // namespace md

#endif  // MD__MSG__DETAIL__POSE__BUILDER_HPP_
