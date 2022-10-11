// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EstimatorAidSource1D.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "px4_msgs/msg/detail/estimator_aid_source1_d__struct.h"
#include "px4_msgs/msg/detail/estimator_aid_source1_d__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__estimator_aid_source1_d__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("px4_msgs.msg._estimator_aid_source1_d.EstimatorAidSource1D", full_classname_dest, 58) == 0);
  }
  px4_msgs__msg__EstimatorAidSource1D * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_sample
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_sample");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_sample = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // estimator_instance
    PyObject * field = PyObject_GetAttrString(_pymsg, "estimator_instance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->estimator_instance = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time_last_fuse
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_last_fuse");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_last_fuse = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // observation
    PyObject * field = PyObject_GetAttrString(_pymsg, "observation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->observation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // observation_variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "observation_variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->observation_variance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // innovation
    PyObject * field = PyObject_GetAttrString(_pymsg, "innovation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->innovation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // innovation_variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "innovation_variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->innovation_variance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "test_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->test_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fusion_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusion_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fusion_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // innovation_rejected
    PyObject * field = PyObject_GetAttrString(_pymsg, "innovation_rejected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->innovation_rejected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fused
    PyObject * field = PyObject_GetAttrString(_pymsg, "fused");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fused = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__estimator_aid_source1_d__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EstimatorAidSource1D */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._estimator_aid_source1_d");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EstimatorAidSource1D");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EstimatorAidSource1D * ros_message = (px4_msgs__msg__EstimatorAidSource1D *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp_sample
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp_sample);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_sample", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estimator_instance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->estimator_instance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estimator_instance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_last_fuse
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->time_last_fuse);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_last_fuse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // observation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->observation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "observation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // observation_variance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->observation_variance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "observation_variance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // innovation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->innovation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "innovation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // innovation_variance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->innovation_variance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "innovation_variance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // test_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->test_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "test_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusion_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fusion_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusion_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // innovation_rejected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->innovation_rejected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "innovation_rejected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fused
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fused ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fused", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
