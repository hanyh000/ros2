# generated from rosidl_generator_py/resource/_idl.py.em
# with input from practice_package_msgs:msg/PoseToVal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseToVal(type):
    """Metaclass of message 'PoseToVal'."""

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
            module = import_type_support('practice_package_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'practice_package_msgs.msg.PoseToVal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose_to_val
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose_to_val
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose_to_val
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose_to_val
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose_to_val

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseToVal(metaclass=Metaclass_PoseToVal):
    """Message class 'PoseToVal'."""

    __slots__ = [
        '_pose_x',
        '_pose_y',
        '_pose_theta',
        '_timer',
    ]

    _fields_and_field_types = {
        'pose_x': 'float',
        'pose_y': 'float',
        'pose_theta': 'float',
        'timer': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pose_x = kwargs.get('pose_x', float())
        self.pose_y = kwargs.get('pose_y', float())
        self.pose_theta = kwargs.get('pose_theta', float())
        self.timer = kwargs.get('timer', float())

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
        if self.pose_x != other.pose_x:
            return False
        if self.pose_y != other.pose_y:
            return False
        if self.pose_theta != other.pose_theta:
            return False
        if self.timer != other.timer:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose_x(self):
        """Message field 'pose_x'."""
        return self._pose_x

    @pose_x.setter
    def pose_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pose_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pose_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pose_x = value

    @builtins.property
    def pose_y(self):
        """Message field 'pose_y'."""
        return self._pose_y

    @pose_y.setter
    def pose_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pose_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pose_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pose_y = value

    @builtins.property
    def pose_theta(self):
        """Message field 'pose_theta'."""
        return self._pose_theta

    @pose_theta.setter
    def pose_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pose_theta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pose_theta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pose_theta = value

    @builtins.property
    def timer(self):
        """Message field 'timer'."""
        return self._timer

    @timer.setter
    def timer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timer' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'timer' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._timer = value
