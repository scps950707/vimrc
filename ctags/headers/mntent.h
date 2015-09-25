!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
MNTOPT_DEFAULTS	/usr/include/mntent.h	42;"	d
MNTOPT_NOAUTO	/usr/include/mntent.h	47;"	d
MNTOPT_NOSUID	/usr/include/mntent.h	46;"	d
MNTOPT_RO	/usr/include/mntent.h	43;"	d
MNTOPT_RW	/usr/include/mntent.h	44;"	d
MNTOPT_SUID	/usr/include/mntent.h	45;"	d
MNTTAB	/usr/include/mntent.h	29;"	d
MNTTYPE_IGNORE	/usr/include/mntent.h	36;"	d
MNTTYPE_NFS	/usr/include/mntent.h	37;"	d
MNTTYPE_SWAP	/usr/include/mntent.h	38;"	d
MOUNTED	/usr/include/mntent.h	32;"	d
_MNTENT_H	/usr/include/mntent.h	20;"	d
__need_FILE	/usr/include/mntent.h	23;"	d
addmntent	/usr/include/mntent.h	/^extern int addmntent (FILE *__restrict __stream,$/;"	p	signature:(FILE *__restrict __stream, const struct mntent *__restrict __mnt)
endmntent	/usr/include/mntent.h	/^extern int endmntent (FILE *__stream) __THROW;$/;"	p	signature:(FILE *__stream)
getmntent	/usr/include/mntent.h	/^extern struct mntent *getmntent (FILE *__stream) __THROW;$/;"	p	signature:(FILE *__stream)
getmntent_r	/usr/include/mntent.h	/^extern struct mntent *getmntent_r (FILE *__restrict __stream,$/;"	p	signature:(FILE *__restrict __stream, struct mntent *__restrict __result, char *__restrict __buffer, int __bufsize)
hasmntopt	/usr/include/mntent.h	/^extern char *hasmntopt (const struct mntent *__mnt,$/;"	p	signature:(const struct mntent *__mnt, const char *__opt)
mnt_dir	/usr/include/mntent.h	/^    char *mnt_dir;		\/* Directory mounted on.  *\/$/;"	m	struct:mntent	access:public
mnt_freq	/usr/include/mntent.h	/^    int mnt_freq;		\/* Dump frequency (in days).  *\/$/;"	m	struct:mntent	access:public
mnt_fsname	/usr/include/mntent.h	/^    char *mnt_fsname;		\/* Device or server for filesystem.  *\/$/;"	m	struct:mntent	access:public
mnt_opts	/usr/include/mntent.h	/^    char *mnt_opts;		\/* Comma-separated options for fs.  *\/$/;"	m	struct:mntent	access:public
mnt_passno	/usr/include/mntent.h	/^    int mnt_passno;		\/* Pass number for `fsck'.  *\/$/;"	m	struct:mntent	access:public
mnt_type	/usr/include/mntent.h	/^    char *mnt_type;		\/* Type of filesystem: ufs, nfs, etc.  *\/$/;"	m	struct:mntent	access:public
mntent	/usr/include/mntent.h	/^struct mntent$/;"	s
mntent::mnt_dir	/usr/include/mntent.h	/^    char *mnt_dir;		\/* Directory mounted on.  *\/$/;"	m	struct:mntent	access:public
mntent::mnt_freq	/usr/include/mntent.h	/^    int mnt_freq;		\/* Dump frequency (in days).  *\/$/;"	m	struct:mntent	access:public
mntent::mnt_fsname	/usr/include/mntent.h	/^    char *mnt_fsname;		\/* Device or server for filesystem.  *\/$/;"	m	struct:mntent	access:public
mntent::mnt_opts	/usr/include/mntent.h	/^    char *mnt_opts;		\/* Comma-separated options for fs.  *\/$/;"	m	struct:mntent	access:public
mntent::mnt_passno	/usr/include/mntent.h	/^    int mnt_passno;		\/* Pass number for `fsck'.  *\/$/;"	m	struct:mntent	access:public
mntent::mnt_type	/usr/include/mntent.h	/^    char *mnt_type;		\/* Type of filesystem: ufs, nfs, etc.  *\/$/;"	m	struct:mntent	access:public
setmntent	/usr/include/mntent.h	/^extern FILE *setmntent (const char *__file, const char *__mode) __THROW;$/;"	p	signature:(const char *__file, const char *__mode)
