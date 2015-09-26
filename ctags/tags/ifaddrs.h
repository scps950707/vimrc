!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
_IFADDRS_H	/usr/include/ifaddrs.h	20;"	d
freeifaddrs	/usr/include/ifaddrs.h	/^extern void freeifaddrs (struct ifaddrs *__ifa)  __THROW;$/;"	p	signature:(struct ifaddrs *__ifa)
getifaddrs	/usr/include/ifaddrs.h	/^extern int getifaddrs (struct ifaddrs **__ifap) __THROW;$/;"	p	signature:(struct ifaddrs **__ifap)
ifa_addr	/usr/include/ifaddrs.h	/^  struct sockaddr *ifa_addr;	\/* Network address of this interface.  *\/$/;"	m	struct:ifaddrs	typeref:struct:ifaddrs::sockaddr	access:public
ifa_broadaddr	/usr/include/ifaddrs.h	50;"	d
ifa_data	/usr/include/ifaddrs.h	/^  void *ifa_data;		\/* Address-specific data (may be unused).  *\/$/;"	m	struct:ifaddrs	access:public
ifa_dstaddr	/usr/include/ifaddrs.h	53;"	d
ifa_flags	/usr/include/ifaddrs.h	/^  unsigned int ifa_flags;	\/* Flags as from SIOCGIFFLAGS ioctl.  *\/$/;"	m	struct:ifaddrs	access:public
ifa_ifu	/usr/include/ifaddrs.h	/^  } ifa_ifu;$/;"	m	struct:ifaddrs	typeref:union:ifaddrs::__anon1	access:public
ifa_name	/usr/include/ifaddrs.h	/^  char *ifa_name;		\/* Name of this network interface.  *\/$/;"	m	struct:ifaddrs	access:public
ifa_netmask	/usr/include/ifaddrs.h	/^  struct sockaddr *ifa_netmask; \/* Netmask of this interface.  *\/$/;"	m	struct:ifaddrs	typeref:struct:ifaddrs::sockaddr	access:public
ifa_next	/usr/include/ifaddrs.h	/^  struct ifaddrs *ifa_next;	\/* Pointer to the next structure.  *\/$/;"	m	struct:ifaddrs	typeref:struct:ifaddrs::ifaddrs	access:public
ifaddrs	/usr/include/ifaddrs.h	/^struct ifaddrs$/;"	s
ifaddrs::__anon1::ifu_broadaddr	/usr/include/ifaddrs.h	/^    struct sockaddr *ifu_broadaddr; \/* Broadcast address of this interface. *\/$/;"	m	union:ifaddrs::__anon1	typeref:struct:ifaddrs::__anon1::sockaddr	access:public
ifaddrs::__anon1::ifu_dstaddr	/usr/include/ifaddrs.h	/^    struct sockaddr *ifu_dstaddr; \/* Point-to-point destination address.  *\/$/;"	m	union:ifaddrs::__anon1	typeref:struct:ifaddrs::__anon1::sockaddr	access:public
ifaddrs::ifa_addr	/usr/include/ifaddrs.h	/^  struct sockaddr *ifa_addr;	\/* Network address of this interface.  *\/$/;"	m	struct:ifaddrs	typeref:struct:ifaddrs::sockaddr	access:public
ifaddrs::ifa_data	/usr/include/ifaddrs.h	/^  void *ifa_data;		\/* Address-specific data (may be unused).  *\/$/;"	m	struct:ifaddrs	access:public
ifaddrs::ifa_flags	/usr/include/ifaddrs.h	/^  unsigned int ifa_flags;	\/* Flags as from SIOCGIFFLAGS ioctl.  *\/$/;"	m	struct:ifaddrs	access:public
ifaddrs::ifa_ifu	/usr/include/ifaddrs.h	/^  } ifa_ifu;$/;"	m	struct:ifaddrs	typeref:union:ifaddrs::__anon1	access:public
ifaddrs::ifa_name	/usr/include/ifaddrs.h	/^  char *ifa_name;		\/* Name of this network interface.  *\/$/;"	m	struct:ifaddrs	access:public
ifaddrs::ifa_netmask	/usr/include/ifaddrs.h	/^  struct sockaddr *ifa_netmask; \/* Netmask of this interface.  *\/$/;"	m	struct:ifaddrs	typeref:struct:ifaddrs::sockaddr	access:public
ifaddrs::ifa_next	/usr/include/ifaddrs.h	/^  struct ifaddrs *ifa_next;	\/* Pointer to the next structure.  *\/$/;"	m	struct:ifaddrs	typeref:struct:ifaddrs::ifaddrs	access:public
ifu_broadaddr	/usr/include/ifaddrs.h	/^    struct sockaddr *ifu_broadaddr; \/* Broadcast address of this interface. *\/$/;"	m	union:ifaddrs::__anon1	typeref:struct:ifaddrs::__anon1::sockaddr	access:public
ifu_dstaddr	/usr/include/ifaddrs.h	/^    struct sockaddr *ifu_dstaddr; \/* Point-to-point destination address.  *\/$/;"	m	union:ifaddrs::__anon1	typeref:struct:ifaddrs::__anon1::sockaddr	access:public
