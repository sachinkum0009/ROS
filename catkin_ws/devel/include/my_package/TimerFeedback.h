// Generated by gencpp from file my_package/TimerFeedback.msg
// DO NOT EDIT!


#ifndef MY_PACKAGE_MESSAGE_TIMERFEEDBACK_H
#define MY_PACKAGE_MESSAGE_TIMERFEEDBACK_H


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
struct TimerFeedback_
{
  typedef TimerFeedback_<ContainerAllocator> Type;

  TimerFeedback_()
    : timer_feedback()
    , count_feedback(0)  {
    }
  TimerFeedback_(const ContainerAllocator& _alloc)
    : timer_feedback()
    , count_feedback(0)  {
  (void)_alloc;
    }



   typedef ros::Duration _timer_feedback_type;
  _timer_feedback_type timer_feedback;

   typedef uint8_t _count_feedback_type;
  _count_feedback_type count_feedback;





  typedef boost::shared_ptr< ::my_package::TimerFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_package::TimerFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct TimerFeedback_

typedef ::my_package::TimerFeedback_<std::allocator<void> > TimerFeedback;

typedef boost::shared_ptr< ::my_package::TimerFeedback > TimerFeedbackPtr;
typedef boost::shared_ptr< ::my_package::TimerFeedback const> TimerFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_package::TimerFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_package::TimerFeedback_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::my_package::TimerFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_package::TimerFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_package::TimerFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_package::TimerFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_package::TimerFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_package::TimerFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_package::TimerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "32d8cea043f28b962042d445c5824043";
  }

  static const char* value(const ::my_package::TimerFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x32d8cea043f28b96ULL;
  static const uint64_t static_value2 = 0x2042d445c5824043ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_package::TimerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_package/TimerFeedback";
  }

  static const char* value(const ::my_package::TimerFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_package::TimerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# feedback\n\
duration timer_feedback\n\
uint8 count_feedback\n\
";
  }

  static const char* value(const ::my_package::TimerFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_package::TimerFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timer_feedback);
      stream.next(m.count_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TimerFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_package::TimerFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_package::TimerFeedback_<ContainerAllocator>& v)
  {
    s << indent << "timer_feedback: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.timer_feedback);
    s << indent << "count_feedback: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.count_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_PACKAGE_MESSAGE_TIMERFEEDBACK_H
