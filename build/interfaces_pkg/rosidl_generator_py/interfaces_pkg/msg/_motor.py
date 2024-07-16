# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces_pkg:msg/Motor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Motor(type):
    """Metaclass of message 'Motor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces_pkg.msg.Motor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Motor(metaclass=Metaclass_Motor):
    """Message class 'Motor'."""

    __slots__ = [
        '_front_volt',
        '_rear_volt',
        '_angle',
        '_left_speed',
        '_right_speed',
        '_potentiometer',
    ]

    _fields_and_field_types = {
        'front_volt': 'int32',
        'rear_volt': 'int32',
        'angle': 'int32',
        'left_speed': 'int32',
        'right_speed': 'int32',
        'potentiometer': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.front_volt = kwargs.get('front_volt', int())
        self.rear_volt = kwargs.get('rear_volt', int())
        self.angle = kwargs.get('angle', int())
        self.left_speed = kwargs.get('left_speed', int())
        self.right_speed = kwargs.get('right_speed', int())
        self.potentiometer = kwargs.get('potentiometer', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.front_volt != other.front_volt:
            return False
        if self.rear_volt != other.rear_volt:
            return False
        if self.angle != other.angle:
            return False
        if self.left_speed != other.left_speed:
            return False
        if self.right_speed != other.right_speed:
            return False
        if self.potentiometer != other.potentiometer:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def front_volt(self):
        """Message field 'front_volt'."""
        return self._front_volt

    @front_volt.setter
    def front_volt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_volt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'front_volt' field must be an integer in [-2147483648, 2147483647]"
        self._front_volt = value

    @property
    def rear_volt(self):
        """Message field 'rear_volt'."""
        return self._rear_volt

    @rear_volt.setter
    def rear_volt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_volt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rear_volt' field must be an integer in [-2147483648, 2147483647]"
        self._rear_volt = value

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angle' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'angle' field must be an integer in [-2147483648, 2147483647]"
        self._angle = value

    @property
    def left_speed(self):
        """Message field 'left_speed'."""
        return self._left_speed

    @left_speed.setter
    def left_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_speed' field must be an integer in [-2147483648, 2147483647]"
        self._left_speed = value

    @property
    def right_speed(self):
        """Message field 'right_speed'."""
        return self._right_speed

    @right_speed.setter
    def right_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_speed' field must be an integer in [-2147483648, 2147483647]"
        self._right_speed = value

    @property
    def potentiometer(self):
        """Message field 'potentiometer'."""
        return self._potentiometer

    @potentiometer.setter
    def potentiometer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'potentiometer' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'potentiometer' field must be an integer in [-2147483648, 2147483647]"
        self._potentiometer = value
