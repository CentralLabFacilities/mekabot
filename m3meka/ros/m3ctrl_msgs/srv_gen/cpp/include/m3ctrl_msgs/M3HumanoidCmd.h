/* Auto-generated by genmsg_cpp for file /home/meka/mekabot/m3meka/ros/m3ctrl_msgs/srv/M3HumanoidCmd.srv */
#ifndef M3CTRL_MSGS_SERVICE_M3HUMANOIDCMD_H
#define M3CTRL_MSGS_SERVICE_M3HUMANOIDCMD_H
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




namespace m3ctrl_msgs
{
template <class ContainerAllocator>
struct M3HumanoidCmdRequest_ {
  typedef M3HumanoidCmdRequest_<ContainerAllocator> Type;

  M3HumanoidCmdRequest_()
  : chain(0)
  , tq_desired()
  , ctrl_mode()
  , q_stiffness()
  , q_desired()
  , qdot_desired()
  , q_slew_rate()
  , pwm_desired()
  , enable_motor(false)
  {
  }

  M3HumanoidCmdRequest_(const ContainerAllocator& _alloc)
  : chain(0)
  , tq_desired(_alloc)
  , ctrl_mode(_alloc)
  , q_stiffness(_alloc)
  , q_desired(_alloc)
  , qdot_desired(_alloc)
  , q_slew_rate(_alloc)
  , pwm_desired(_alloc)
  , enable_motor(false)
  {
  }

  typedef uint8_t _chain_type;
  uint8_t chain;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _tq_desired_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  tq_desired;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _ctrl_mode_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  ctrl_mode;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _q_stiffness_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  q_stiffness;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _q_desired_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  q_desired;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _qdot_desired_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  qdot_desired;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _q_slew_rate_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  q_slew_rate;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pwm_desired_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  pwm_desired;

  typedef uint8_t _enable_motor_type;
  uint8_t enable_motor;


  typedef boost::shared_ptr< ::m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct M3HumanoidCmdRequest
typedef  ::m3ctrl_msgs::M3HumanoidCmdRequest_<std::allocator<void> > M3HumanoidCmdRequest;

typedef boost::shared_ptr< ::m3ctrl_msgs::M3HumanoidCmdRequest> M3HumanoidCmdRequestPtr;
typedef boost::shared_ptr< ::m3ctrl_msgs::M3HumanoidCmdRequest const> M3HumanoidCmdRequestConstPtr;


template <class ContainerAllocator>
struct M3HumanoidCmdResponse_ {
  typedef M3HumanoidCmdResponse_<ContainerAllocator> Type;

  M3HumanoidCmdResponse_()
  : response(0)
  {
  }

  M3HumanoidCmdResponse_(const ContainerAllocator& _alloc)
  : response(0)
  {
  }

  typedef int32_t _response_type;
  int32_t response;


  typedef boost::shared_ptr< ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct M3HumanoidCmdResponse
typedef  ::m3ctrl_msgs::M3HumanoidCmdResponse_<std::allocator<void> > M3HumanoidCmdResponse;

typedef boost::shared_ptr< ::m3ctrl_msgs::M3HumanoidCmdResponse> M3HumanoidCmdResponsePtr;
typedef boost::shared_ptr< ::m3ctrl_msgs::M3HumanoidCmdResponse const> M3HumanoidCmdResponseConstPtr;

struct M3HumanoidCmd
{

typedef M3HumanoidCmdRequest Request;
typedef M3HumanoidCmdResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct M3HumanoidCmd
} // namespace m3ctrl_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b43a3aea53346c3fbcd4954afa276df8";
  }

  static const char* value(const  ::m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb43a3aea53346c3fULL;
  static const uint64_t static_value2 = 0xbcd4954afa276df8ULL;
};

template<class ContainerAllocator>
struct DataType< ::m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3HumanoidCmdRequest";
  }

  static const char* value(const  ::m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 chain\n\
float32[] tq_desired\n\
uint8[] ctrl_mode\n\
float32[] q_stiffness\n\
float32[] q_desired\n\
float32[] qdot_desired\n\
float32[] q_slew_rate\n\
float32[] pwm_desired\n\
bool enable_motor\n\
\n\
";
  }

  static const char* value(const  ::m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f45f68e2feefb1307598e828e260b7d7";
  }

  static const char* value(const  ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf45f68e2feefb130ULL;
  static const uint64_t static_value2 = 0x7598e828e260b7d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3HumanoidCmdResponse";
  }

  static const char* value(const  ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 response\n\
\n\
";
  }

  static const char* value(const  ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.chain);
    stream.next(m.tq_desired);
    stream.next(m.ctrl_mode);
    stream.next(m.q_stiffness);
    stream.next(m.q_desired);
    stream.next(m.qdot_desired);
    stream.next(m.q_slew_rate);
    stream.next(m.pwm_desired);
    stream.next(m.enable_motor);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct M3HumanoidCmdRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.response);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct M3HumanoidCmdResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<m3ctrl_msgs::M3HumanoidCmd> {
  static const char* value() 
  {
    return "36825d9d1e10e133bf2112ce1e5afc9c";
  }

  static const char* value(const m3ctrl_msgs::M3HumanoidCmd&) { return value(); } 
};

template<>
struct DataType<m3ctrl_msgs::M3HumanoidCmd> {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3HumanoidCmd";
  }

  static const char* value(const m3ctrl_msgs::M3HumanoidCmd&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "36825d9d1e10e133bf2112ce1e5afc9c";
  }

  static const char* value(const m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3HumanoidCmd";
  }

  static const char* value(const m3ctrl_msgs::M3HumanoidCmdRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "36825d9d1e10e133bf2112ce1e5afc9c";
  }

  static const char* value(const m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3HumanoidCmd";
  }

  static const char* value(const m3ctrl_msgs::M3HumanoidCmdResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // M3CTRL_MSGS_SERVICE_M3HUMANOIDCMD_H

