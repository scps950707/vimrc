!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
AIO_ALLDONE	/usr/include/aio.h	/^  AIO_ALLDONE$/;"	e	enum:__anon1
AIO_ALLDONE	/usr/include/aio.h	111;"	d
AIO_CANCELED	/usr/include/aio.h	/^  AIO_CANCELED,$/;"	e	enum:__anon1
AIO_CANCELED	/usr/include/aio.h	107;"	d
AIO_NOTCANCELED	/usr/include/aio.h	/^  AIO_NOTCANCELED,$/;"	e	enum:__anon1
AIO_NOTCANCELED	/usr/include/aio.h	109;"	d
LIO_NOP	/usr/include/aio.h	/^  LIO_NOP$/;"	e	enum:__anon2
LIO_NOP	/usr/include/aio.h	123;"	d
LIO_NOWAIT	/usr/include/aio.h	/^  LIO_NOWAIT$/;"	e	enum:__anon3
LIO_NOWAIT	/usr/include/aio.h	133;"	d
LIO_READ	/usr/include/aio.h	/^  LIO_READ,$/;"	e	enum:__anon2
LIO_READ	/usr/include/aio.h	119;"	d
LIO_WAIT	/usr/include/aio.h	/^  LIO_WAIT,$/;"	e	enum:__anon3
LIO_WAIT	/usr/include/aio.h	131;"	d
LIO_WRITE	/usr/include/aio.h	/^  LIO_WRITE,$/;"	e	enum:__anon2
LIO_WRITE	/usr/include/aio.h	121;"	d
_AIO_H	/usr/include/aio.h	23;"	d
__REDIRECT_NTH	/usr/include/aio.h	/^extern __ssize_t __REDIRECT_NTH (aio_return, (struct aiocb *__aiocbp),$/;"	p	signature:(aio_return, (struct aiocb *__aiocbp), aio_return64)
__REDIRECT_NTH	/usr/include/aio.h	/^extern int __REDIRECT_NTH (aio_cancel,$/;"	p	signature:(aio_cancel, (int __fildes, struct aiocb *__aiocbp), aio_cancel64)
__REDIRECT_NTH	/usr/include/aio.h	/^extern int __REDIRECT_NTH (aio_error, (const struct aiocb *__aiocbp),$/;"	p	signature:(aio_error, (const struct aiocb *__aiocbp), aio_error64)
__REDIRECT_NTH	/usr/include/aio.h	/^extern int __REDIRECT_NTH (aio_fsync,$/;"	p	signature:(aio_fsync, (int __operation, struct aiocb *__aiocbp), aio_fsync64)
__REDIRECT_NTH	/usr/include/aio.h	/^extern int __REDIRECT_NTH (aio_read, (struct aiocb *__aiocbp), aio_read64)$/;"	p	signature:(aio_read, (struct aiocb *__aiocbp), aio_read64)
__REDIRECT_NTH	/usr/include/aio.h	/^extern int __REDIRECT_NTH (aio_suspend,$/;"	p	signature:(aio_suspend, (const struct aiocb *const __list[], int __nent, const struct timespec *__restrict __timeout), aio_suspend64)
__REDIRECT_NTH	/usr/include/aio.h	/^extern int __REDIRECT_NTH (aio_write, (struct aiocb *__aiocbp), aio_write64)$/;"	p	signature:(aio_write, (struct aiocb *__aiocbp), aio_write64)
__REDIRECT_NTH	/usr/include/aio.h	/^extern int __REDIRECT_NTH (lio_listio,$/;"	p	signature:(lio_listio, (int __mode, struct aiocb *const __list[__restrict_arr], int __nent, struct sigevent *__restrict __sig), lio_listio64)
__abs_prio	/usr/include/aio.h	/^  int __abs_prio;$/;"	m	struct:aiocb	access:public
__abs_prio	/usr/include/aio.h	/^  int __abs_prio;$/;"	m	struct:aiocb64	access:public
__error_code	/usr/include/aio.h	/^  int __error_code;$/;"	m	struct:aiocb	access:public
__error_code	/usr/include/aio.h	/^  int __error_code;$/;"	m	struct:aiocb64	access:public
__glibc_reserved	/usr/include/aio.h	/^  char __glibc_reserved[32];$/;"	m	struct:aiocb	access:public
__glibc_reserved	/usr/include/aio.h	/^  char __glibc_reserved[32];$/;"	m	struct:aiocb64	access:public
__need_sigevent_t	/usr/include/aio.h	27;"	d
__need_timespec	/usr/include/aio.h	29;"	d
__next_prio	/usr/include/aio.h	/^  struct aiocb *__next_prio;$/;"	m	struct:aiocb	typeref:struct:aiocb::aiocb	access:public
__next_prio	/usr/include/aio.h	/^  struct aiocb *__next_prio;$/;"	m	struct:aiocb64	typeref:struct:aiocb64::aiocb	access:public
__pad	/usr/include/aio.h	/^  char __pad[sizeof (__off64_t) - sizeof (__off_t)];$/;"	m	struct:aiocb	access:public
__policy	/usr/include/aio.h	/^  int __policy;$/;"	m	struct:aiocb	access:public
__policy	/usr/include/aio.h	/^  int __policy;$/;"	m	struct:aiocb64	access:public
__return_value	/usr/include/aio.h	/^  __ssize_t __return_value;$/;"	m	struct:aiocb	access:public
__return_value	/usr/include/aio.h	/^  __ssize_t __return_value;$/;"	m	struct:aiocb64	access:public
aio_buf	/usr/include/aio.h	/^  volatile void *aio_buf;	\/* Location of buffer.  *\/$/;"	m	struct:aiocb	access:public
aio_buf	/usr/include/aio.h	/^  volatile void *aio_buf;	\/* Location of buffer.  *\/$/;"	m	struct:aiocb64	access:public
aio_cancel	/usr/include/aio.h	/^extern int aio_cancel (int __fildes, struct aiocb *__aiocbp) __THROW;$/;"	p	signature:(int __fildes, struct aiocb *__aiocbp)
aio_cancel	/usr/include/aio.h	214;"	d
aio_cancel64	/usr/include/aio.h	/^extern int aio_cancel64 (int __fildes, struct aiocb64 *__aiocbp) __THROW;$/;"	p	signature:(int __fildes, struct aiocb64 *__aiocbp)
aio_debug	/usr/include/aio.h	/^    int aio_debug;		\/* Not used.  *\/$/;"	m	struct:aioinit	access:public
aio_error	/usr/include/aio.h	/^extern int aio_error (const struct aiocb *__aiocbp) __THROW __nonnull ((1));$/;"	p	signature:(const struct aiocb *__aiocbp)
aio_error	/usr/include/aio.h	212;"	d
aio_error64	/usr/include/aio.h	/^extern int aio_error64 (const struct aiocb64 *__aiocbp)$/;"	p	signature:(const struct aiocb64 *__aiocbp)
aio_fildes	/usr/include/aio.h	/^  int aio_fildes;		\/* File desriptor.  *\/$/;"	m	struct:aiocb	access:public
aio_fildes	/usr/include/aio.h	/^  int aio_fildes;		\/* File desriptor.  *\/$/;"	m	struct:aiocb64	access:public
aio_fsync	/usr/include/aio.h	/^extern int aio_fsync (int __operation, struct aiocb *__aiocbp)$/;"	p	signature:(int __operation, struct aiocb *__aiocbp)
aio_fsync	/usr/include/aio.h	216;"	d
aio_fsync64	/usr/include/aio.h	/^extern int aio_fsync64 (int __operation, struct aiocb64 *__aiocbp)$/;"	p	signature:(int __operation, struct aiocb64 *__aiocbp)
aio_idle_time	/usr/include/aio.h	/^    int aio_idle_time;		\/* Number of seconds before idle thread$/;"	m	struct:aioinit	access:public
aio_init	/usr/include/aio.h	/^extern void aio_init (const struct aioinit *__init) __THROW __nonnull ((1));$/;"	p	signature:(const struct aioinit *__init)
aio_lio_opcode	/usr/include/aio.h	/^  int aio_lio_opcode;		\/* Operation to be performed.  *\/$/;"	m	struct:aiocb	access:public
aio_lio_opcode	/usr/include/aio.h	/^  int aio_lio_opcode;		\/* Operation to be performed.  *\/$/;"	m	struct:aiocb64	access:public
aio_locks	/usr/include/aio.h	/^    int aio_locks;		\/* Not used.  *\/$/;"	m	struct:aioinit	access:public
aio_nbytes	/usr/include/aio.h	/^  size_t aio_nbytes;		\/* Length of transfer.  *\/$/;"	m	struct:aiocb	access:public
aio_nbytes	/usr/include/aio.h	/^  size_t aio_nbytes;		\/* Length of transfer.  *\/$/;"	m	struct:aiocb64	access:public
aio_num	/usr/include/aio.h	/^    int aio_num;		\/* Number of expected simultanious requests. *\/$/;"	m	struct:aioinit	access:public
aio_numusers	/usr/include/aio.h	/^    int aio_numusers;		\/* Not used.  *\/$/;"	m	struct:aioinit	access:public
aio_offset	/usr/include/aio.h	/^  __off64_t aio_offset;		\/* File offset.  *\/$/;"	m	struct:aiocb	access:public
aio_offset	/usr/include/aio.h	/^  __off64_t aio_offset;		\/* File offset.  *\/$/;"	m	struct:aiocb64	access:public
aio_offset	/usr/include/aio.h	/^  __off_t aio_offset;		\/* File offset.  *\/$/;"	m	struct:aiocb	access:public
aio_read	/usr/include/aio.h	/^extern int aio_read (struct aiocb *__aiocbp) __THROW __nonnull ((1));$/;"	p	signature:(struct aiocb *__aiocbp)
aio_read	/usr/include/aio.h	209;"	d
aio_read64	/usr/include/aio.h	/^extern int aio_read64 (struct aiocb64 *__aiocbp) __THROW __nonnull ((1));$/;"	p	signature:(struct aiocb64 *__aiocbp)
aio_reqprio	/usr/include/aio.h	/^  int aio_reqprio;		\/* Request priority offset.  *\/$/;"	m	struct:aiocb	access:public
aio_reqprio	/usr/include/aio.h	/^  int aio_reqprio;		\/* Request priority offset.  *\/$/;"	m	struct:aiocb64	access:public
aio_reserved	/usr/include/aio.h	/^    int aio_reserved;$/;"	m	struct:aioinit	access:public
aio_return	/usr/include/aio.h	/^extern __ssize_t aio_return (struct aiocb *__aiocbp) __THROW __nonnull ((1));$/;"	p	signature:(struct aiocb *__aiocbp)
aio_return	/usr/include/aio.h	213;"	d
aio_return64	/usr/include/aio.h	/^extern __ssize_t aio_return64 (struct aiocb64 *__aiocbp)$/;"	p	signature:(struct aiocb64 *__aiocbp)
aio_sigevent	/usr/include/aio.h	/^  struct sigevent aio_sigevent;	\/* Signal number and value.  *\/$/;"	m	struct:aiocb	typeref:struct:aiocb::sigevent	access:public
aio_sigevent	/usr/include/aio.h	/^  struct sigevent aio_sigevent;	\/* Signal number and value.  *\/$/;"	m	struct:aiocb64	typeref:struct:aiocb64::sigevent	access:public
aio_suspend	/usr/include/aio.h	/^extern int aio_suspend (const struct aiocb *const __list[], int __nent,$/;"	p	signature:(const struct aiocb *const __list[], int __nent, const struct timespec *__restrict __timeout)
aio_suspend	/usr/include/aio.h	215;"	d
aio_suspend64	/usr/include/aio.h	/^extern int aio_suspend64 (const struct aiocb64 *const __list[], int __nent,$/;"	p	signature:(const struct aiocb64 *const __list[], int __nent, const struct timespec *__restrict __timeout)
aio_threads	/usr/include/aio.h	/^    int aio_threads;		\/* Maximal number of threads.  *\/$/;"	m	struct:aioinit	access:public
aio_usedba	/usr/include/aio.h	/^    int aio_usedba;		\/* Not used.  *\/$/;"	m	struct:aioinit	access:public
aio_write	/usr/include/aio.h	/^extern int aio_write (struct aiocb *__aiocbp) __THROW __nonnull ((1));$/;"	p	signature:(struct aiocb *__aiocbp)
aio_write	/usr/include/aio.h	210;"	d
aio_write64	/usr/include/aio.h	/^extern int aio_write64 (struct aiocb64 *__aiocbp) __THROW __nonnull ((1));$/;"	p	signature:(struct aiocb64 *__aiocbp)
aiocb	/usr/include/aio.h	/^struct aiocb$/;"	s
aiocb64	/usr/include/aio.h	/^struct aiocb64$/;"	s
aiocb64::__abs_prio	/usr/include/aio.h	/^  int __abs_prio;$/;"	m	struct:aiocb64	access:public
aiocb64::__error_code	/usr/include/aio.h	/^  int __error_code;$/;"	m	struct:aiocb64	access:public
aiocb64::__glibc_reserved	/usr/include/aio.h	/^  char __glibc_reserved[32];$/;"	m	struct:aiocb64	access:public
aiocb64::__next_prio	/usr/include/aio.h	/^  struct aiocb *__next_prio;$/;"	m	struct:aiocb64	typeref:struct:aiocb64::aiocb	access:public
aiocb64::__policy	/usr/include/aio.h	/^  int __policy;$/;"	m	struct:aiocb64	access:public
aiocb64::__return_value	/usr/include/aio.h	/^  __ssize_t __return_value;$/;"	m	struct:aiocb64	access:public
aiocb64::aio_buf	/usr/include/aio.h	/^  volatile void *aio_buf;	\/* Location of buffer.  *\/$/;"	m	struct:aiocb64	access:public
aiocb64::aio_fildes	/usr/include/aio.h	/^  int aio_fildes;		\/* File desriptor.  *\/$/;"	m	struct:aiocb64	access:public
aiocb64::aio_lio_opcode	/usr/include/aio.h	/^  int aio_lio_opcode;		\/* Operation to be performed.  *\/$/;"	m	struct:aiocb64	access:public
aiocb64::aio_nbytes	/usr/include/aio.h	/^  size_t aio_nbytes;		\/* Length of transfer.  *\/$/;"	m	struct:aiocb64	access:public
aiocb64::aio_offset	/usr/include/aio.h	/^  __off64_t aio_offset;		\/* File offset.  *\/$/;"	m	struct:aiocb64	access:public
aiocb64::aio_reqprio	/usr/include/aio.h	/^  int aio_reqprio;		\/* Request priority offset.  *\/$/;"	m	struct:aiocb64	access:public
aiocb64::aio_sigevent	/usr/include/aio.h	/^  struct sigevent aio_sigevent;	\/* Signal number and value.  *\/$/;"	m	struct:aiocb64	typeref:struct:aiocb64::sigevent	access:public
aiocb::__abs_prio	/usr/include/aio.h	/^  int __abs_prio;$/;"	m	struct:aiocb	access:public
aiocb::__error_code	/usr/include/aio.h	/^  int __error_code;$/;"	m	struct:aiocb	access:public
aiocb::__glibc_reserved	/usr/include/aio.h	/^  char __glibc_reserved[32];$/;"	m	struct:aiocb	access:public
aiocb::__next_prio	/usr/include/aio.h	/^  struct aiocb *__next_prio;$/;"	m	struct:aiocb	typeref:struct:aiocb::aiocb	access:public
aiocb::__pad	/usr/include/aio.h	/^  char __pad[sizeof (__off64_t) - sizeof (__off_t)];$/;"	m	struct:aiocb	access:public
aiocb::__policy	/usr/include/aio.h	/^  int __policy;$/;"	m	struct:aiocb	access:public
aiocb::__return_value	/usr/include/aio.h	/^  __ssize_t __return_value;$/;"	m	struct:aiocb	access:public
aiocb::aio_buf	/usr/include/aio.h	/^  volatile void *aio_buf;	\/* Location of buffer.  *\/$/;"	m	struct:aiocb	access:public
aiocb::aio_fildes	/usr/include/aio.h	/^  int aio_fildes;		\/* File desriptor.  *\/$/;"	m	struct:aiocb	access:public
aiocb::aio_lio_opcode	/usr/include/aio.h	/^  int aio_lio_opcode;		\/* Operation to be performed.  *\/$/;"	m	struct:aiocb	access:public
aiocb::aio_nbytes	/usr/include/aio.h	/^  size_t aio_nbytes;		\/* Length of transfer.  *\/$/;"	m	struct:aiocb	access:public
aiocb::aio_offset	/usr/include/aio.h	/^  __off64_t aio_offset;		\/* File offset.  *\/$/;"	m	struct:aiocb	access:public
aiocb::aio_offset	/usr/include/aio.h	/^  __off_t aio_offset;		\/* File offset.  *\/$/;"	m	struct:aiocb	access:public
aiocb::aio_reqprio	/usr/include/aio.h	/^  int aio_reqprio;		\/* Request priority offset.  *\/$/;"	m	struct:aiocb	access:public
aiocb::aio_sigevent	/usr/include/aio.h	/^  struct sigevent aio_sigevent;	\/* Signal number and value.  *\/$/;"	m	struct:aiocb	typeref:struct:aiocb::sigevent	access:public
aioinit	/usr/include/aio.h	/^struct aioinit$/;"	s
aioinit::aio_debug	/usr/include/aio.h	/^    int aio_debug;		\/* Not used.  *\/$/;"	m	struct:aioinit	access:public
aioinit::aio_idle_time	/usr/include/aio.h	/^    int aio_idle_time;		\/* Number of seconds before idle thread$/;"	m	struct:aioinit	access:public
aioinit::aio_locks	/usr/include/aio.h	/^    int aio_locks;		\/* Not used.  *\/$/;"	m	struct:aioinit	access:public
aioinit::aio_num	/usr/include/aio.h	/^    int aio_num;		\/* Number of expected simultanious requests. *\/$/;"	m	struct:aioinit	access:public
aioinit::aio_numusers	/usr/include/aio.h	/^    int aio_numusers;		\/* Not used.  *\/$/;"	m	struct:aioinit	access:public
aioinit::aio_reserved	/usr/include/aio.h	/^    int aio_reserved;$/;"	m	struct:aioinit	access:public
aioinit::aio_threads	/usr/include/aio.h	/^    int aio_threads;		\/* Maximal number of threads.  *\/$/;"	m	struct:aioinit	access:public
aioinit::aio_usedba	/usr/include/aio.h	/^    int aio_usedba;		\/* Not used.  *\/$/;"	m	struct:aioinit	access:public
lio_listio	/usr/include/aio.h	/^extern int lio_listio (int __mode,$/;"	p	signature:(int __mode, struct aiocb *const __list[__restrict_arr], int __nent, struct sigevent *__restrict __sig)
lio_listio	/usr/include/aio.h	211;"	d
lio_listio64	/usr/include/aio.h	/^extern int lio_listio64 (int __mode,$/;"	p	signature:(int __mode, struct aiocb64 *const __list[__restrict_arr], int __nent, struct sigevent *__restrict __sig)
