// Generated by gencpp from file itr_rpc/IK_SolveRequest.msg
// DO NOT EDIT!


#ifndef ITR_RPC_MESSAGE_IK_SOLVEREQUEST_H
#define ITR_RPC_MESSAGE_IK_SOLVEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace itr_rpc
{
template <class ContainerAllocator>
struct IK_SolveRequest_
{
  typedef IK_SolveRequest_<ContainerAllocator> Type;

  IK_SolveRequest_()
    : header()
    , position()
    , orientation()
    , seed()  {
      position.assign(0.0);

      orientation.assign(0.0);
  }
  IK_SolveRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , position()
    , orientation()
    , seed(_alloc)  {
  (void)_alloc;
      position.assign(0.0);

      orientation.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef boost::array<float, 3>  _position_type;
  _position_type position;

   typedef boost::array<float, 3>  _orientation_type;
  _orientation_type orientation;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _seed_type;
  _seed_type seed;





  typedef boost::shared_ptr< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> const> ConstPtr;

}; // struct IK_SolveRequest_

typedef ::itr_rpc::IK_SolveRequest_<std::allocator<void> > IK_SolveRequest;

typedef boost::shared_ptr< ::itr_rpc::IK_SolveRequest > IK_SolveRequestPtr;
typedef boost::shared_ptr< ::itr_rpc::IK_SolveRequest const> IK_SolveRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::itr_rpc::IK_SolveRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::itr_rpc::IK_SolveRequest_<ContainerAllocator1> & lhs, const ::itr_rpc::IK_SolveRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.position == rhs.position &&
    lhs.orientation == rhs.orientation &&
    lhs.seed == rhs.seed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::itr_rpc::IK_SolveRequest_<ContainerAllocator1> & lhs, const ::itr_rpc::IK_SolveRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace itr_rpc

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a3aaff630c5f2f733715d86140e140ea";
  }

  static const char* value(const ::itr_rpc::IK_SolveRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa3aaff630c5f2f73ULL;
  static const uint64_t static_value2 = 0x3715d86140e140eaULL;
};

template<class ContainerAllocator>
struct DataType< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "itr_rpc/IK_SolveRequest";
  }

  static const char* value(const ::itr_rpc::IK_SolveRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Header must contain time stamp\n"
"Header header\n"
"\n"
"# Target position (x, y, z)\n"
"float32[3] position\n"
"# Target orientation (roll, pitch, yaw)\n"
"float32[3] orientation\n"
"\n"
"# Seed values for the IK solver\n"
"# Can be empty -> single random value for all joints\n"
"# Can be the number of joints -> specific value for each joint\n"
"float32[] seed\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::itr_rpc::IK_SolveRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.position);
      stream.next(m.orientation);
      stream.next(m.seed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IK_SolveRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::itr_rpc::IK_SolveRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::itr_rpc::IK_SolveRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "orientation[]" << std::endl;
    for (size_t i = 0; i < v.orientation.size(); ++i)
    {
      s << indent << "  orientation[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.orientation[i]);
    }
    s << indent << "seed[]" << std::endl;
    for (size_t i = 0; i < v.seed.size(); ++i)
    {
      s << indent << "  seed[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.seed[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ITR_RPC_MESSAGE_IK_SOLVEREQUEST_H
