!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
PTR_INT_TYPE	/usr/include/obstack.h	117;"	d
PTR_INT_TYPE	/usr/include/obstack.h	120;"	d
_OBSTACK_H	/usr/include/obstack.h	105;"	d
__BPTR_ALIGN	/usr/include/obstack.h	127;"	d
__PTR_ALIGN	/usr/include/obstack.h	136;"	d
__extension__	/usr/include/obstack.h	256;"	d
_obstack_begin	/usr/include/obstack.h	/^extern int _obstack_begin (struct obstack *, int, int,$/;"	p	signature:(struct obstack *, int, int, void *(*)(long), void (*)(void *))
_obstack_begin_1	/usr/include/obstack.h	/^extern int _obstack_begin_1 (struct obstack *, int, int,$/;"	p	signature:(struct obstack *, int, int, void *(*)(void *, long), void (*)(void *, void *), void *)
_obstack_chunk	/usr/include/obstack.h	/^struct _obstack_chunk           \/* Lives at front of each chunk. *\/$/;"	s
_obstack_chunk::contents	/usr/include/obstack.h	/^  char contents[4];             \/* objects begin here *\/$/;"	m	struct:_obstack_chunk	access:public
_obstack_chunk::limit	/usr/include/obstack.h	/^  char *limit;                  \/* 1 past end of this chunk *\/$/;"	m	struct:_obstack_chunk	access:public
_obstack_chunk::prev	/usr/include/obstack.h	/^  struct _obstack_chunk *prev;  \/* address of prior chunk or NULL *\/$/;"	m	struct:_obstack_chunk	typeref:struct:_obstack_chunk::_obstack_chunk	access:public
_obstack_memory_used	/usr/include/obstack.h	/^extern int _obstack_memory_used (struct obstack *);$/;"	p	signature:(struct obstack *)
_obstack_newchunk	/usr/include/obstack.h	/^extern void _obstack_newchunk (struct obstack *, int);$/;"	p	signature:(struct obstack *, int)
alignment_mask	/usr/include/obstack.h	/^  int alignment_mask;           \/* Mask of alignment for each object. *\/$/;"	m	struct:obstack	access:public
alloc_failed	/usr/include/obstack.h	/^  unsigned alloc_failed : 1;      \/* No longer used, as we now call the failed$/;"	m	struct:obstack	access:public
chunk	/usr/include/obstack.h	/^  struct _obstack_chunk *chunk; \/* address of current struct obstack_chunk *\/$/;"	m	struct:obstack	typeref:struct:obstack::_obstack_chunk	access:public
chunk_limit	/usr/include/obstack.h	/^  char *chunk_limit;            \/* address of char after current chunk *\/$/;"	m	struct:obstack	access:public
chunk_size	/usr/include/obstack.h	/^  long chunk_size;              \/* preferred size to allocate chunks in *\/$/;"	m	struct:obstack	access:public
chunkfun	/usr/include/obstack.h	/^  struct _obstack_chunk *(*chunkfun) (void *, long);$/;"	m	struct:obstack	typeref:struct:obstack::chunkfun	access:public
contents	/usr/include/obstack.h	/^  char contents[4];             \/* objects begin here *\/$/;"	m	struct:_obstack_chunk	access:public
extra_arg	/usr/include/obstack.h	/^  void *extra_arg;              \/* first arg for chunk alloc\/dealloc funcs *\/$/;"	m	struct:obstack	access:public
freefun	/usr/include/obstack.h	/^  void (*freefun) (void *, struct _obstack_chunk *);$/;"	m	struct:obstack	access:public
limit	/usr/include/obstack.h	/^  char *limit;                  \/* 1 past end of this chunk *\/$/;"	m	struct:_obstack_chunk	access:public
maybe_empty_object	/usr/include/obstack.h	/^  unsigned maybe_empty_object : 1; \/* There is a possibility that the current$/;"	m	struct:obstack	access:public
next_free	/usr/include/obstack.h	/^  char *next_free;              \/* where to add next char to current object *\/$/;"	m	struct:obstack	access:public
object_base	/usr/include/obstack.h	/^  char *object_base;            \/* address of object we are building *\/$/;"	m	struct:obstack	access:public
obstack	/usr/include/obstack.h	/^struct obstack          \/* control current object in current chunk *\/$/;"	s
obstack::__anon1::tempint	/usr/include/obstack.h	/^    PTR_INT_TYPE tempint;$/;"	m	union:obstack::__anon1	access:public
obstack::__anon1::tempptr	/usr/include/obstack.h	/^    void *tempptr;$/;"	m	union:obstack::__anon1	access:public
obstack::alignment_mask	/usr/include/obstack.h	/^  int alignment_mask;           \/* Mask of alignment for each object. *\/$/;"	m	struct:obstack	access:public
obstack::alloc_failed	/usr/include/obstack.h	/^  unsigned alloc_failed : 1;      \/* No longer used, as we now call the failed$/;"	m	struct:obstack	access:public
obstack::chunk	/usr/include/obstack.h	/^  struct _obstack_chunk *chunk; \/* address of current struct obstack_chunk *\/$/;"	m	struct:obstack	typeref:struct:obstack::_obstack_chunk	access:public
obstack::chunk_limit	/usr/include/obstack.h	/^  char *chunk_limit;            \/* address of char after current chunk *\/$/;"	m	struct:obstack	access:public
obstack::chunk_size	/usr/include/obstack.h	/^  long chunk_size;              \/* preferred size to allocate chunks in *\/$/;"	m	struct:obstack	access:public
obstack::chunkfun	/usr/include/obstack.h	/^  struct _obstack_chunk *(*chunkfun) (void *, long);$/;"	m	struct:obstack	typeref:struct:obstack::chunkfun	access:public
obstack::extra_arg	/usr/include/obstack.h	/^  void *extra_arg;              \/* first arg for chunk alloc\/dealloc funcs *\/$/;"	m	struct:obstack	access:public
obstack::freefun	/usr/include/obstack.h	/^  void (*freefun) (void *, struct _obstack_chunk *);$/;"	m	struct:obstack	access:public
obstack::maybe_empty_object	/usr/include/obstack.h	/^  unsigned maybe_empty_object : 1; \/* There is a possibility that the current$/;"	m	struct:obstack	access:public
obstack::next_free	/usr/include/obstack.h	/^  char *next_free;              \/* where to add next char to current object *\/$/;"	m	struct:obstack	access:public
obstack::object_base	/usr/include/obstack.h	/^  char *object_base;            \/* address of object we are building *\/$/;"	m	struct:obstack	access:public
obstack::temp	/usr/include/obstack.h	/^  } temp;                       \/* Temporary for some macros.  *\/$/;"	m	struct:obstack	typeref:union:obstack::__anon1	access:public
obstack::use_extra_arg	/usr/include/obstack.h	/^  unsigned use_extra_arg : 1;     \/* chunk alloc\/dealloc funcs take extra arg *\/$/;"	m	struct:obstack	access:public
obstack_1grow	/usr/include/obstack.h	311;"	d
obstack_1grow	/usr/include/obstack.h	443;"	d
obstack_1grow_fast	/usr/include/obstack.h	245;"	d
obstack_alignment_mask	/usr/include/obstack.h	216;"	d
obstack_alloc	/usr/include/obstack.h	360;"	d
obstack_alloc	/usr/include/obstack.h	470;"	d
obstack_alloc_failed_handler	/usr/include/obstack.h	/^extern void (*obstack_alloc_failed_handler) (void);$/;"	x
obstack_base	/usr/include/obstack.h	204;"	d
obstack_begin	/usr/include/obstack.h	224;"	d
obstack_blank	/usr/include/obstack.h	351;"	d
obstack_blank	/usr/include/obstack.h	464;"	d
obstack_blank_fast	/usr/include/obstack.h	247;"	d
obstack_chunk_size	/usr/include/obstack.h	208;"	d
obstack_chunkfun	/usr/include/obstack.h	239;"	d
obstack_copy	/usr/include/obstack.h	366;"	d
obstack_copy	/usr/include/obstack.h	473;"	d
obstack_copy0	/usr/include/obstack.h	372;"	d
obstack_copy0	/usr/include/obstack.h	476;"	d
obstack_empty_p	/usr/include/obstack.h	282;"	d
obstack_empty_p	/usr/include/obstack.h	411;"	d
obstack_exit_failure	/usr/include/obstack.h	/^extern int obstack_exit_failure;$/;"	x
obstack_finish	/usr/include/obstack.h	380;"	d
obstack_finish	/usr/include/obstack.h	479;"	d
obstack_free	/usr/include/obstack.h	/^void obstack_free (struct obstack *__obstack, void *__glibc_block);$/;"	p	signature:(struct obstack *__obstack, void *__glibc_block)
obstack_free	/usr/include/obstack.h	395;"	d
obstack_free	/usr/include/obstack.h	493;"	d
obstack_freefun	/usr/include/obstack.h	242;"	d
obstack_grow	/usr/include/obstack.h	290;"	d
obstack_grow	/usr/include/obstack.h	428;"	d
obstack_grow0	/usr/include/obstack.h	300;"	d
obstack_grow0	/usr/include/obstack.h	435;"	d
obstack_init	/usr/include/obstack.h	219;"	d
obstack_int_grow	/usr/include/obstack.h	330;"	d
obstack_int_grow	/usr/include/obstack.h	453;"	d
obstack_int_grow_fast	/usr/include/obstack.h	344;"	d
obstack_int_grow_fast	/usr/include/obstack.h	461;"	d
obstack_make_room	/usr/include/obstack.h	274;"	d
obstack_make_room	/usr/include/obstack.h	423;"	d
obstack_memory_used	/usr/include/obstack.h	249;"	d
obstack_next_free	/usr/include/obstack.h	212;"	d
obstack_object_size	/usr/include/obstack.h	264;"	d
obstack_object_size	/usr/include/obstack.h	405;"	d
obstack_ptr_grow	/usr/include/obstack.h	323;"	d
obstack_ptr_grow	/usr/include/obstack.h	448;"	d
obstack_ptr_grow_fast	/usr/include/obstack.h	337;"	d
obstack_ptr_grow_fast	/usr/include/obstack.h	458;"	d
obstack_room	/usr/include/obstack.h	269;"	d
obstack_room	/usr/include/obstack.h	408;"	d
obstack_specify_allocation	/usr/include/obstack.h	229;"	d
obstack_specify_allocation_with_arg	/usr/include/obstack.h	234;"	d
prev	/usr/include/obstack.h	/^  struct _obstack_chunk *prev;  \/* address of prior chunk or NULL *\/$/;"	m	struct:_obstack_chunk	typeref:struct:_obstack_chunk::_obstack_chunk	access:public
temp	/usr/include/obstack.h	/^  } temp;                       \/* Temporary for some macros.  *\/$/;"	m	struct:obstack	typeref:union:obstack::__anon1	access:public
tempint	/usr/include/obstack.h	/^    PTR_INT_TYPE tempint;$/;"	m	union:obstack::__anon1	access:public
tempptr	/usr/include/obstack.h	/^    void *tempptr;$/;"	m	union:obstack::__anon1	access:public
use_extra_arg	/usr/include/obstack.h	/^  unsigned use_extra_arg : 1;     \/* chunk alloc\/dealloc funcs take extra arg *\/$/;"	m	struct:obstack	access:public
