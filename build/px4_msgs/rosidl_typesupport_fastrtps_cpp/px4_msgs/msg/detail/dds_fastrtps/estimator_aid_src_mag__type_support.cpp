// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorAidSrcMag.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_aid_src_mag__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/estimator_aid_src_mag__struct.hpp"

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
  const px4_msgs::msg::EstimatorAidSrcMag & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: timestamp_sample
  cdr << ros_message.timestamp_sample;
  // Member: estimator_instance
  cdr << ros_message.estimator_instance;
  // Member: device_id
  cdr << ros_message.device_id;
  // Member: time_last_fuse
  {
    cdr << ros_message.time_last_fuse;
  }
  // Member: observation
  {
    cdr << ros_message.observation;
  }
  // Member: observation_variance
  {
    cdr << ros_message.observation_variance;
  }
  // Member: innovation
  {
    cdr << ros_message.innovation;
  }
  // Member: innovation_variance
  {
    cdr << ros_message.innovation_variance;
  }
  // Member: test_ratio
  {
    cdr << ros_message.test_ratio;
  }
  // Member: fusion_enabled
  {
    cdr << ros_message.fusion_enabled;
  }
  // Member: innovation_rejected
  {
    cdr << ros_message.innovation_rejected;
  }
  // Member: fused
  {
    cdr << ros_message.fused;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::EstimatorAidSrcMag & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: timestamp_sample
  cdr >> ros_message.timestamp_sample;

  // Member: estimator_instance
  cdr >> ros_message.estimator_instance;

  // Member: device_id
  cdr >> ros_message.device_id;

  // Member: time_last_fuse
  {
    cdr >> ros_message.time_last_fuse;
  }

  // Member: observation
  {
    cdr >> ros_message.observation;
  }

  // Member: observation_variance
  {
    cdr >> ros_message.observation_variance;
  }

  // Member: innovation
  {
    cdr >> ros_message.innovation;
  }

  // Member: innovation_variance
  {
    cdr >> ros_message.innovation_variance;
  }

  // Member: test_ratio
  {
    cdr >> ros_message.test_ratio;
  }

  // Member: fusion_enabled
  {
    cdr >> ros_message.fusion_enabled;
  }

  // Member: innovation_rejected
  {
    cdr >> ros_message.innovation_rejected;
  }

  // Member: fused
  {
    cdr >> ros_message.fused;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::EstimatorAidSrcMag & ros_message,
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
  // Member: estimator_instance
  {
    size_t item_size = sizeof(ros_message.estimator_instance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: device_id
  {
    size_t item_size = sizeof(ros_message.device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_last_fuse
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.time_last_fuse[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: observation
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.observation[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: observation_variance
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.observation_variance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: innovation
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.innovation[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: innovation_variance
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.innovation_variance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: test_ratio
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.test_ratio[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fusion_enabled
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.fusion_enabled[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: innovation_rejected
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.innovation_rejected[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fused
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.fused[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_EstimatorAidSrcMag(
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

  // Member: estimator_instance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_last_fuse
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: observation
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: observation_variance
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: innovation
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: innovation_variance
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: test_ratio
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fusion_enabled
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: innovation_rejected
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fused
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _EstimatorAidSrcMag__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorAidSrcMag *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EstimatorAidSrcMag__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::EstimatorAidSrcMag *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EstimatorAidSrcMag__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorAidSrcMag *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EstimatorAidSrcMag__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EstimatorAidSrcMag(full_bounded, 0);
}

static message_type_support_callbacks_t _EstimatorAidSrcMag__callbacks = {
  "px4_msgs::msg",
  "EstimatorAidSrcMag",
  _EstimatorAidSrcMag__cdr_serialize,
  _EstimatorAidSrcMag__cdr_deserialize,
  _EstimatorAidSrcMag__get_serialized_size,
  _EstimatorAidSrcMag__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorAidSrcMag__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EstimatorAidSrcMag__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::EstimatorAidSrcMag>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorAidSrcMag__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, EstimatorAidSrcMag)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorAidSrcMag__handle;
}

#ifdef __cplusplus
}
#endif
