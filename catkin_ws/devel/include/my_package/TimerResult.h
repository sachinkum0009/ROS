// Generated by gencpp from file my_package/TimerResult.msg
// DO NOT EDIT!


#ifndef MY_PACKAGE_MESSAGE_TIMERRESULT_H
#define MY_PACKAGE_MESSAGE_TIMERRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_package
{
template <class ContainerAllocator>
struct TimerResult_
{
  typedef TimerResult_<ContainerAllocator> Type;

  TimerResult_()
    : timer_result()
    , count(0)  {
    }
  TimerResult_(const ContainerAllocator& _alloc)
    : timer_result()
    , count(0)  {
  (void)_alloc;
    }



   typedef ros::Duration _timer_result_type;
  _timer_result_type timer_result;

   typedef uint8_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::my_package::TimerResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_package::TimerResult_<ContainerAllocator> const> ConstPtr;

}; // struct TimerResult_

typedef ::my_package::TimerResult_<std::allocator<void> > TimerResult;

typedef boost::shared_ptr< ::my_package::TimerResult > TimerResultPtr;
typedef boost::shared_ptr< ::my_package::TimerResult const> TimerResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_package::TimerResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_package::TimerResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace my_package

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'my_package': ['/home/hunter/github_projects/ROS/catkin_ws/src/my_package/msg', '/home/hunter/github_projects/ROS/catkin_ws/devel/share/my_package/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::my_package::TimerResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_package::TimerResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_package::TimerResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_package::TimerResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_package::TimerResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_package::TimerResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_package::TimerResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2e485e994f8cdd029c0b35cee9543a6d";
  }

  static const char* value(const ::my_package::TimerResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2e485e994f8cdd02ULL;
  static const uint64_t static_value2 = 0x9c0b35cee9543a6dULL;
};

template<class ContainerAllocator>
struct DataType< ::my_package::TimerResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_package/TimerResult";
  }

  static const char* value(const ::my_package::TimerResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_package::TimerResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# result\n\
duration timer_result\n\
uint8 count\n\
";
  }

  static const char* value(const ::my_package::TimerResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_package::TimerResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timer_result);
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TimerResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_package::TimerResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_package::TimerResult_<ContainerAllocator>& v)
  {
    s << indent << "timer_result: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.timer_result);
    s << indent << "count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_PACKAGE_MESSAGE_TIMERRESULT_H
