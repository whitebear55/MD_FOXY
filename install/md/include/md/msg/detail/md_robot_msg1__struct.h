// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from md:msg/MdRobotMsg1.idl
// generated code does not contain a copyright notice

#ifndef MD__MSG__DETAIL__MD_ROBOT_MSG1__STRUCT_H_
#define MD__MSG__DETAIL__MD_ROBOT_MSG1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MdRobotMsg1 in the package md.
typedef struct md__msg__MdRobotMsg1
{
  double interval_time;
  int16_t motor1_rpm;
  int32_t motor1_pos;
  int16_t motor2_rpm;
  int32_t motor2_pos;
  uint8_t motor1_state;
  uint8_t motor2_state;
  float input_voltage;
} md__msg__MdRobotMsg1;

// Struct for a sequence of md__msg__MdRobotMsg1.
typedef struct md__msg__MdRobotMsg1__Sequence
{
  md__msg__MdRobotMsg1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} md__msg__MdRobotMsg1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MD__MSG__DETAIL__MD_ROBOT_MSG1__STRUCT_H_
