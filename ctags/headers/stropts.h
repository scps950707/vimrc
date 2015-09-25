!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
_STROPTS_H	/usr/include/stropts.h	19;"	d
__gid_t_defined	/usr/include/stropts.h	27;"	d
__uid_t_defined	/usr/include/stropts.h	32;"	d
fattach	/usr/include/stropts.h	/^extern int fattach (int __fildes, const char *__path) __THROW;$/;"	p	signature:(int __fildes, const char *__path)
fdetach	/usr/include/stropts.h	/^extern int fdetach (const char *__path) __THROW;$/;"	p	signature:(const char *__path)
getmsg	/usr/include/stropts.h	/^extern int getmsg (int __fildes, struct strbuf *__restrict __ctlptr,$/;"	p	signature:(int __fildes, struct strbuf *__restrict __ctlptr, struct strbuf *__restrict __dataptr, int *__restrict __flagsp)
getpmsg	/usr/include/stropts.h	/^extern int getpmsg (int __fildes, struct strbuf *__restrict __ctlptr,$/;"	p	signature:(int __fildes, struct strbuf *__restrict __ctlptr, struct strbuf *__restrict __dataptr, int *__restrict __bandp, int *__restrict __flagsp)
gid_t	/usr/include/stropts.h	/^typedef __gid_t gid_t;$/;"	t
ioctl	/usr/include/stropts.h	/^extern int ioctl (int __fd, unsigned long int __request, ...) __THROW;$/;"	p	signature:(int __fd, unsigned long int __request, ...)
isastream	/usr/include/stropts.h	/^extern int isastream (int __fildes) __THROW;$/;"	p	signature:(int __fildes)
putmsg	/usr/include/stropts.h	/^extern int putmsg (int __fildes, const struct strbuf *__ctlptr,$/;"	p	signature:(int __fildes, const struct strbuf *__ctlptr, const struct strbuf *__dataptr, int __flags)
putpmsg	/usr/include/stropts.h	/^extern int putpmsg (int __fildes, const struct strbuf *__ctlptr,$/;"	p	signature:(int __fildes, const struct strbuf *__ctlptr, const struct strbuf *__dataptr, int __band, int __flags)
t_scalar_t	/usr/include/stropts.h	/^typedef __t_scalar_t t_scalar_t;$/;"	t
t_uscalar_t	/usr/include/stropts.h	/^typedef __t_uscalar_t t_uscalar_t;$/;"	t
uid_t	/usr/include/stropts.h	/^typedef __uid_t uid_t;$/;"	t
