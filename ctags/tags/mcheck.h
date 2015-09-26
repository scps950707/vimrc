!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
MCHECK_DISABLED	/usr/include/mcheck.h	/^  MCHECK_DISABLED = -1,         \/* Consistency checking is not turned on.  *\/$/;"	e	enum:mcheck_status
MCHECK_FREE	/usr/include/mcheck.h	/^  MCHECK_FREE,                  \/* Block freed twice.  *\/$/;"	e	enum:mcheck_status
MCHECK_HEAD	/usr/include/mcheck.h	/^  MCHECK_HEAD,                  \/* Memory before the block was clobbered.  *\/$/;"	e	enum:mcheck_status
MCHECK_OK	/usr/include/mcheck.h	/^  MCHECK_OK,                    \/* Block is fine.  *\/$/;"	e	enum:mcheck_status
MCHECK_TAIL	/usr/include/mcheck.h	/^  MCHECK_TAIL                   \/* Memory after the block was clobbered.  *\/$/;"	e	enum:mcheck_status
_MCHECK_H	/usr/include/mcheck.h	19;"	d
mcheck	/usr/include/mcheck.h	/^extern int mcheck (void (*__abortfunc)(enum mcheck_status)) __THROW;$/;"	p	signature:(void (*__abortfunc)(enum mcheck_status))
mcheck_check_all	/usr/include/mcheck.h	/^extern void mcheck_check_all (void);$/;"	p	signature:(void)
mcheck_pedantic	/usr/include/mcheck.h	/^extern int mcheck_pedantic (void (*__abortfunc)(enum mcheck_status)) __THROW;$/;"	p	signature:(void (*__abortfunc)(enum mcheck_status))
mcheck_status	/usr/include/mcheck.h	/^enum mcheck_status$/;"	g
mprobe	/usr/include/mcheck.h	/^extern enum mcheck_status mprobe (void *__ptr) __THROW;$/;"	p	signature:(void *__ptr)
mtrace	/usr/include/mcheck.h	/^extern void mtrace (void) __THROW;$/;"	p	signature:(void)
muntrace	/usr/include/mcheck.h	/^extern void muntrace (void) __THROW;$/;"	p	signature:(void)
