# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces_pkg:msg/LaneInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneInfo(type):
    """Metaclass of message 'LaneInfo'."""

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
                'interfaces_pkg.msg.LaneInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneInfo(metaclass=Metaclass_LaneInfo):
    """Message class 'LaneInfo'."""

    __slots__ = [
        '_slope',
        '_target_x',
        '_target_y',
        '_curv',
        '_inter',
    ]

    _fields_and_field_types = {
        'slope': 'float',
        'target_x': 'int64',
        'target_y': 'int64',
        'curv': 'float',
        'inter': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.slope = kwargs.get('slope', float())
        self.target_x = kwargs.get('target_x', int())
        self.target_y = kwargs.get('target_y', int())
        self.curv = kwargs.get('curv', float())
        self.inter = kwargs.get('inter', int())

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
        if self.slope != other.slope:
            return False
        if self.target_x != other.target_x:
            return False
        if self.target_y != other.target_y:
            return False
        if self.curv != other.curv:
            return False
        if self.inter != other.inter:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def slope(self):
        """Message field 'slope'."""
        return self._slope

    @slope.setter
    def slope(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'slope' field must be of type 'float'"
        self._slope = value

    @property
    def target_x(self):
        """Message field 'target_x'."""
        return self._target_x

    @target_x.setter
    def target_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_x' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'target_x' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._target_x = value

    @property
    def target_y(self):
        """Message field 'target_y'."""
        return self._target_y

    @target_y.setter
    def target_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_y' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'target_y' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._target_y = value

    @property
    def curv(self):
        """Message field 'curv'."""
        return self._curv

    @curv.setter
    def curv(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curv' field must be of type 'float'"
        self._curv = value

    @property
    def inter(self):
        """Message field 'inter'."""
        return self._inter

    @inter.setter
    def inter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'inter' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'inter' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._inter = value