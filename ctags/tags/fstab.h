!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
FSTAB	/usr/include/fstab.h	49;"	d
FSTAB_RO	/usr/include/fstab.h	53;"	d
FSTAB_RQ	/usr/include/fstab.h	52;"	d
FSTAB_RW	/usr/include/fstab.h	51;"	d
FSTAB_SW	/usr/include/fstab.h	54;"	d
FSTAB_XX	/usr/include/fstab.h	55;"	d
_FSTAB_H	/usr/include/fstab.h	33;"	d
_PATH_FSTAB	/usr/include/fstab.h	48;"	d
endfsent	/usr/include/fstab.h	/^extern void endfsent (void) __THROW;$/;"	p	signature:(void)
fs_file	/usr/include/fstab.h	/^    char *fs_file;			\/* file system path prefix *\/$/;"	m	struct:fstab	access:public
fs_freq	/usr/include/fstab.h	/^    int	fs_freq;			\/* dump frequency, in days *\/$/;"	m	struct:fstab	access:public
fs_mntops	/usr/include/fstab.h	/^    char *fs_mntops;			\/* Mount options ala -o *\/$/;"	m	struct:fstab	access:public
fs_passno	/usr/include/fstab.h	/^    int	fs_passno;			\/* pass number on parallel dump *\/$/;"	m	struct:fstab	access:public
fs_spec	/usr/include/fstab.h	/^    char *fs_spec;			\/* block special device name *\/$/;"	m	struct:fstab	access:public
fs_type	/usr/include/fstab.h	/^    const char *fs_type;		\/* FSTAB_* from fs_mntops *\/$/;"	m	struct:fstab	access:public
fs_vfstype	/usr/include/fstab.h	/^    char *fs_vfstype;			\/* File system type, ufs, nfs *\/$/;"	m	struct:fstab	access:public
fstab	/usr/include/fstab.h	/^struct fstab$/;"	s
fstab::fs_file	/usr/include/fstab.h	/^    char *fs_file;			\/* file system path prefix *\/$/;"	m	struct:fstab	access:public
fstab::fs_freq	/usr/include/fstab.h	/^    int	fs_freq;			\/* dump frequency, in days *\/$/;"	m	struct:fstab	access:public
fstab::fs_mntops	/usr/include/fstab.h	/^    char *fs_mntops;			\/* Mount options ala -o *\/$/;"	m	struct:fstab	access:public
fstab::fs_passno	/usr/include/fstab.h	/^    int	fs_passno;			\/* pass number on parallel dump *\/$/;"	m	struct:fstab	access:public
fstab::fs_spec	/usr/include/fstab.h	/^    char *fs_spec;			\/* block special device name *\/$/;"	m	struct:fstab	access:public
fstab::fs_type	/usr/include/fstab.h	/^    const char *fs_type;		\/* FSTAB_* from fs_mntops *\/$/;"	m	struct:fstab	access:public
fstab::fs_vfstype	/usr/include/fstab.h	/^    char *fs_vfstype;			\/* File system type, ufs, nfs *\/$/;"	m	struct:fstab	access:public
getfsent	/usr/include/fstab.h	/^extern struct fstab *getfsent (void) __THROW;$/;"	p	signature:(void)
getfsfile	/usr/include/fstab.h	/^extern struct fstab *getfsfile (const char *__name) __THROW;$/;"	p	signature:(const char *__name)
getfsspec	/usr/include/fstab.h	/^extern struct fstab *getfsspec (const char *__name) __THROW;$/;"	p	signature:(const char *__name)
setfsent	/usr/include/fstab.h	/^extern int setfsent (void) __THROW;$/;"	p	signature:(void)
