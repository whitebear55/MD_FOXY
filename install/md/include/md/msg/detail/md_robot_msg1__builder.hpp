// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from md:msg/MdRobotMsg1.idl
// generated code does not contain a copyright notice

#ifndef MD__MSG__DETAIL__MD_ROBOT_MSG1__BUILDER_HPP_
#define MD__MSG__DETAIL__MD_ROBOT_MSG1__BUILDER_HPP_

#include "md/msg/detail/md_robot_msg1__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace md
{

namespace msg
{

namespace builder
{

class Init_MdRobotMsg1_input_voltage
{
public:
  explicit Init_MdRobotMsg1_input_voltage(::md::msg::MdRobotMsg1 & msg)
  : msg_(msg)
  {}
  ::md::msg::MdRobotMsg1 input_voltage(::md::msg::MdRobotMsg1::_input_voltage_type arg)
  {
    msg_.input_voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::md::msg::MdRobotMsg1 msg_;
};

class Init_MdRobotMsg1_motor2_state
{
public:
  explicit Init_MdRobotMsg1_motor2_state(::md::msg::MdRobotMsg1 & msg)
  : msg_(msg)
  {}
  Init_MdRobotMsg1_input_voltage motor2_state(::md::msg::MdRobotMsg1::_motor2_state_type arg)
  {
    msg_.motor2_state = std::move(arg);
    return Init_MdRobotMsg1_input_voltage(msg_);
  }

private:
  ::md::msg::MdRobotMsg1 msg_;
};

class Init_MdRobotMsg1_motor1_state
{
public:
  explicit Init_MdRobotMsg1_motor1_state(::md::msg::MdRobotMsg1 & msg)
  : msg_(msg)
  {}
  Init_MdRobotMsg1_motor2_state motor1_state(::md::msg::MdRobotMsg1::_motor1_state_type arg)
  {
    msg_.motor1_state = std::move(arg);
    return Init_MdRobotMsg1_motor2_state(msg_);
  }

private:
  ::md::msg::MdRobotMsg1 msg_;
};

class Init_MdRobotMsg1_motor2_pos
{
public:
  explicit Init_MdRobotMsg1_motor2_pos(::md::msg::MdRobotMsg1 & msg)
  : msg_(msg)
  {}
  Init_MdRobotMsg1_motor1_state motor2_pos(::md::msg::MdRobotMsg1::_motor2_pos_type arg)
  {
    msg_.motor2_pos = std::move(arg);
    return Init_MdRobotMsg1_motor1_state(msg_);
  }

private:
  ::md::msg::MdRobotMsg1 msg_;
};

class Init_MdRobotMsg1_motor2_rpm
{
public:
  explicit Init_MdRobotMsg1_motor2_rpm(::md::msg::MdRobotMsg1 & msg)
  : msg_(msg)
  {}
  Init_MdRobotMsg1_motor2_pos motor2_rpm(::md::msg::MdRobotMsg1::_motor2_rpm_type arg)
  {
    msg_.motor2_rpm = std::move(arg);
    return Init_MdRobotMsg1_motor2_pos(msg_);
  }

private:
  ::md::msg::MdRobotMsg1 msg_;
};

class Init_MdRobotMsg1_motor1_pos
{
public:
  explicit Init_MdRobotMsg1_motor1_pos(::md::msg::MdRobotMsg1 & msg)
  : msg_(msg)
  {}
  Init_MdRobotMsg1_motor2_rpm motor1_pos(::md::msg::MdRobotMsg1::_motor1_pos_type arg)
  {
    msg_.motor1_pos = std::move(arg);
    return Init_MdRobotMsg1_motor2_rpm(msg_);
  }

private:
  ::md::msg::MdRobotMsg1 msg_;
};

class Init_MdRobotMsg1_motor1_rpm
{
public:
  explicit Init_MdRobotMsg1_motor1_rpm(::md::msg::MdRobotMsg1 & msg)
  : msg_(msg)
  {}
  Init_MdRobotMsg1_motor1_pos motor1_rpm(::md::msg::MdRobotMsg1::_motor1_rpm_type arg)
  {
    msg_.motor1_rpm = std::move(arg);
    return Init_MdRobotMsg1_motor1_pos(msg_);
  }

private:
  ::md::msg::MdRobotMsg1 msg_;
};

class Init_MdRobotMsg1_interval_time
{
public:
  Init_MdRobotMsg1_interval_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MdRobotMsg1_motor1_rpm interval_time(::md::msg::MdRobotMsg1::_interval_time_type arg)
  {
    msg_.interval_time = std::move(arg);
    return Init_MdRobotMsg1_motor1_rpm(msg_);
  }

private:
  ::md::msg::MdRobotMsg1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::md::msg::MdRobotMsg1>()
{
  return md::msg::builder::Init_MdRobotMsg1_interval_time();
}

}  // namespace md

#endif  // MD__MSG__DETAIL__MD_ROBOT_MSG1__BUILDER_HPP_
