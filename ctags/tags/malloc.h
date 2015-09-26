!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
M_ARENA_MAX	/usr/include/malloc.h	118;"	d
M_ARENA_TEST	/usr/include/malloc.h	117;"	d
M_CHECK_ACTION	/usr/include/malloc.h	115;"	d
M_GRAIN	/usr/include/malloc.h	104;"	d
M_KEEP	/usr/include/malloc.h	107;"	d
M_MMAP_MAX	/usr/include/malloc.h	114;"	d
M_MMAP_THRESHOLD	/usr/include/malloc.h	113;"	d
M_MXFAST	/usr/include/malloc.h	98;"	d
M_NLBLKS	/usr/include/malloc.h	101;"	d
M_PERTURB	/usr/include/malloc.h	116;"	d
M_TOP_PAD	/usr/include/malloc.h	112;"	d
M_TRIM_THRESHOLD	/usr/include/malloc.h	111;"	d
_MALLOC_H	/usr/include/malloc.h	20;"	d
__MALLOC_DEPRECATED	/usr/include/malloc.h	28;"	d
__MALLOC_DEPRECATED	/usr/include/malloc.h	31;"	d
__MALLOC_HOOK_VOLATILE	/usr/include/malloc.h	27;"	d
__MALLOC_HOOK_VOLATILE	/usr/include/malloc.h	30;"	d
__after_morecore_hook	/usr/include/malloc.h	/^extern void (*__MALLOC_HOOK_VOLATILE __after_morecore_hook) (void);$/;"	x
__default_morecore	/usr/include/malloc.h	/^extern void *__default_morecore (ptrdiff_t __size)$/;"	p	signature:(ptrdiff_t __size)
__morecore	/usr/include/malloc.h	/^extern void *(*__morecore) (ptrdiff_t __size);$/;"	x
arena	/usr/include/malloc.h	/^  int arena;    \/* non-mmapped space allocated from system *\/$/;"	m	struct:mallinfo	access:public
calloc	/usr/include/malloc.h	/^extern void *calloc (size_t __nmemb, size_t __size)$/;"	p	signature:(size_t __nmemb, size_t __size)
cfree	/usr/include/malloc.h	/^extern void cfree (void *__ptr) __THROW;$/;"	p	signature:(void *__ptr)
fordblks	/usr/include/malloc.h	/^  int fordblks; \/* total free space *\/$/;"	m	struct:mallinfo	access:public
free	/usr/include/malloc.h	/^extern void free (void *__ptr) __THROW;$/;"	p	signature:(void *__ptr)
fsmblks	/usr/include/malloc.h	/^  int fsmblks;  \/* space available in freed fastbin blocks *\/$/;"	m	struct:mallinfo	access:public
hblkhd	/usr/include/malloc.h	/^  int hblkhd;   \/* space in mmapped regions *\/$/;"	m	struct:mallinfo	access:public
hblks	/usr/include/malloc.h	/^  int hblks;    \/* number of mmapped regions *\/$/;"	m	struct:mallinfo	access:public
keepcost	/usr/include/malloc.h	/^  int keepcost; \/* top-most, releasable (via malloc_trim) space *\/$/;"	m	struct:mallinfo	access:public
mallinfo	/usr/include/malloc.h	/^extern struct mallinfo mallinfo (void) __THROW;$/;"	p	signature:(void)
mallinfo	/usr/include/malloc.h	/^struct mallinfo$/;"	s
mallinfo::arena	/usr/include/malloc.h	/^  int arena;    \/* non-mmapped space allocated from system *\/$/;"	m	struct:mallinfo	access:public
mallinfo::fordblks	/usr/include/malloc.h	/^  int fordblks; \/* total free space *\/$/;"	m	struct:mallinfo	access:public
mallinfo::fsmblks	/usr/include/malloc.h	/^  int fsmblks;  \/* space available in freed fastbin blocks *\/$/;"	m	struct:mallinfo	access:public
mallinfo::hblkhd	/usr/include/malloc.h	/^  int hblkhd;   \/* space in mmapped regions *\/$/;"	m	struct:mallinfo	access:public
mallinfo::hblks	/usr/include/malloc.h	/^  int hblks;    \/* number of mmapped regions *\/$/;"	m	struct:mallinfo	access:public
mallinfo::keepcost	/usr/include/malloc.h	/^  int keepcost; \/* top-most, releasable (via malloc_trim) space *\/$/;"	m	struct:mallinfo	access:public
mallinfo::ordblks	/usr/include/malloc.h	/^  int ordblks;  \/* number of free chunks *\/$/;"	m	struct:mallinfo	access:public
mallinfo::smblks	/usr/include/malloc.h	/^  int smblks;   \/* number of fastbin blocks *\/$/;"	m	struct:mallinfo	access:public
mallinfo::uordblks	/usr/include/malloc.h	/^  int uordblks; \/* total allocated space *\/$/;"	m	struct:mallinfo	access:public
mallinfo::usmblks	/usr/include/malloc.h	/^  int usmblks;  \/* maximum total allocated space *\/$/;"	m	struct:mallinfo	access:public
malloc	/usr/include/malloc.h	/^extern void *malloc (size_t __size) __THROW __attribute_malloc__ __wur;$/;"	p	signature:(size_t __size)
malloc_get_state	/usr/include/malloc.h	/^extern void *malloc_get_state (void) __THROW;$/;"	p	signature:(void)
malloc_info	/usr/include/malloc.h	/^extern int malloc_info (int __options, FILE *__fp) __THROW;$/;"	p	signature:(int __options, FILE *__fp)
malloc_set_state	/usr/include/malloc.h	/^extern int malloc_set_state (void *__ptr) __THROW;$/;"	p	signature:(void *__ptr)
malloc_stats	/usr/include/malloc.h	/^extern void malloc_stats (void) __THROW;$/;"	p	signature:(void)
malloc_trim	/usr/include/malloc.h	/^extern int malloc_trim (size_t __pad) __THROW;$/;"	p	signature:(size_t __pad)
malloc_usable_size	/usr/include/malloc.h	/^extern size_t malloc_usable_size (void *__ptr) __THROW;$/;"	p	signature:(void *__ptr)
mallopt	/usr/include/malloc.h	/^extern int mallopt (int __param, int __val) __THROW;$/;"	p	signature:(int __param, int __val)
memalign	/usr/include/malloc.h	/^extern void *memalign (size_t __alignment, size_t __size)$/;"	p	signature:(size_t __alignment, size_t __size)
ordblks	/usr/include/malloc.h	/^  int ordblks;  \/* number of free chunks *\/$/;"	m	struct:mallinfo	access:public
pvalloc	/usr/include/malloc.h	/^extern void *pvalloc (size_t __size) __THROW __attribute_malloc__ __wur;$/;"	p	signature:(size_t __size)
realloc	/usr/include/malloc.h	/^extern void *realloc (void *__ptr, size_t __size)$/;"	p	signature:(void *__ptr, size_t __size)
smblks	/usr/include/malloc.h	/^  int smblks;   \/* number of fastbin blocks *\/$/;"	m	struct:mallinfo	access:public
uordblks	/usr/include/malloc.h	/^  int uordblks; \/* total allocated space *\/$/;"	m	struct:mallinfo	access:public
usmblks	/usr/include/malloc.h	/^  int usmblks;  \/* maximum total allocated space *\/$/;"	m	struct:mallinfo	access:public
valloc	/usr/include/malloc.h	/^extern void *valloc (size_t __size) __THROW __attribute_malloc__ __wur;$/;"	p	signature:(size_t __size)
