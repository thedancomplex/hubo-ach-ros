/* Auto-generated by genmsg_cpp for file /home/wind/ROS_Packages/drc/hubo_ros_msgs/msg/HuboJointCommand.msg */
#ifndef HUBO_ROS_MSGS_MESSAGE_HUBOJOINTCOMMAND_H
#define HUBO_ROS_MSGS_MESSAGE_HUBOJOINTCOMMAND_H
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


namespace hubo_ros_msgs
{
template <class ContainerAllocator>
struct HuboJointCommand_ {
  typedef HuboJointCommand_<ContainerAllocator> Type;

  HuboJointCommand_()
  : name()
  , position(0.0)
  , velocity(0.0)
  {
  }

  HuboJointCommand_(const ContainerAllocator& _alloc)
  : name(_alloc)
  , position(0.0)
  , velocity(0.0)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;

  typedef double _position_type;
  double position;

  typedef double _velocity_type;
  double velocity;


  typedef boost::shared_ptr< ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HuboJointCommand
typedef  ::hubo_ros_msgs::HuboJointCommand_<std::allocator<void> > HuboJointCommand;

typedef boost::shared_ptr< ::hubo_ros_msgs::HuboJointCommand> HuboJointCommandPtr;
typedef boost::shared_ptr< ::hubo_ros_msgs::HuboJointCommand const> HuboJointCommandConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hubo_ros_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b99606a14f12f26b7a03d899b686753c";
  }

  static const char* value(const  ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb99606a14f12f26bULL;
  static const uint64_t static_value2 = 0x7a03d899b686753cULL;
};

template<class ContainerAllocator>
struct DataType< ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hubo_ros_msgs/HuboJointCommand";
  }

  static const char* value(const  ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string name\n\
float64 position\n\
float64 velocity\n\
\n\
";
  }

  static const char* value(const  ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.name);
    stream.next(m.position);
    stream.next(m.velocity);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HuboJointCommand_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hubo_ros_msgs::HuboJointCommand_<ContainerAllocator> & v) 
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
  }
};


} // namespace message_operations
} // namespace ros

#endif // HUBO_ROS_MSGS_MESSAGE_HUBOJOINTCOMMAND_H

