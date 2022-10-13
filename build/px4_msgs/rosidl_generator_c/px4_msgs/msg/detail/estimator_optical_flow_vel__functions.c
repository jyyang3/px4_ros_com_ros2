// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorOpticalFlowVel.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_optical_flow_vel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__EstimatorOpticalFlowVel__init(px4_msgs__msg__EstimatorOpticalFlowVel * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // vel_body
  // vel_ne
  // flow_uncompensated_integral
  // flow_compensated_integral
  // gyro_rate
  // gyro_rate_integral
  return true;
}

void
px4_msgs__msg__EstimatorOpticalFlowVel__fini(px4_msgs__msg__EstimatorOpticalFlowVel * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // vel_body
  // vel_ne
  // flow_uncompensated_integral
  // flow_compensated_integral
  // gyro_rate
  // gyro_rate_integral
}

bool
px4_msgs__msg__EstimatorOpticalFlowVel__are_equal(const px4_msgs__msg__EstimatorOpticalFlowVel * lhs, const px4_msgs__msg__EstimatorOpticalFlowVel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_sample
  if (lhs->timestamp_sample != rhs->timestamp_sample) {
    return false;
  }
  // vel_body
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->vel_body[i] != rhs->vel_body[i]) {
      return false;
    }
  }
  // vel_ne
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->vel_ne[i] != rhs->vel_ne[i]) {
      return false;
    }
  }
  // flow_uncompensated_integral
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->flow_uncompensated_integral[i] != rhs->flow_uncompensated_integral[i]) {
      return false;
    }
  }
  // flow_compensated_integral
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->flow_compensated_integral[i] != rhs->flow_compensated_integral[i]) {
      return false;
    }
  }
  // gyro_rate
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->gyro_rate[i] != rhs->gyro_rate[i]) {
      return false;
    }
  }
  // gyro_rate_integral
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->gyro_rate_integral[i] != rhs->gyro_rate_integral[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorOpticalFlowVel__copy(
  const px4_msgs__msg__EstimatorOpticalFlowVel * input,
  px4_msgs__msg__EstimatorOpticalFlowVel * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // vel_body
  for (size_t i = 0; i < 2; ++i) {
    output->vel_body[i] = input->vel_body[i];
  }
  // vel_ne
  for (size_t i = 0; i < 2; ++i) {
    output->vel_ne[i] = input->vel_ne[i];
  }
  // flow_uncompensated_integral
  for (size_t i = 0; i < 2; ++i) {
    output->flow_uncompensated_integral[i] = input->flow_uncompensated_integral[i];
  }
  // flow_compensated_integral
  for (size_t i = 0; i < 2; ++i) {
    output->flow_compensated_integral[i] = input->flow_compensated_integral[i];
  }
  // gyro_rate
  for (size_t i = 0; i < 3; ++i) {
    output->gyro_rate[i] = input->gyro_rate[i];
  }
  // gyro_rate_integral
  for (size_t i = 0; i < 3; ++i) {
    output->gyro_rate_integral[i] = input->gyro_rate_integral[i];
  }
  return true;
}

px4_msgs__msg__EstimatorOpticalFlowVel *
px4_msgs__msg__EstimatorOpticalFlowVel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorOpticalFlowVel * msg = (px4_msgs__msg__EstimatorOpticalFlowVel *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorOpticalFlowVel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorOpticalFlowVel));
  bool success = px4_msgs__msg__EstimatorOpticalFlowVel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorOpticalFlowVel__destroy(px4_msgs__msg__EstimatorOpticalFlowVel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EstimatorOpticalFlowVel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EstimatorOpticalFlowVel__Sequence__init(px4_msgs__msg__EstimatorOpticalFlowVel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorOpticalFlowVel * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EstimatorOpticalFlowVel *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EstimatorOpticalFlowVel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorOpticalFlowVel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorOpticalFlowVel__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__EstimatorOpticalFlowVel__Sequence__fini(px4_msgs__msg__EstimatorOpticalFlowVel__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__EstimatorOpticalFlowVel__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__EstimatorOpticalFlowVel__Sequence *
px4_msgs__msg__EstimatorOpticalFlowVel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorOpticalFlowVel__Sequence * array = (px4_msgs__msg__EstimatorOpticalFlowVel__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorOpticalFlowVel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorOpticalFlowVel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorOpticalFlowVel__Sequence__destroy(px4_msgs__msg__EstimatorOpticalFlowVel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EstimatorOpticalFlowVel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EstimatorOpticalFlowVel__Sequence__are_equal(const px4_msgs__msg__EstimatorOpticalFlowVel__Sequence * lhs, const px4_msgs__msg__EstimatorOpticalFlowVel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EstimatorOpticalFlowVel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorOpticalFlowVel__Sequence__copy(
  const px4_msgs__msg__EstimatorOpticalFlowVel__Sequence * input,
  px4_msgs__msg__EstimatorOpticalFlowVel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EstimatorOpticalFlowVel);
    px4_msgs__msg__EstimatorOpticalFlowVel * data =
      (px4_msgs__msg__EstimatorOpticalFlowVel *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EstimatorOpticalFlowVel__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EstimatorOpticalFlowVel__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__EstimatorOpticalFlowVel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}