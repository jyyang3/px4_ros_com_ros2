// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorVisualOdometryAligned.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/estimator_visual_odometry_aligned__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EstimatorVisualOdometryAligned_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::EstimatorVisualOdometryAligned(_init);
}

void EstimatorVisualOdometryAligned_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::EstimatorVisualOdometryAligned *>(message_memory);
  typed_message->~EstimatorVisualOdometryAligned();
}

size_t size_function__EstimatorVisualOdometryAligned__position(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorVisualOdometryAligned__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorVisualOdometryAligned__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorVisualOdometryAligned__q(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__EstimatorVisualOdometryAligned__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorVisualOdometryAligned__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorVisualOdometryAligned__velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorVisualOdometryAligned__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorVisualOdometryAligned__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorVisualOdometryAligned__angular_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorVisualOdometryAligned__angular_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorVisualOdometryAligned__angular_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorVisualOdometryAligned__position_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorVisualOdometryAligned__position_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorVisualOdometryAligned__position_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorVisualOdometryAligned__orientation_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorVisualOdometryAligned__orientation_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorVisualOdometryAligned__orientation_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorVisualOdometryAligned__velocity_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorVisualOdometryAligned__velocity_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorVisualOdometryAligned__velocity_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EstimatorVisualOdometryAligned_message_member_array[13] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, pose_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorVisualOdometryAligned__position,  // size() function pointer
    get_const_function__EstimatorVisualOdometryAligned__position,  // get_const(index) function pointer
    get_function__EstimatorVisualOdometryAligned__position,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorVisualOdometryAligned__q,  // size() function pointer
    get_const_function__EstimatorVisualOdometryAligned__q,  // get_const(index) function pointer
    get_function__EstimatorVisualOdometryAligned__q,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, velocity_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorVisualOdometryAligned__velocity,  // size() function pointer
    get_const_function__EstimatorVisualOdometryAligned__velocity,  // get_const(index) function pointer
    get_function__EstimatorVisualOdometryAligned__velocity,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorVisualOdometryAligned__angular_velocity,  // size() function pointer
    get_const_function__EstimatorVisualOdometryAligned__angular_velocity,  // get_const(index) function pointer
    get_function__EstimatorVisualOdometryAligned__angular_velocity,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, position_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorVisualOdometryAligned__position_variance,  // size() function pointer
    get_const_function__EstimatorVisualOdometryAligned__position_variance,  // get_const(index) function pointer
    get_function__EstimatorVisualOdometryAligned__position_variance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, orientation_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorVisualOdometryAligned__orientation_variance,  // size() function pointer
    get_const_function__EstimatorVisualOdometryAligned__orientation_variance,  // get_const(index) function pointer
    get_function__EstimatorVisualOdometryAligned__orientation_variance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, velocity_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorVisualOdometryAligned__velocity_variance,  // size() function pointer
    get_const_function__EstimatorVisualOdometryAligned__velocity_variance,  // get_const(index) function pointer
    get_function__EstimatorVisualOdometryAligned__velocity_variance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reset_counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, reset_counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quality",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorVisualOdometryAligned, quality),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EstimatorVisualOdometryAligned_message_members = {
  "px4_msgs::msg",  // message namespace
  "EstimatorVisualOdometryAligned",  // message name
  13,  // number of fields
  sizeof(px4_msgs::msg::EstimatorVisualOdometryAligned),
  EstimatorVisualOdometryAligned_message_member_array,  // message members
  EstimatorVisualOdometryAligned_init_function,  // function to initialize message memory (memory has to be allocated)
  EstimatorVisualOdometryAligned_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EstimatorVisualOdometryAligned_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EstimatorVisualOdometryAligned_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::EstimatorVisualOdometryAligned>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorVisualOdometryAligned_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, EstimatorVisualOdometryAligned)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorVisualOdometryAligned_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
