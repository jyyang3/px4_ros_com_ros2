// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorAidSrcMagHeading.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_aid_src_mag_heading__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/estimator_aid_src_mag_heading__struct.h"
#include "px4_msgs/msg/detail/estimator_aid_src_mag_heading__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _EstimatorAidSrcMagHeading__ros_msg_type = px4_msgs__msg__EstimatorAidSrcMagHeading;

static bool _EstimatorAidSrcMagHeading__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorAidSrcMagHeading__ros_msg_type * ros_message = static_cast<const _EstimatorAidSrcMagHeading__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: estimator_instance
  {
    cdr << ros_message->estimator_instance;
  }

  // Field name: device_id
  {
    cdr << ros_message->device_id;
  }

  // Field name: time_last_fuse
  {
    cdr << ros_message->time_last_fuse;
  }

  // Field name: observation
  {
    cdr << ros_message->observation;
  }

  // Field name: observation_variance
  {
    cdr << ros_message->observation_variance;
  }

  // Field name: innovation
  {
    cdr << ros_message->innovation;
  }

  // Field name: innovation_variance
  {
    cdr << ros_message->innovation_variance;
  }

  // Field name: test_ratio
  {
    cdr << ros_message->test_ratio;
  }

  // Field name: fusion_enabled
  {
    cdr << (ros_message->fusion_enabled ? true : false);
  }

  // Field name: innovation_rejected
  {
    cdr << (ros_message->innovation_rejected ? true : false);
  }

  // Field name: fused
  {
    cdr << (ros_message->fused ? true : false);
  }

  return true;
}

static bool _EstimatorAidSrcMagHeading__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorAidSrcMagHeading__ros_msg_type * ros_message = static_cast<_EstimatorAidSrcMagHeading__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: estimator_instance
  {
    cdr >> ros_message->estimator_instance;
  }

  // Field name: device_id
  {
    cdr >> ros_message->device_id;
  }

  // Field name: time_last_fuse
  {
    cdr >> ros_message->time_last_fuse;
  }

  // Field name: observation
  {
    cdr >> ros_message->observation;
  }

  // Field name: observation_variance
  {
    cdr >> ros_message->observation_variance;
  }

  // Field name: innovation
  {
    cdr >> ros_message->innovation;
  }

  // Field name: innovation_variance
  {
    cdr >> ros_message->innovation_variance;
  }

  // Field name: test_ratio
  {
    cdr >> ros_message->test_ratio;
  }

  // Field name: fusion_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fusion_enabled = tmp ? true : false;
  }

  // Field name: innovation_rejected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->innovation_rejected = tmp ? true : false;
  }

  // Field name: fused
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fused = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorAidSrcMagHeading(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorAidSrcMagHeading__ros_msg_type * ros_message = static_cast<const _EstimatorAidSrcMagHeading__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estimator_instance
  {
    size_t item_size = sizeof(ros_message->estimator_instance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name device_id
  {
    size_t item_size = sizeof(ros_message->device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_last_fuse
  {
    size_t item_size = sizeof(ros_message->time_last_fuse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name observation
  {
    size_t item_size = sizeof(ros_message->observation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name observation_variance
  {
    size_t item_size = sizeof(ros_message->observation_variance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name innovation
  {
    size_t item_size = sizeof(ros_message->innovation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name innovation_variance
  {
    size_t item_size = sizeof(ros_message->innovation_variance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name test_ratio
  {
    size_t item_size = sizeof(ros_message->test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fusion_enabled
  {
    size_t item_size = sizeof(ros_message->fusion_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name innovation_rejected
  {
    size_t item_size = sizeof(ros_message->innovation_rejected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fused
  {
    size_t item_size = sizeof(ros_message->fused);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorAidSrcMagHeading__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorAidSrcMagHeading(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorAidSrcMagHeading(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp_sample
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: estimator_instance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_last_fuse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: observation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: observation_variance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: innovation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: innovation_variance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: test_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fusion_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: innovation_rejected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fused
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EstimatorAidSrcMagHeading__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__EstimatorAidSrcMagHeading(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EstimatorAidSrcMagHeading = {
  "px4_msgs::msg",
  "EstimatorAidSrcMagHeading",
  _EstimatorAidSrcMagHeading__cdr_serialize,
  _EstimatorAidSrcMagHeading__cdr_deserialize,
  _EstimatorAidSrcMagHeading__get_serialized_size,
  _EstimatorAidSrcMagHeading__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorAidSrcMagHeading__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorAidSrcMagHeading,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorAidSrcMagHeading)() {
  return &_EstimatorAidSrcMagHeading__type_support;
}

#if defined(__cplusplus)
}
#endif
