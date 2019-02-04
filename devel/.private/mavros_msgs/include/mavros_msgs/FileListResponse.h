// Generated by gencpp from file mavros_msgs/FileListResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_FILELISTRESPONSE_H
#define MAVROS_MSGS_MESSAGE_FILELISTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mavros_msgs/FileEntry.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct FileListResponse_
{
  typedef FileListResponse_<ContainerAllocator> Type;

  FileListResponse_()
    : list()
    , success(false)
    , r_errno(0)  {
    }
  FileListResponse_(const ContainerAllocator& _alloc)
    : list(_alloc)
    , success(false)
    , r_errno(0)  {
  (void)_alloc;
    }



   typedef std::vector< ::mavros_msgs::FileEntry_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::mavros_msgs::FileEntry_<ContainerAllocator> >::other >  _list_type;
  _list_type list;

   typedef uint8_t _success_type;
  _success_type success;

   typedef int32_t _r_errno_type;
  _r_errno_type r_errno;





  typedef boost::shared_ptr< ::mavros_msgs::FileListResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::FileListResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FileListResponse_

typedef ::mavros_msgs::FileListResponse_<std::allocator<void> > FileListResponse;

typedef boost::shared_ptr< ::mavros_msgs::FileListResponse > FileListResponsePtr;
typedef boost::shared_ptr< ::mavros_msgs::FileListResponse const> FileListResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::FileListResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::FileListResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/luis/2018-phd-luis-caiza/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileListResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileListResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileListResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileListResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::FileListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3cf4be333d40be8a08832e3b61ed4336";
  }

  static const char* value(const ::mavros_msgs::FileListResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3cf4be333d40be8aULL;
  static const uint64_t static_value2 = 0x08832e3b61ed4336ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::FileListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/FileListResponse";
  }

  static const char* value(const ::mavros_msgs::FileListResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::FileListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/FileEntry[] list\n\
bool success\n\
int32 r_errno\n\
\n\
\n\
================================================================================\n\
MSG: mavros_msgs/FileEntry\n\
# File/Dir information\n\
\n\
uint8 TYPE_FILE = 0\n\
uint8 TYPE_DIRECTORY = 1\n\
\n\
string name\n\
uint8 type\n\
uint64 size\n\
\n\
# Not supported by MAVLink FTP\n\
#time atime\n\
#int32 access_flags\n\
";
  }

  static const char* value(const ::mavros_msgs::FileListResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::FileListResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.list);
      stream.next(m.success);
      stream.next(m.r_errno);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FileListResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::FileListResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::FileListResponse_<ContainerAllocator>& v)
  {
    s << indent << "list[]" << std::endl;
    for (size_t i = 0; i < v.list.size(); ++i)
    {
      s << indent << "  list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::mavros_msgs::FileEntry_<ContainerAllocator> >::stream(s, indent + "    ", v.list[i]);
    }
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "r_errno: ";
    Printer<int32_t>::stream(s, indent + "  ", v.r_errno);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_FILELISTRESPONSE_H
