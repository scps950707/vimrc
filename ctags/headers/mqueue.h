!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
_MQUEUE_H	/usr/include/mqueue.h	19;"	d
__need_sigevent_t	/usr/include/mqueue.h	24;"	d
__need_timespec	/usr/include/mqueue.h	26;"	d
mq_close	/usr/include/mqueue.h	/^extern int mq_close (mqd_t __mqdes) __THROW;$/;"	p	signature:(mqd_t __mqdes)
mq_getattr	/usr/include/mqueue.h	/^extern int mq_getattr (mqd_t __mqdes, struct mq_attr *__mqstat)$/;"	p	signature:(mqd_t __mqdes, struct mq_attr *__mqstat)
mq_notify	/usr/include/mqueue.h	/^extern int mq_notify (mqd_t __mqdes, const struct sigevent *__notification)$/;"	p	signature:(mqd_t __mqdes, const struct sigevent *__notification)
mq_open	/usr/include/mqueue.h	/^extern mqd_t mq_open (const char *__name, int __oflag, ...)$/;"	p	signature:(const char *__name, int __oflag, ...)
mq_receive	/usr/include/mqueue.h	/^extern ssize_t mq_receive (mqd_t __mqdes, char *__msg_ptr, size_t __msg_len,$/;"	p	signature:(mqd_t __mqdes, char *__msg_ptr, size_t __msg_len, unsigned int *__msg_prio)
mq_send	/usr/include/mqueue.h	/^extern int mq_send (mqd_t __mqdes, const char *__msg_ptr, size_t __msg_len,$/;"	p	signature:(mqd_t __mqdes, const char *__msg_ptr, size_t __msg_len, unsigned int __msg_prio)
mq_setattr	/usr/include/mqueue.h	/^extern int mq_setattr (mqd_t __mqdes,$/;"	p	signature:(mqd_t __mqdes, const struct mq_attr *__restrict __mqstat, struct mq_attr *__restrict __omqstat)
mq_timedreceive	/usr/include/mqueue.h	/^extern ssize_t mq_timedreceive (mqd_t __mqdes, char *__restrict __msg_ptr,$/;"	p	signature:(mqd_t __mqdes, char *__restrict __msg_ptr, size_t __msg_len, unsigned int *__restrict __msg_prio, const struct timespec *__restrict __abs_timeout)
mq_timedsend	/usr/include/mqueue.h	/^extern int mq_timedsend (mqd_t __mqdes, const char *__msg_ptr,$/;"	p	signature:(mqd_t __mqdes, const char *__msg_ptr, size_t __msg_len, unsigned int __msg_prio, const struct timespec *__abs_timeout)
mq_unlink	/usr/include/mqueue.h	/^extern int mq_unlink (const char *__name) __THROW __nonnull ((1));$/;"	p	signature:(const char *__name)
