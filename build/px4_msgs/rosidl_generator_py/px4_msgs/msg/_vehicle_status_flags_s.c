// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
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
#include "px4_msgs/msg/detail/vehicle_status_flags__struct.h"
#include "px4_msgs/msg/detail/vehicle_status_flags__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_status_flags__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("px4_msgs.msg._vehicle_status_flags.VehicleStatusFlags", full_classname_dest, 53) == 0);
  }
  px4_msgs__msg__VehicleStatusFlags * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_angular_velocity = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_attitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_attitude = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_local_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_local_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_local_position = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_local_position_relaxed
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_local_position_relaxed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_local_position_relaxed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_global_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_global_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_global_position = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_local_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_local_alt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_local_alt = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_mission
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_mission");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_mission = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_offboard_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_offboard_signal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_offboard_signal = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_home_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_home_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_home_position = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_prevent_arming
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_prevent_arming");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_prevent_arming = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_other
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_other");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_other = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // calibration_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->calibration_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pre_flight_checks_pass
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_flight_checks_pass");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pre_flight_checks_pass = (Py_True == field);
    Py_DECREF(field);
  }
  {  // auto_mission_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_mission_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_mission_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // angular_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->angular_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // attitude_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "attitude_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->attitude_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_altitude_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_altitude_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_altitude_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_position_valid_relaxed
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_position_valid_relaxed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_position_valid_relaxed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // global_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->global_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // home_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "home_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->home_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // offboard_control_signal_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "offboard_control_signal_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->offboard_control_signal_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_signal_found_once
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_signal_found_once");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_signal_found_once = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_calibration_in_progress
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_calibration_in_progress");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_calibration_in_progress = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vtol_transition_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "vtol_transition_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vtol_transition_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery_low_remaining_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_low_remaining_time");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->battery_low_remaining_time = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery_unhealthy
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_unhealthy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->battery_unhealthy = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_status_flags__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStatusFlags */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_status_flags");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStatusFlags");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleStatusFlags * ros_message = (px4_msgs__msg__VehicleStatusFlags *)raw_ros_message;
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
  {  // mode_req_angular_velocity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_angular_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_attitude
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_attitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_local_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_local_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_local_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_local_position_relaxed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_local_position_relaxed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_local_position_relaxed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_global_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_global_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_global_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_local_alt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_local_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_local_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_mission
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_mission);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_mission", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_offboard_signal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_offboard_signal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_offboard_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_home_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_home_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_home_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_prevent_arming
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_prevent_arming);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_prevent_arming", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_other
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_other);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_other", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->calibration_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_flight_checks_pass
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pre_flight_checks_pass ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_flight_checks_pass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_mission_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_mission_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_mission_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->angular_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attitude_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->attitude_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attitude_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_altitude_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_altitude_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_altitude_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_position_valid_relaxed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_position_valid_relaxed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_position_valid_relaxed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // global_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->global_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // home_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->home_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "home_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offboard_control_signal_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->offboard_control_signal_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offboard_control_signal_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_signal_found_once
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_signal_found_once ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_signal_found_once", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_calibration_in_progress
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_calibration_in_progress ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_calibration_in_progress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vtol_transition_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vtol_transition_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vtol_transition_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_low_remaining_time
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->battery_low_remaining_time ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_low_remaining_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_unhealthy
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->battery_unhealthy ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_unhealthy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->battery_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
