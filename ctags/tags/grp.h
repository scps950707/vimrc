!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
NSS_BUFLEN_GROUP	/usr/include/grp.h	118;"	d
_GRP_H	/usr/include/grp.h	23;"	d
__gid_t_defined	/usr/include/grp.h	38;"	d
__need_FILE	/usr/include/grp.h	52;"	d
__need_size_t	/usr/include/grp.h	176;"	d
__need_size_t	/usr/include/grp.h	31;"	d
endgrent	/usr/include/grp.h	/^extern void endgrent (void);$/;"	p	signature:(void)
fgetgrent	/usr/include/grp.h	/^extern struct group *fgetgrent (FILE *__stream);$/;"	p	signature:(FILE *__stream)
fgetgrent_r	/usr/include/grp.h	/^extern int fgetgrent_r (FILE *__restrict __stream,$/;"	p	signature:(FILE *__restrict __stream, struct group *__restrict __resultbuf, char *__restrict __buffer, size_t __buflen, struct group **__restrict __result)
getgrent	/usr/include/grp.h	/^extern struct group *getgrent (void);$/;"	p	signature:(void)
getgrent_r	/usr/include/grp.h	/^extern int getgrent_r (struct group *__restrict __resultbuf,$/;"	p	signature:(struct group *__restrict __resultbuf, char *__restrict __buffer, size_t __buflen, struct group **__restrict __result)
getgrgid	/usr/include/grp.h	/^extern struct group *getgrgid (__gid_t __gid);$/;"	p	signature:(__gid_t __gid)
getgrgid_r	/usr/include/grp.h	/^extern int getgrgid_r (__gid_t __gid, struct group *__restrict __resultbuf,$/;"	p	signature:(__gid_t __gid, struct group *__restrict __resultbuf, char *__restrict __buffer, size_t __buflen, struct group **__restrict __result)
getgrnam	/usr/include/grp.h	/^extern struct group *getgrnam (const char *__name);$/;"	p	signature:(const char *__name)
getgrnam_r	/usr/include/grp.h	/^extern int getgrnam_r (const char *__restrict __name,$/;"	p	signature:(const char *__restrict __name, struct group *__restrict __resultbuf, char *__restrict __buffer, size_t __buflen, struct group **__restrict __result)
getgrouplist	/usr/include/grp.h	/^extern int getgrouplist (const char *__user, __gid_t __group,$/;"	p	signature:(const char *__user, __gid_t __group, __gid_t *__groups, int *__ngroups)
gid_t	/usr/include/grp.h	/^typedef __gid_t gid_t;$/;"	t
gr_gid	/usr/include/grp.h	/^    __gid_t gr_gid;		\/* Group ID.	*\/$/;"	m	struct:group	access:public
gr_mem	/usr/include/grp.h	/^    char **gr_mem;		\/* Member list.	*\/$/;"	m	struct:group	access:public
gr_name	/usr/include/grp.h	/^    char *gr_name;		\/* Group name.	*\/$/;"	m	struct:group	access:public
gr_passwd	/usr/include/grp.h	/^    char *gr_passwd;		\/* Password.	*\/$/;"	m	struct:group	access:public
group	/usr/include/grp.h	/^struct group$/;"	s
group::gr_gid	/usr/include/grp.h	/^    __gid_t gr_gid;		\/* Group ID.	*\/$/;"	m	struct:group	access:public
group::gr_mem	/usr/include/grp.h	/^    char **gr_mem;		\/* Member list.	*\/$/;"	m	struct:group	access:public
group::gr_name	/usr/include/grp.h	/^    char *gr_name;		\/* Group name.	*\/$/;"	m	struct:group	access:public
group::gr_passwd	/usr/include/grp.h	/^    char *gr_passwd;		\/* Password.	*\/$/;"	m	struct:group	access:public
initgroups	/usr/include/grp.h	/^extern int initgroups (const char *__user, __gid_t __group);$/;"	p	signature:(const char *__user, __gid_t __group)
putgrent	/usr/include/grp.h	/^extern int putgrent (const struct group *__restrict __p,$/;"	p	signature:(const struct group *__restrict __p, FILE *__restrict __f)
setgrent	/usr/include/grp.h	/^extern void setgrent (void);$/;"	p	signature:(void)
setgroups	/usr/include/grp.h	/^extern int setgroups (size_t __n, const __gid_t *__groups) __THROW;$/;"	p	signature:(size_t __n, const __gid_t *__groups)
