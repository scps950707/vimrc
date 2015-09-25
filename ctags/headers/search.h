!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
ACTION	/usr/include/search.h	/^ACTION;$/;"	t	typeref:enum:__anon1
ENTER	/usr/include/search.h	/^    ENTER$/;"	e	enum:__anon1
ENTRY	/usr/include/search.h	/^ENTRY;$/;"	t	typeref:struct:entry
FIND	/usr/include/search.h	/^    FIND,$/;"	e	enum:__anon1
VISIT	/usr/include/search.h	/^VISIT;$/;"	t	typeref:enum:__anon2
_ENTRY	/usr/include/search.h	/^struct _ENTRY;$/;"	x
_SEARCH_H	/usr/include/search.h	20;"	d
__ACTION_FN_T	/usr/include/search.h	143;"	d
__COMPAR_FN_T	/usr/include/search.h	53;"	d
__action_fn_t	/usr/include/search.h	/^typedef void (*__action_fn_t) (const void *__nodep, VISIT __value,$/;"	t
__compar_fn_t	/usr/include/search.h	/^typedef int (*__compar_fn_t) (const void *, const void *);$/;"	t
__free_fn_t	/usr/include/search.h	/^typedef void (*__free_fn_t) (void *__nodep);$/;"	t
__need_size_t	/usr/include/search.h	24;"	d
comparison_fn_t	/usr/include/search.h	/^typedef __compar_fn_t comparison_fn_t;$/;"	t
data	/usr/include/search.h	/^    void *data;$/;"	m	struct:entry	access:public
endorder	/usr/include/search.h	/^  endorder,$/;"	e	enum:__anon2
entry	/usr/include/search.h	/^typedef struct entry$/;"	s
entry::data	/usr/include/search.h	/^    void *data;$/;"	m	struct:entry	access:public
entry::key	/usr/include/search.h	/^    char *key;$/;"	m	struct:entry	access:public
filled	/usr/include/search.h	/^    unsigned int filled;$/;"	m	struct:hsearch_data	access:public
hcreate	/usr/include/search.h	/^extern int hcreate (size_t __nel) __THROW;$/;"	p	signature:(size_t __nel)
hcreate_r	/usr/include/search.h	/^extern int hcreate_r (size_t __nel, struct hsearch_data *__htab) __THROW;$/;"	p	signature:(size_t __nel, struct hsearch_data *__htab)
hdestroy	/usr/include/search.h	/^extern void hdestroy (void) __THROW;$/;"	p	signature:(void)
hdestroy_r	/usr/include/search.h	/^extern void hdestroy_r (struct hsearch_data *__htab) __THROW;$/;"	p	signature:(struct hsearch_data *__htab)
hsearch	/usr/include/search.h	/^extern ENTRY *hsearch (ENTRY __item, ACTION __action) __THROW;$/;"	p	signature:(ENTRY __item, ACTION __action)
hsearch_data	/usr/include/search.h	/^struct hsearch_data$/;"	s
hsearch_data::filled	/usr/include/search.h	/^    unsigned int filled;$/;"	m	struct:hsearch_data	access:public
hsearch_data::size	/usr/include/search.h	/^    unsigned int size;$/;"	m	struct:hsearch_data	access:public
hsearch_data::table	/usr/include/search.h	/^    struct _ENTRY *table;$/;"	m	struct:hsearch_data	typeref:struct:hsearch_data::_ENTRY	access:public
hsearch_r	/usr/include/search.h	/^extern int hsearch_r (ENTRY __item, ACTION __action, ENTRY **__retval,$/;"	p	signature:(ENTRY __item, ACTION __action, ENTRY **__retval, struct hsearch_data *__htab)
insque	/usr/include/search.h	/^extern void insque (void *__elem, void *__prev) __THROW;$/;"	p	signature:(void *__elem, void *__prev)
key	/usr/include/search.h	/^    char *key;$/;"	m	struct:entry	access:public
leaf	/usr/include/search.h	/^  leaf$/;"	e	enum:__anon2
lfind	/usr/include/search.h	/^extern void *lfind (const void *__key, const void *__base,$/;"	p	signature:(const void *__key, const void *__base, size_t *__nmemb, size_t __size, __compar_fn_t __compar)
lsearch	/usr/include/search.h	/^extern void *lsearch (const void *__key, void *__base,$/;"	p	signature:(const void *__key, void *__base, size_t *__nmemb, size_t __size, __compar_fn_t __compar)
postorder	/usr/include/search.h	/^  postorder,$/;"	e	enum:__anon2
preorder	/usr/include/search.h	/^  preorder,$/;"	e	enum:__anon2
q_back	/usr/include/search.h	/^    struct qelem *q_back;$/;"	m	struct:qelem	typeref:struct:qelem::qelem	access:public
q_data	/usr/include/search.h	/^    char q_data[1];$/;"	m	struct:qelem	access:public
q_forw	/usr/include/search.h	/^    struct qelem *q_forw;$/;"	m	struct:qelem	typeref:struct:qelem::qelem	access:public
qelem	/usr/include/search.h	/^struct qelem$/;"	s
qelem::q_back	/usr/include/search.h	/^    struct qelem *q_back;$/;"	m	struct:qelem	typeref:struct:qelem::qelem	access:public
qelem::q_data	/usr/include/search.h	/^    char q_data[1];$/;"	m	struct:qelem	access:public
qelem::q_forw	/usr/include/search.h	/^    struct qelem *q_forw;$/;"	m	struct:qelem	typeref:struct:qelem::qelem	access:public
remque	/usr/include/search.h	/^extern void remque (void *__elem) __THROW;$/;"	p	signature:(void *__elem)
size	/usr/include/search.h	/^    unsigned int size;$/;"	m	struct:hsearch_data	access:public
table	/usr/include/search.h	/^    struct _ENTRY *table;$/;"	m	struct:hsearch_data	typeref:struct:hsearch_data::_ENTRY	access:public
tdelete	/usr/include/search.h	/^extern void *tdelete (const void *__restrict __key,$/;"	p	signature:(const void *__restrict __key, void **__restrict __rootp, __compar_fn_t __compar)
tdestroy	/usr/include/search.h	/^extern void tdestroy (void *__root, __free_fn_t __freefct);$/;"	p	signature:(void *__root, __free_fn_t __freefct)
tfind	/usr/include/search.h	/^extern void *tfind (const void *__key, void *const *__rootp,$/;"	p	signature:(const void *__key, void *const *__rootp, __compar_fn_t __compar)
tsearch	/usr/include/search.h	/^extern void *tsearch (const void *__key, void **__rootp,$/;"	p	signature:(const void *__key, void **__rootp, __compar_fn_t __compar)
twalk	/usr/include/search.h	/^extern void twalk (const void *__root, __action_fn_t __action);$/;"	p	signature:(const void *__root, __action_fn_t __action)
