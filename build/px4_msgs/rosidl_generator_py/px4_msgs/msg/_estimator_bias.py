# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EstimatorBias.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EstimatorBias(type):
    """Metaclass of message 'EstimatorBias'."""

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
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.EstimatorBias')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__estimator_bias
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__estimator_bias
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__estimator_bias
            cls._TYPE_SUPPORT = module.type_support_msg__msg__estimator_bias
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__estimator_bias

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EstimatorBias(metaclass=Metaclass_EstimatorBias):
    """Message class 'EstimatorBias'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_baro_device_id',
        '_bias',
        '_bias_var',
        '_innov',
        '_innov_var',
        '_innov_test_ratio',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'baro_device_id': 'uint32',
        'bias': 'float',
        'bias_var': 'float',
        'innov': 'float',
        'innov_var': 'float',
        'innov_test_ratio': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.baro_device_id = kwargs.get('baro_device_id', int())
        self.bias = kwargs.get('bias', float())
        self.bias_var = kwargs.get('bias_var', float())
        self.innov = kwargs.get('innov', float())
        self.innov_var = kwargs.get('innov_var', float())
        self.innov_test_ratio = kwargs.get('innov_test_ratio', float())

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
        if self.timestamp != other.timestamp:
            return False
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if self.baro_device_id != other.baro_device_id:
            return False
        if self.bias != other.bias:
            return False
        if self.bias_var != other.bias_var:
            return False
        if self.innov != other.innov:
            return False
        if self.innov_var != other.innov_var:
            return False
        if self.innov_test_ratio != other.innov_test_ratio:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @property
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

    @property
    def baro_device_id(self):
        """Message field 'baro_device_id'."""
        return self._baro_device_id

    @baro_device_id.setter
    def baro_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'baro_device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'baro_device_id' field must be an unsigned integer in [0, 4294967295]"
        self._baro_device_id = value

    @property
    def bias(self):
        """Message field 'bias'."""
        return self._bias

    @bias.setter
    def bias(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bias' field must be of type 'float'"
        self._bias = value

    @property
    def bias_var(self):
        """Message field 'bias_var'."""
        return self._bias_var

    @bias_var.setter
    def bias_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bias_var' field must be of type 'float'"
        self._bias_var = value

    @property
    def innov(self):
        """Message field 'innov'."""
        return self._innov

    @innov.setter
    def innov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'innov' field must be of type 'float'"
        self._innov = value

    @property
    def innov_var(self):
        """Message field 'innov_var'."""
        return self._innov_var

    @innov_var.setter
    def innov_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'innov_var' field must be of type 'float'"
        self._innov_var = value

    @property
    def innov_test_ratio(self):
        """Message field 'innov_test_ratio'."""
        return self._innov_test_ratio

    @innov_test_ratio.setter
    def innov_test_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'innov_test_ratio' field must be of type 'float'"
        self._innov_test_ratio = value
