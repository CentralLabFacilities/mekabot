/* Auto-generated by genmsg_cpp for file /home/meka/mekabot/m3meka/ros/m3ctrl_msgs/srv/M3JointArrayStatus.srv */
#ifndef M3CTRL_MSGS_SERVICE_M3JOINTARRAYSTATUS_H
#define M3CTRL_MSGS_SERVICE_M3JOINTARRAYSTATUS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"



#include "m3_msgs/M3BaseStatus.h"

namespace m3ctrl_msgs
{
template <class ContainerAllocator>
struct M3JointArrayStatusRequest_ {
  typedef M3JointArrayStatusRequest_<ContainerAllocator> Type;

  M3JointArrayStatusRequest_()
  : request(0)
  {
  }

  M3JointArrayStatusRequest_(const ContainerAllocator& _alloc)
  : request(0)
  {
  }

  typedef int32_t _request_type;
  int32_t request;


  typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct M3JointArrayStatusRequest
typedef  ::m3ctrl_msgs::M3JointArrayStatusRequest_<std::allocator<void> > M3JointArrayStatusRequest;

typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayStatusRequest> M3JointArrayStatusRequestPtr;
typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayStatusRequest const> M3JointArrayStatusRequestConstPtr;


template <class ContainerAllocator>
struct M3JointArrayStatusResponse_ {
  typedef M3JointArrayStatusResponse_<ContainerAllocator> Type;

  M3JointArrayStatusResponse_()
  : base()
  , motor_temp()
  , amp_temp()
  , current()
  , torque()
  , torquedot()
  , theta()
  , thetadot()
  , thetadotdot()
  , completed_spline_idx(0)
  , pwm_cmd()
  {
  }

  M3JointArrayStatusResponse_(const ContainerAllocator& _alloc)
  : base(_alloc)
  , motor_temp(_alloc)
  , amp_temp(_alloc)
  , current(_alloc)
  , torque(_alloc)
  , torquedot(_alloc)
  , theta(_alloc)
  , thetadot(_alloc)
  , thetadotdot(_alloc)
  , completed_spline_idx(0)
  , pwm_cmd(_alloc)
  {
  }

  typedef  ::m3_msgs::M3BaseStatus_<ContainerAllocator>  _base_type;
   ::m3_msgs::M3BaseStatus_<ContainerAllocator>  base;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _motor_temp_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  motor_temp;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _amp_temp_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  amp_temp;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _current_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  current;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _torque_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  torque;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _torquedot_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  torquedot;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _theta_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  theta;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _thetadot_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  thetadot;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _thetadotdot_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  thetadotdot;

  typedef int32_t _completed_spline_idx_type;
  int32_t completed_spline_idx;

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _pwm_cmd_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  pwm_cmd;


  typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct M3JointArrayStatusResponse
typedef  ::m3ctrl_msgs::M3JointArrayStatusResponse_<std::allocator<void> > M3JointArrayStatusResponse;

typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayStatusResponse> M3JointArrayStatusResponsePtr;
typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayStatusResponse const> M3JointArrayStatusResponseConstPtr;

struct M3JointArrayStatus
{

typedef M3JointArrayStatusRequest Request;
typedef M3JointArrayStatusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct M3JointArrayStatus
} // namespace m3ctrl_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "650f0ccd41c8f8d53ada80be6ddde434";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x650f0ccd41c8f8d5ULL;
  static const uint64_t static_value2 = 0x3ada80be6ddde434ULL;
};

template<class ContainerAllocator>
struct DataType< ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3JointArrayStatusRequest";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 request\n\
\n\
";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b3c51b6c0fba9e6bcb03e3e871454442";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb3c51b6c0fba9e6bULL;
  static const uint64_t static_value2 = 0xcb03e3e871454442ULL;
};

template<class ContainerAllocator>
struct DataType< ::m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3JointArrayStatusResponse";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3_msgs/M3BaseStatus base\n\
float32[] motor_temp\n\
float32[] amp_temp\n\
float32[] current\n\
float32[] torque\n\
float32[] torquedot\n\
float32[] theta\n\
float32[] thetadot\n\
float32[] thetadotdot\n\
int32 completed_spline_idx\n\
int32[] pwm_cmd\n\
\n\
================================================================================\n\
MSG: m3_msgs/M3BaseStatus\n\
string name\n\
uint8 state\n\
int64 timestamp\n\
string rate\n\
string version\n\
\n\
\n\
";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.request);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct M3JointArrayStatusRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.base);
    stream.next(m.motor_temp);
    stream.next(m.amp_temp);
    stream.next(m.current);
    stream.next(m.torque);
    stream.next(m.torquedot);
    stream.next(m.theta);
    stream.next(m.thetadot);
    stream.next(m.thetadotdot);
    stream.next(m.completed_spline_idx);
    stream.next(m.pwm_cmd);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct M3JointArrayStatusResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<m3ctrl_msgs::M3JointArrayStatus> {
  static const char* value() 
  {
    return "fd0ff7bf51cf3c5324e0ee2aef6015d7";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayStatus&) { return value(); } 
};

template<>
struct DataType<m3ctrl_msgs::M3JointArrayStatus> {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3JointArrayStatus";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayStatus&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fd0ff7bf51cf3c5324e0ee2aef6015d7";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3JointArrayStatus";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fd0ff7bf51cf3c5324e0ee2aef6015d7";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3JointArrayStatus";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayStatusResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // M3CTRL_MSGS_SERVICE_M3JOINTARRAYSTATUS_H

