// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorRngHgtBias.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_RNG_HGT_BIAS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_RNG_HGT_BIAS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/EstimatorRngHgtBias in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorRngHgtBias
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  uint32_t baro_device_id;
  float bias;
  float bias_var;
  float innov;
  float innov_var;
  float innov_test_ratio;
} px4_msgs__msg__EstimatorRngHgtBias;

// Struct for a sequence of px4_msgs__msg__EstimatorRngHgtBias.
typedef struct px4_msgs__msg__EstimatorRngHgtBias__Sequence
{
  px4_msgs__msg__EstimatorRngHgtBias * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorRngHgtBias__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_RNG_HGT_BIAS__STRUCT_H_
