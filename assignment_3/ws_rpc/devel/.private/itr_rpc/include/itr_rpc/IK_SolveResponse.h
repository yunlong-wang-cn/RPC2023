// Generated by gencpp from file itr_rpc/IK_SolveResponse.msg
// DO NOT EDIT!


#ifndef ITR_RPC_MESSAGE_IK_SOLVERESPONSE_H
#define ITR_RPC_MESSAGE_IK_SOLVERESPONSE_H


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
struct IK_SolveResponse_
{
  typedef IK_SolveResponse_<ContainerAllocator> Type;

  IK_SolveResponse_()
    : configuration()  {
    }
  IK_SolveResponse_(const ContainerAllocator& _alloc)
    : configuration(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _configuration_type;
  _configuration_type configuration;





  typedef boost::shared_ptr< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> const> ConstPtr;

}; // struct IK_SolveResponse_

typedef ::itr_rpc::IK_SolveResponse_<std::allocator<void> > IK_SolveResponse;

typedef boost::shared_ptr< ::itr_rpc::IK_SolveResponse > IK_SolveResponsePtr;
typedef boost::shared_ptr< ::itr_rpc::IK_SolveResponse const> IK_SolveResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::itr_rpc::IK_SolveResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::itr_rpc::IK_SolveResponse_<ContainerAllocator1> & lhs, const ::itr_rpc::IK_SolveResponse_<ContainerAllocator2> & rhs)
{
  return lhs.configuration == rhs.configuration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::itr_rpc::IK_SolveResponse_<ContainerAllocator1> & lhs, const ::itr_rpc::IK_SolveResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace itr_rpc

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "96392331878a87fc2739756372e82087";
  }

  static const char* value(const ::itr_rpc::IK_SolveResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x96392331878a87fcULL;
  static const uint64_t static_value2 = 0x2739756372e82087ULL;
};

template<class ContainerAllocator>
struct DataType< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "itr_rpc/IK_SolveResponse";
  }

  static const char* value(const ::itr_rpc::IK_SolveResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# Return possible configuration for reaching position\n"
"float32[] configuration\n"
;
  }

  static const char* value(const ::itr_rpc::IK_SolveResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.configuration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IK_SolveResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::itr_rpc::IK_SolveResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::itr_rpc::IK_SolveResponse_<ContainerAllocator>& v)
  {
    s << indent << "configuration[]" << std::endl;
    for (size_t i = 0; i < v.configuration.size(); ++i)
    {
      s << indent << "  configuration[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.configuration[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ITR_RPC_MESSAGE_IK_SOLVERESPONSE_H