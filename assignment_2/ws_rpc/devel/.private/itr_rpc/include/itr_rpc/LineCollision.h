// Generated by gencpp from file itr_rpc/LineCollision.msg
// DO NOT EDIT!


#ifndef ITR_RPC_MESSAGE_LINECOLLISION_H
#define ITR_RPC_MESSAGE_LINECOLLISION_H

#include <ros/service_traits.h>


#include <itr_rpc/LineCollisionRequest.h>
#include <itr_rpc/LineCollisionResponse.h>


namespace itr_rpc
{

struct LineCollision
{

typedef LineCollisionRequest Request;
typedef LineCollisionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LineCollision
} // namespace itr_rpc


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::itr_rpc::LineCollision > {
  static const char* value()
  {
    return "707cbc39d27f203bc82c3dbe5b190730";
  }

  static const char* value(const ::itr_rpc::LineCollision&) { return value(); }
};

template<>
struct DataType< ::itr_rpc::LineCollision > {
  static const char* value()
  {
    return "itr_rpc/LineCollision";
  }

  static const char* value(const ::itr_rpc::LineCollision&) { return value(); }
};


// service_traits::MD5Sum< ::itr_rpc::LineCollisionRequest> should match
// service_traits::MD5Sum< ::itr_rpc::LineCollision >
template<>
struct MD5Sum< ::itr_rpc::LineCollisionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::itr_rpc::LineCollision >::value();
  }
  static const char* value(const ::itr_rpc::LineCollisionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::itr_rpc::LineCollisionRequest> should match
// service_traits::DataType< ::itr_rpc::LineCollision >
template<>
struct DataType< ::itr_rpc::LineCollisionRequest>
{
  static const char* value()
  {
    return DataType< ::itr_rpc::LineCollision >::value();
  }
  static const char* value(const ::itr_rpc::LineCollisionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::itr_rpc::LineCollisionResponse> should match
// service_traits::MD5Sum< ::itr_rpc::LineCollision >
template<>
struct MD5Sum< ::itr_rpc::LineCollisionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::itr_rpc::LineCollision >::value();
  }
  static const char* value(const ::itr_rpc::LineCollisionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::itr_rpc::LineCollisionResponse> should match
// service_traits::DataType< ::itr_rpc::LineCollision >
template<>
struct DataType< ::itr_rpc::LineCollisionResponse>
{
  static const char* value()
  {
    return DataType< ::itr_rpc::LineCollision >::value();
  }
  static const char* value(const ::itr_rpc::LineCollisionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ITR_RPC_MESSAGE_LINECOLLISION_H
