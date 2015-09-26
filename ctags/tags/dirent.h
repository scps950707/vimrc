!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
DIR	/usr/include/dirent.h	/^typedef struct __dirstream DIR;$/;"	t	typeref:struct:__dirstream
DTTOIF	/usr/include/dirent.h	121;"	d
DT_BLK	/usr/include/dirent.h	/^    DT_BLK = 6,$/;"	e	enum:__anon1
DT_BLK	/usr/include/dirent.h	108;"	d
DT_CHR	/usr/include/dirent.h	/^    DT_CHR = 2,$/;"	e	enum:__anon1
DT_CHR	/usr/include/dirent.h	104;"	d
DT_DIR	/usr/include/dirent.h	/^    DT_DIR = 4,$/;"	e	enum:__anon1
DT_DIR	/usr/include/dirent.h	106;"	d
DT_FIFO	/usr/include/dirent.h	/^    DT_FIFO = 1,$/;"	e	enum:__anon1
DT_FIFO	/usr/include/dirent.h	102;"	d
DT_LNK	/usr/include/dirent.h	/^    DT_LNK = 10,$/;"	e	enum:__anon1
DT_LNK	/usr/include/dirent.h	112;"	d
DT_REG	/usr/include/dirent.h	/^    DT_REG = 8,$/;"	e	enum:__anon1
DT_REG	/usr/include/dirent.h	110;"	d
DT_SOCK	/usr/include/dirent.h	/^    DT_SOCK = 12,$/;"	e	enum:__anon1
DT_SOCK	/usr/include/dirent.h	114;"	d
DT_UNKNOWN	/usr/include/dirent.h	/^    DT_UNKNOWN = 0,$/;"	e	enum:__anon1
DT_UNKNOWN	/usr/include/dirent.h	100;"	d
DT_WHT	/usr/include/dirent.h	/^    DT_WHT = 14$/;"	e	enum:__anon1
DT_WHT	/usr/include/dirent.h	116;"	d
IFTODT	/usr/include/dirent.h	120;"	d
MAXNAMLEN	/usr/include/dirent.h	236;"	d
MAXNAMLEN	/usr/include/dirent.h	238;"	d
_DIRENT_H	/usr/include/dirent.h	23;"	d
_D_ALLOC_NAMLEN	/usr/include/dirent.h	83;"	d
_D_ALLOC_NAMLEN	/usr/include/dirent.h	87;"	d
_D_ALLOC_NAMLEN	/usr/include/dirent.h	89;"	d
_D_EXACT_NAMLEN	/usr/include/dirent.h	82;"	d
_D_EXACT_NAMLEN	/usr/include/dirent.h	85;"	d
__REDIRECT	/usr/include/dirent.h	/^extern int __REDIRECT (readdir_r,$/;"	p	signature:(readdir_r, (DIR *__restrict __dirp, struct dirent *__restrict __entry, struct dirent **__restrict __result), readdir64_r)
__REDIRECT	/usr/include/dirent.h	/^extern int __REDIRECT (scandir,$/;"	p	signature:(scandir, (const char *__restrict __dir, struct dirent ***__restrict __namelist, int (*__selector) (const struct dirent *), int (*__cmp) (const struct dirent **, const struct dirent **)), scandir64)
__REDIRECT	/usr/include/dirent.h	/^extern int __REDIRECT (scandirat,$/;"	p	signature:(scandirat, (int __dfd, const char *__restrict __dir, struct dirent ***__restrict __namelist, int (*__selector) (const struct dirent *), int (*__cmp) (const struct dirent **, const struct dirent **)), scandirat64)
__REDIRECT	/usr/include/dirent.h	/^extern struct dirent *__REDIRECT (readdir, (DIR *__dirp), readdir64)$/;"	p	signature:(readdir, (DIR *__dirp), readdir64)
__REDIRECT_NTH	/usr/include/dirent.h	/^extern __ssize_t __REDIRECT_NTH (getdirentries,$/;"	p	signature:(getdirentries, (int __fd, char *__restrict __buf, size_t __nbytes, __off64_t *__restrict __basep), getdirentries64)
__REDIRECT_NTH	/usr/include/dirent.h	/^extern int __REDIRECT_NTH (alphasort,$/;"	p	signature:(alphasort, (const struct dirent **__e1, const struct dirent **__e2), alphasort64)
__REDIRECT_NTH	/usr/include/dirent.h	/^extern int __REDIRECT_NTH (versionsort,$/;"	p	signature:(versionsort, (const struct dirent **__e1, const struct dirent **__e2), versionsort64)
__ino64_t_defined	/usr/include/dirent.h	42;"	d
__ino_t_defined	/usr/include/dirent.h	38;"	d
__need_size_t	/usr/include/dirent.h	243;"	d
alphasort	/usr/include/dirent.h	/^extern int alphasort (const struct dirent **__e1,$/;"	p	signature:(const struct dirent **__e1, const struct dirent **__e2)
alphasort	/usr/include/dirent.h	334;"	d
alphasort64	/usr/include/dirent.h	/^extern int alphasort64 (const struct dirent64 **__e1,$/;"	p	signature:(const struct dirent64 **__e1, const struct dirent64 **__e2)
closedir	/usr/include/dirent.h	/^extern int closedir (DIR *__dirp) __nonnull ((1));$/;"	p	signature:(DIR *__dirp)
d_ino	/usr/include/dirent.h	64;"	d
dirfd	/usr/include/dirent.h	/^extern int dirfd (DIR *__dirp) __THROW __nonnull ((1));$/;"	p	signature:(DIR *__dirp)
dirfd	/usr/include/dirent.h	226;"	d
fdopendir	/usr/include/dirent.h	/^extern DIR *fdopendir (int __fd);$/;"	p	signature:(int __fd)
getdirentries	/usr/include/dirent.h	/^extern __ssize_t getdirentries (int __fd, char *__restrict __buf,$/;"	p	signature:(int __fd, char *__restrict __buf, size_t __nbytes, __off_t *__restrict __basep)
getdirentries	/usr/include/dirent.h	364;"	d
getdirentries64	/usr/include/dirent.h	/^extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,$/;"	p	signature:(int __fd, char *__restrict __buf, size_t __nbytes, __off64_t *__restrict __basep)
ino64_t	/usr/include/dirent.h	/^typedef __ino64_t ino64_t;$/;"	t
ino_t	/usr/include/dirent.h	/^typedef __ino_t ino_t;$/;"	t
opendir	/usr/include/dirent.h	/^extern DIR *opendir (const char *__name) __nonnull ((1));$/;"	p	signature:(const char *__name)
readdir	/usr/include/dirent.h	/^extern struct dirent *readdir (DIR *__dirp) __nonnull ((1));$/;"	p	signature:(DIR *__dirp)
readdir	/usr/include/dirent.h	168;"	d
readdir64	/usr/include/dirent.h	/^extern struct dirent64 *readdir64 (DIR *__dirp) __nonnull ((1));$/;"	p	signature:(DIR *__dirp)
readdir64_r	/usr/include/dirent.h	/^extern int readdir64_r (DIR *__restrict __dirp,$/;"	p	signature:(DIR *__restrict __dirp, struct dirent64 *__restrict __entry, struct dirent64 **__restrict __result)
readdir_r	/usr/include/dirent.h	/^extern int readdir_r (DIR *__restrict __dirp,$/;"	p	signature:(DIR *__restrict __dirp, struct dirent *__restrict __entry, struct dirent **__restrict __result)
readdir_r	/usr/include/dirent.h	195;"	d
rewinddir	/usr/include/dirent.h	/^extern void rewinddir (DIR *__dirp) __THROW __nonnull ((1));$/;"	p	signature:(DIR *__dirp)
scandir	/usr/include/dirent.h	/^extern int scandir (const char *__restrict __dir,$/;"	p	signature:(const char *__restrict __dir, struct dirent ***__restrict __namelist, int (*__selector) (const struct dirent *), int (*__cmp) (const struct dirent **, const struct dirent **))
scandir	/usr/include/dirent.h	270;"	d
scandir64	/usr/include/dirent.h	/^extern int scandir64 (const char *__restrict __dir,$/;"	p	signature:(const char *__restrict __dir, struct dirent64 ***__restrict __namelist, int (*__selector) (const struct dirent64 *), int (*__cmp) (const struct dirent64 **, const struct dirent64 **))
scandirat	/usr/include/dirent.h	/^extern int scandirat (int __dfd, const char *__restrict __dir,$/;"	p	signature:(int __dfd, const char *__restrict __dir, struct dirent ***__restrict __namelist, int (*__selector) (const struct dirent *), int (*__cmp) (const struct dirent **, const struct dirent **))
scandirat	/usr/include/dirent.h	308;"	d
scandirat64	/usr/include/dirent.h	/^extern int scandirat64 (int __dfd, const char *__restrict __dir,$/;"	p	signature:(int __dfd, const char *__restrict __dir, struct dirent64 ***__restrict __namelist, int (*__selector) (const struct dirent64 *), int (*__cmp) (const struct dirent64 **, const struct dirent64 **))
seekdir	/usr/include/dirent.h	/^extern void seekdir (DIR *__dirp, long int __pos) __THROW __nonnull ((1));$/;"	p	signature:(DIR *__dirp, long int __pos)
telldir	/usr/include/dirent.h	/^extern long int telldir (DIR *__dirp) __THROW __nonnull ((1));$/;"	p	signature:(DIR *__dirp)
versionsort	/usr/include/dirent.h	/^extern int versionsort (const struct dirent **__e1,$/;"	p	signature:(const struct dirent **__e1, const struct dirent **__e2)
versionsort	/usr/include/dirent.h	390;"	d
versionsort64	/usr/include/dirent.h	/^extern int versionsort64 (const struct dirent64 **__e1,$/;"	p	signature:(const struct dirent64 **__e1, const struct dirent64 **__e2)
