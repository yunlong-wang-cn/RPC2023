// Generated by gencpp from file itr_rpc/LineCollisionResponse.msg
// DO NOT EDIT!


#ifndef ITR_RPC_MESSAGE_LINECOLLISIONRESPONSE_H
#define ITR_RPC_MESSAGE_LINECOLLISIONRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace itr_rpc
{
template <class ContainerAllocator>
struct LineCollisionResponse_
{
  typedef LineCollisionResponse_<ContainerAllocator> Type;

  LineCollisionResponse_()
    : free(false)  {
    }
  LineCollisionResponse_(const ContainerAllocator& _alloc)
    : free(false)  {
  (void)_alloc;
    }



   typedef uint8_t _free_type;
  _free_type free;





  typedef boost::shared_ptr< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct LineCollisionResponse_

typedef ::itr_rpc::LineCollisionResponse_<std::allocator<void> > LineCollisionResponse;

typedef boost::shared_ptr< ::itr_rpc::LineCollisionResponse > LineCollisionResponsePtr;
typedef boost::shared_ptr< ::itr_rpc::LineCollisionResponse const> LineCollisionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::itr_rpc::LineCollisionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::itr_rpc::LineCollisionResponse_<ContainerAllocator1> & lhs, const ::itr_rpc::LineCollisionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.free == rhs.free;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::itr_rpc::LineCollisionResponse_<ContainerAllocator1> & lhs, const ::itr_rpc::LineCollisionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace itr_rpc

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "662d0577555df77dcaee5a646dd74f27";
  }

  static const char* value(const ::itr_rpc::LineCollisionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x662d0577555df77dULL;
  static const uint64_t static_value2 = 0xcaee5a646dd74f27ULL;
};

template<class ContainerAllocator>
struct DataType< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "itr_rpc/LineCollisionResponse";
  }

  static const char* value(const ::itr_rpc::LineCollisionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# Return true if configuration is possible (grid cells on the line unoccupied)\n"
"bool free\n"
;
  }

  static const char* value(const ::itr_rpc::LineCollisionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.free);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LineCollisionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::itr_rpc::LineCollisionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::itr_rpc::LineCollisionResponse_<ContainerAllocator>& v)
  {
    s << indent << "free: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.free);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ITR_RPC_MESSAGE_LINECOLLISIONRESPONSE_H
