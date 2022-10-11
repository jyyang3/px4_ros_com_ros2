// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleMocapOdometry.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_mocap_odometry__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/vehicle_mocap_odometry__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::VehicleMocapOdometry & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: timestamp_sample
  cdr << ros_message.timestamp_sample;
  // Member: pose_frame
  cdr << ros_message.pose_frame;
  // Member: position
  {
    cdr << ros_message.position;
  }
  // Member: q
  {
    cdr << ros_message.q;
  }
  // Member: velocity_frame
  cdr << ros_message.velocity_frame;
  // Member: velocity
  {
    cdr << ros_message.velocity;
  }
  // Member: angular_velocity
  {
    cdr << ros_message.angular_velocity;
  }
  // Member: position_variance
  {
    cdr << ros_message.position_variance;
  }
  // Member: orientation_variance
  {
    cdr << ros_message.orientation_variance;
  }
  // Member: velocity_variance
  {
    cdr << ros_message.velocity_variance;
  }
  // Member: reset_counter
  cdr << ros_message.reset_counter;
  // Member: quality
  cdr << ros_message.quality;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::VehicleMocapOdometry & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: timestamp_sample
  cdr >> ros_message.timestamp_sample;

  // Member: pose_frame
  cdr >> ros_message.pose_frame;

  // Member: position
  {
    cdr >> ros_message.position;
  }

  // Member: q
  {
    cdr >> ros_message.q;
  }

  // Member: velocity_frame
  cdr >> ros_message.velocity_frame;

  // Member: velocity
  {
    cdr >> ros_message.velocity;
  }

  // Member: angular_velocity
  {
    cdr >> ros_message.angular_velocity;
  }

  // Member: position_variance
  {
    cdr >> ros_message.position_variance;
  }

  // Member: orientation_variance
  {
    cdr >> ros_message.orientation_variance;
  }

  // Member: velocity_variance
  {
    cdr >> ros_message.velocity_variance;
  }

  // Member: reset_counter
  cdr >> ros_message.reset_counter;

  // Member: quality
  cdr >> ros_message.quality;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::VehicleMocapOdometry & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp_sample
  {
    size_t item_size = sizeof(ros_message.timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pose_frame
  {
    size_t item_size = sizeof(ros_message.pose_frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.q[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_frame
  {
    size_t item_size = sizeof(ros_message.velocity_frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_velocity
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.angular_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_variance
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.position_variance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: orientation_variance
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.orientation_variance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_variance
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.velocity_variance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reset_counter
  {
    size_t item_size = sizeof(ros_message.reset_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: quality
  {
    size_t item_size = sizeof(ros_message.quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_VehicleMocapOdometry(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: timestamp_sample
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pose_frame
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: q
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_frame
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: velocity
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angular_velocity
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_variance
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: orientation_variance
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_variance
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reset_counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleMocapOdometry__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleMocapOdometry *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleMocapOdometry__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::VehicleMocapOdometry *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleMocapOdometry__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleMocapOdometry *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleMocapOdometry__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleMocapOdometry(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleMocapOdometry__callbacks = {
  "px4_msgs::msg",
  "VehicleMocapOdometry",
  _VehicleMocapOdometry__cdr_serialize,
  _VehicleMocapOdometry__cdr_deserialize,
  _VehicleMocapOdometry__get_serialized_size,
  _VehicleMocapOdometry__max_serialized_size
};

static rosidl_message_type_support_t _VehicleMocapOdometry__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleMocapOdometry__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::VehicleMocapOdometry>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleMocapOdometry__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, VehicleMocapOdometry)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleMocapOdometry__handle;
}

#ifdef __cplusplus
}
#endif
