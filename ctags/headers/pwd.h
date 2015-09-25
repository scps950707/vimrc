!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
NSS_BUFLEN_PASSWD	/usr/include/pwd.h	123;"	d
_PWD_H	/usr/include/pwd.h	23;"	d
__gid_t_defined	/usr/include/pwd.h	39;"	d
__need_FILE	/usr/include/pwd.h	62;"	d
__need_size_t	/usr/include/pwd.h	31;"	d
__uid_t_defined	/usr/include/pwd.h	44;"	d
endpwent	/usr/include/pwd.h	/^extern void endpwent (void);$/;"	p	signature:(void)
fgetpwent	/usr/include/pwd.h	/^extern struct passwd *fgetpwent (FILE *__stream);$/;"	p	signature:(FILE *__stream)
fgetpwent_r	/usr/include/pwd.h	/^extern int fgetpwent_r (FILE *__restrict __stream,$/;"	p	signature:(FILE *__restrict __stream, struct passwd *__restrict __resultbuf, char *__restrict __buffer, size_t __buflen, struct passwd **__restrict __result)
getpw	/usr/include/pwd.h	/^extern int getpw (__uid_t __uid, char *__buffer);$/;"	p	signature:(__uid_t __uid, char *__buffer)
getpwent	/usr/include/pwd.h	/^extern struct passwd *getpwent (void);$/;"	p	signature:(void)
getpwent_r	/usr/include/pwd.h	/^extern int getpwent_r (struct passwd *__restrict __resultbuf,$/;"	p	signature:(struct passwd *__restrict __resultbuf, char *__restrict __buffer, size_t __buflen, struct passwd **__restrict __result)
getpwnam	/usr/include/pwd.h	/^extern struct passwd *getpwnam (const char *__name);$/;"	p	signature:(const char *__name)
getpwnam_r	/usr/include/pwd.h	/^extern int getpwnam_r (const char *__restrict __name,$/;"	p	signature:(const char *__restrict __name, struct passwd *__restrict __resultbuf, char *__restrict __buffer, size_t __buflen, struct passwd **__restrict __result)
getpwuid	/usr/include/pwd.h	/^extern struct passwd *getpwuid (__uid_t __uid);$/;"	p	signature:(__uid_t __uid)
getpwuid_r	/usr/include/pwd.h	/^extern int getpwuid_r (__uid_t __uid,$/;"	p	signature:(__uid_t __uid, struct passwd *__restrict __resultbuf, char *__restrict __buffer, size_t __buflen, struct passwd **__restrict __result)
gid_t	/usr/include/pwd.h	/^typedef __gid_t gid_t;$/;"	t
passwd	/usr/include/pwd.h	/^struct passwd$/;"	s
passwd::pw_dir	/usr/include/pwd.h	/^  char *pw_dir;			\/* Home directory.  *\/$/;"	m	struct:passwd	access:public
passwd::pw_gecos	/usr/include/pwd.h	/^  char *pw_gecos;		\/* Real name.  *\/$/;"	m	struct:passwd	access:public
passwd::pw_gid	/usr/include/pwd.h	/^  __gid_t pw_gid;		\/* Group ID.  *\/$/;"	m	struct:passwd	access:public
passwd::pw_name	/usr/include/pwd.h	/^  char *pw_name;		\/* Username.  *\/$/;"	m	struct:passwd	access:public
passwd::pw_passwd	/usr/include/pwd.h	/^  char *pw_passwd;		\/* Password.  *\/$/;"	m	struct:passwd	access:public
passwd::pw_shell	/usr/include/pwd.h	/^  char *pw_shell;		\/* Shell program.  *\/$/;"	m	struct:passwd	access:public
passwd::pw_uid	/usr/include/pwd.h	/^  __uid_t pw_uid;		\/* User ID.  *\/$/;"	m	struct:passwd	access:public
putpwent	/usr/include/pwd.h	/^extern int putpwent (const struct passwd *__restrict __p,$/;"	p	signature:(const struct passwd *__restrict __p, FILE *__restrict __f)
pw_dir	/usr/include/pwd.h	/^  char *pw_dir;			\/* Home directory.  *\/$/;"	m	struct:passwd	access:public
pw_gecos	/usr/include/pwd.h	/^  char *pw_gecos;		\/* Real name.  *\/$/;"	m	struct:passwd	access:public
pw_gid	/usr/include/pwd.h	/^  __gid_t pw_gid;		\/* Group ID.  *\/$/;"	m	struct:passwd	access:public
pw_name	/usr/include/pwd.h	/^  char *pw_name;		\/* Username.  *\/$/;"	m	struct:passwd	access:public
pw_passwd	/usr/include/pwd.h	/^  char *pw_passwd;		\/* Password.  *\/$/;"	m	struct:passwd	access:public
pw_shell	/usr/include/pwd.h	/^  char *pw_shell;		\/* Shell program.  *\/$/;"	m	struct:passwd	access:public
pw_uid	/usr/include/pwd.h	/^  __uid_t pw_uid;		\/* User ID.  *\/$/;"	m	struct:passwd	access:public
setpwent	/usr/include/pwd.h	/^extern void setpwent (void);$/;"	p	signature:(void)
uid_t	/usr/include/pwd.h	/^typedef __uid_t uid_t;$/;"	t
