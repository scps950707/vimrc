!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
FTS	/usr/include/fts.h	/^} FTS;$/;"	t	typeref:struct:__anon1
FTSENT	/usr/include/fts.h	/^} FTSENT;$/;"	t	typeref:struct:_ftsent
FTS_AGAIN	/usr/include/fts.h	112;"	d
FTS_COMFOLLOW	/usr/include/fts.h	56;"	d
FTS_D	/usr/include/fts.h	92;"	d
FTS_DC	/usr/include/fts.h	93;"	d
FTS_DEFAULT	/usr/include/fts.h	94;"	d
FTS_DNR	/usr/include/fts.h	95;"	d
FTS_DONTCHDIR	/usr/include/fts.h	108;"	d
FTS_DOT	/usr/include/fts.h	96;"	d
FTS_DP	/usr/include/fts.h	97;"	d
FTS_ERR	/usr/include/fts.h	98;"	d
FTS_F	/usr/include/fts.h	99;"	d
FTS_FOLLOW	/usr/include/fts.h	113;"	d
FTS_INIT	/usr/include/fts.h	100;"	d
FTS_LOGICAL	/usr/include/fts.h	57;"	d
FTS_NAMEONLY	/usr/include/fts.h	66;"	d
FTS_NOCHDIR	/usr/include/fts.h	58;"	d
FTS_NOINSTR	/usr/include/fts.h	114;"	d
FTS_NOSTAT	/usr/include/fts.h	59;"	d
FTS_NS	/usr/include/fts.h	101;"	d
FTS_NSOK	/usr/include/fts.h	102;"	d
FTS_OPTIONMASK	/usr/include/fts.h	64;"	d
FTS_PHYSICAL	/usr/include/fts.h	60;"	d
FTS_ROOTLEVEL	/usr/include/fts.h	89;"	d
FTS_ROOTPARENTLEVEL	/usr/include/fts.h	88;"	d
FTS_SEEDOT	/usr/include/fts.h	61;"	d
FTS_SKIP	/usr/include/fts.h	115;"	d
FTS_SL	/usr/include/fts.h	103;"	d
FTS_SLNONE	/usr/include/fts.h	104;"	d
FTS_STOP	/usr/include/fts.h	67;"	d
FTS_SYMFOLLOW	/usr/include/fts.h	109;"	d
FTS_W	/usr/include/fts.h	105;"	d
FTS_WHITEOUT	/usr/include/fts.h	63;"	d
FTS_XDEV	/usr/include/fts.h	62;"	d
_FTS_H	/usr/include/fts.h	33;"	d
__anon1::fts_array	/usr/include/fts.h	/^	struct _ftsent **fts_array;	\/* sort array *\/$/;"	m	struct:__anon1	typeref:struct:__anon1::_ftsent	access:public
__anon1::fts_child	/usr/include/fts.h	/^	struct _ftsent *fts_child;	\/* linked list of children *\/$/;"	m	struct:__anon1	typeref:struct:__anon1::_ftsent	access:public
__anon1::fts_compar	/usr/include/fts.h	/^	int (*fts_compar) (const void *, const void *); \/* compare fn *\/$/;"	m	struct:__anon1	access:public
__anon1::fts_cur	/usr/include/fts.h	/^	struct _ftsent *fts_cur;	\/* current node *\/$/;"	m	struct:__anon1	typeref:struct:__anon1::_ftsent	access:public
__anon1::fts_dev	/usr/include/fts.h	/^	dev_t fts_dev;			\/* starting device # *\/$/;"	m	struct:__anon1	access:public
__anon1::fts_nitems	/usr/include/fts.h	/^	int fts_nitems;			\/* elements in the sort array *\/$/;"	m	struct:__anon1	access:public
__anon1::fts_options	/usr/include/fts.h	/^	int fts_options;		\/* fts_open options, global flags *\/$/;"	m	struct:__anon1	access:public
__anon1::fts_path	/usr/include/fts.h	/^	char *fts_path;			\/* path for this descent *\/$/;"	m	struct:__anon1	access:public
__anon1::fts_pathlen	/usr/include/fts.h	/^	int fts_pathlen;		\/* sizeof(path) *\/$/;"	m	struct:__anon1	access:public
__anon1::fts_rfd	/usr/include/fts.h	/^	int fts_rfd;			\/* fd for root *\/$/;"	m	struct:__anon1	access:public
_ftsent	/usr/include/fts.h	/^typedef struct _ftsent {$/;"	s
_ftsent::fts_accpath	/usr/include/fts.h	/^	char *fts_accpath;		\/* access path *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_cycle	/usr/include/fts.h	/^	struct _ftsent *fts_cycle;	\/* cycle node *\/$/;"	m	struct:_ftsent	typeref:struct:_ftsent::_ftsent	access:public
_ftsent::fts_dev	/usr/include/fts.h	/^	dev_t fts_dev;			\/* device *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_errno	/usr/include/fts.h	/^	int fts_errno;			\/* errno for this node *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_flags	/usr/include/fts.h	/^	u_short fts_flags;		\/* private flags for FTSENT structure *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_info	/usr/include/fts.h	/^	u_short fts_info;		\/* user flags for FTSENT structure *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_ino	/usr/include/fts.h	/^	ino_t fts_ino;			\/* inode *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_instr	/usr/include/fts.h	/^	u_short fts_instr;		\/* fts_set() instructions *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_level	/usr/include/fts.h	/^	short fts_level;		\/* depth (-1 to N) *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_link	/usr/include/fts.h	/^	struct _ftsent *fts_link;	\/* next file in directory *\/$/;"	m	struct:_ftsent	typeref:struct:_ftsent::_ftsent	access:public
_ftsent::fts_name	/usr/include/fts.h	/^	char fts_name[1];		\/* file name *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_namelen	/usr/include/fts.h	/^	u_short fts_namelen;		\/* strlen(fts_name) *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_nlink	/usr/include/fts.h	/^	nlink_t fts_nlink;		\/* link count *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_number	/usr/include/fts.h	/^	long fts_number;	        \/* local numeric value *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_parent	/usr/include/fts.h	/^	struct _ftsent *fts_parent;	\/* parent directory *\/$/;"	m	struct:_ftsent	typeref:struct:_ftsent::_ftsent	access:public
_ftsent::fts_path	/usr/include/fts.h	/^	char *fts_path;			\/* root path *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_pathlen	/usr/include/fts.h	/^	u_short fts_pathlen;		\/* strlen(fts_path) *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_pointer	/usr/include/fts.h	/^	void *fts_pointer;	        \/* local address value *\/$/;"	m	struct:_ftsent	access:public
_ftsent::fts_statp	/usr/include/fts.h	/^	struct stat *fts_statp;		\/* stat(2) information *\/$/;"	m	struct:_ftsent	typeref:struct:_ftsent::stat	access:public
_ftsent::fts_symfd	/usr/include/fts.h	/^	int fts_symfd;			\/* fd for symlink *\/$/;"	m	struct:_ftsent	access:public
fts_accpath	/usr/include/fts.h	/^	char *fts_accpath;		\/* access path *\/$/;"	m	struct:_ftsent	access:public
fts_array	/usr/include/fts.h	/^	struct _ftsent **fts_array;	\/* sort array *\/$/;"	m	struct:__anon1	typeref:struct:__anon1::_ftsent	access:public
fts_child	/usr/include/fts.h	/^	struct _ftsent *fts_child;	\/* linked list of children *\/$/;"	m	struct:__anon1	typeref:struct:__anon1::_ftsent	access:public
fts_children	/usr/include/fts.h	/^FTSENT	*fts_children (FTS *, int);$/;"	p	signature:(FTS *, int)
fts_close	/usr/include/fts.h	/^int	 fts_close (FTS *);$/;"	p	signature:(FTS *)
fts_compar	/usr/include/fts.h	/^	int (*fts_compar) (const void *, const void *); \/* compare fn *\/$/;"	m	struct:__anon1	access:public
fts_cur	/usr/include/fts.h	/^	struct _ftsent *fts_cur;	\/* current node *\/$/;"	m	struct:__anon1	typeref:struct:__anon1::_ftsent	access:public
fts_cycle	/usr/include/fts.h	/^	struct _ftsent *fts_cycle;	\/* cycle node *\/$/;"	m	struct:_ftsent	typeref:struct:_ftsent::_ftsent	access:public
fts_dev	/usr/include/fts.h	/^	dev_t fts_dev;			\/* device *\/$/;"	m	struct:_ftsent	access:public
fts_dev	/usr/include/fts.h	/^	dev_t fts_dev;			\/* starting device # *\/$/;"	m	struct:__anon1	access:public
fts_errno	/usr/include/fts.h	/^	int fts_errno;			\/* errno for this node *\/$/;"	m	struct:_ftsent	access:public
fts_flags	/usr/include/fts.h	/^	u_short fts_flags;		\/* private flags for FTSENT structure *\/$/;"	m	struct:_ftsent	access:public
fts_info	/usr/include/fts.h	/^	u_short fts_info;		\/* user flags for FTSENT structure *\/$/;"	m	struct:_ftsent	access:public
fts_ino	/usr/include/fts.h	/^	ino_t fts_ino;			\/* inode *\/$/;"	m	struct:_ftsent	access:public
fts_instr	/usr/include/fts.h	/^	u_short fts_instr;		\/* fts_set() instructions *\/$/;"	m	struct:_ftsent	access:public
fts_level	/usr/include/fts.h	/^	short fts_level;		\/* depth (-1 to N) *\/$/;"	m	struct:_ftsent	access:public
fts_link	/usr/include/fts.h	/^	struct _ftsent *fts_link;	\/* next file in directory *\/$/;"	m	struct:_ftsent	typeref:struct:_ftsent::_ftsent	access:public
fts_name	/usr/include/fts.h	/^	char fts_name[1];		\/* file name *\/$/;"	m	struct:_ftsent	access:public
fts_namelen	/usr/include/fts.h	/^	u_short fts_namelen;		\/* strlen(fts_name) *\/$/;"	m	struct:_ftsent	access:public
fts_nitems	/usr/include/fts.h	/^	int fts_nitems;			\/* elements in the sort array *\/$/;"	m	struct:__anon1	access:public
fts_nlink	/usr/include/fts.h	/^	nlink_t fts_nlink;		\/* link count *\/$/;"	m	struct:_ftsent	access:public
fts_number	/usr/include/fts.h	/^	long fts_number;	        \/* local numeric value *\/$/;"	m	struct:_ftsent	access:public
fts_open	/usr/include/fts.h	/^FTS	*fts_open (char * const *, int,$/;"	p	signature:(char * const *, int, int (*)(const FTSENT **, const FTSENT **))
fts_options	/usr/include/fts.h	/^	int fts_options;		\/* fts_open options, global flags *\/$/;"	m	struct:__anon1	access:public
fts_parent	/usr/include/fts.h	/^	struct _ftsent *fts_parent;	\/* parent directory *\/$/;"	m	struct:_ftsent	typeref:struct:_ftsent::_ftsent	access:public
fts_path	/usr/include/fts.h	/^	char *fts_path;			\/* path for this descent *\/$/;"	m	struct:__anon1	access:public
fts_path	/usr/include/fts.h	/^	char *fts_path;			\/* root path *\/$/;"	m	struct:_ftsent	access:public
fts_pathlen	/usr/include/fts.h	/^	int fts_pathlen;		\/* sizeof(path) *\/$/;"	m	struct:__anon1	access:public
fts_pathlen	/usr/include/fts.h	/^	u_short fts_pathlen;		\/* strlen(fts_path) *\/$/;"	m	struct:_ftsent	access:public
fts_pointer	/usr/include/fts.h	/^	void *fts_pointer;	        \/* local address value *\/$/;"	m	struct:_ftsent	access:public
fts_read	/usr/include/fts.h	/^FTSENT	*fts_read (FTS *);$/;"	p	signature:(FTS *)
fts_rfd	/usr/include/fts.h	/^	int fts_rfd;			\/* fd for root *\/$/;"	m	struct:__anon1	access:public
fts_set	/usr/include/fts.h	/^int	 fts_set (FTS *, FTSENT *, int) __THROW;$/;"	p	signature:(FTS *, FTSENT *, int)
fts_statp	/usr/include/fts.h	/^	struct stat *fts_statp;		\/* stat(2) information *\/$/;"	m	struct:_ftsent	typeref:struct:_ftsent::stat	access:public
fts_symfd	/usr/include/fts.h	/^	int fts_symfd;			\/* fd for symlink *\/$/;"	m	struct:_ftsent	access:public
