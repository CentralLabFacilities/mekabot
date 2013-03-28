/* Auto-generated by genmsg_cpp for file /home/meka/mekabot/ROS_API/m3meka/ros/m3meka_msgs/msg/M3OmnibaseJoy.msg */
#ifndef M3MEKA_MSGS_MESSAGE_M3OMNIBASEJOY_H
#define M3MEKA_MSGS_MESSAGE_M3OMNIBASEJOY_H
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


namespace m3meka_msgs
{
template <class ContainerAllocator>
struct M3OmnibaseJoy_ {
  typedef M3OmnibaseJoy_<ContainerAllocator> Type;

  M3OmnibaseJoy_()
  : x(0.0)
  , y(0.0)
  , yaw(0.0)
  , button(0.0)
  , z(0.0)
  {
  }

  M3OmnibaseJoy_(const ContainerAllocator& _alloc)
  : x(0.0)
  , y(0.0)
  , yaw(0.0)
  , button(0.0)
  , z(0.0)
  {
  }

  typedef float _x_type;
  float x;

  typedef float _y_type;
  float y;

  typedef float _yaw_type;
  float yaw;

  typedef float _button_type;
  float button;

  typedef float _z_type;
  float z;


  typedef boost::shared_ptr< ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct M3OmnibaseJoy
typedef  ::m3meka_msgs::M3OmnibaseJoy_<std::allocator<void> > M3OmnibaseJoy;

typedef boost::shared_ptr< ::m3meka_msgs::M3OmnibaseJoy> M3OmnibaseJoyPtr;
typedef boost::shared_ptr< ::m3meka_msgs::M3OmnibaseJoy const> M3OmnibaseJoyConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace m3meka_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6719502035b93742f7b2585c261584a9";
  }

  static const char* value(const  ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6719502035b93742ULL;
  static const uint64_t static_value2 = 0xf7b2585c261584a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3meka_msgs/M3OmnibaseJoy";
  }

  static const char* value(const  ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 x\n\
float32 y\n\
float32 yaw\n\
float32 button\n\
float32 z\n\
\n\
\n\
";
  }

  static const char* value(const  ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.yaw);
    stream.next(m.button);
    stream.next(m.z);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct M3OmnibaseJoy_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::m3meka_msgs::M3OmnibaseJoy_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "button: ";
    Printer<float>::stream(s, indent + "  ", v.button);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
  }
};


} // namespace message_operations
} // namespace ros

#endif // M3MEKA_MSGS_MESSAGE_M3OMNIBASEJOY_H

