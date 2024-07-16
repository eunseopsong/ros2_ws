// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces_pkg:msg/Motor.idl
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
#include "interfaces_pkg/msg/detail/motor__struct.h"
#include "interfaces_pkg/msg/detail/motor__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces_pkg__msg__motor__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("interfaces_pkg.msg._motor.Motor", full_classname_dest, 31) == 0);
  }
  interfaces_pkg__msg__Motor * ros_message = _ros_message;
  {  // front_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_volt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_volt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rear_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_volt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rear_volt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // potentiometer
    PyObject * field = PyObject_GetAttrString(_pymsg, "potentiometer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->potentiometer = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces_pkg__msg__motor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Motor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces_pkg.msg._motor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Motor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces_pkg__msg__Motor * ros_message = (interfaces_pkg__msg__Motor *)raw_ros_message;
  {  // front_volt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->front_volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_volt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rear_volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // potentiometer
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->potentiometer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "potentiometer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
