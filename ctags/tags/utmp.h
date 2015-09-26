!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
UTMP_FILE	/usr/include/utmp.h	32;"	d
UTMP_FILENAME	/usr/include/utmp.h	33;"	d
WTMP_FILE	/usr/include/utmp.h	34;"	d
WTMP_FILENAME	/usr/include/utmp.h	35;"	d
_UTMP_H	/usr/include/utmp.h	19;"	d
endutent	/usr/include/utmp.h	/^extern void endutent (void) __THROW;$/;"	p	signature:(void)
getutent	/usr/include/utmp.h	/^extern struct utmp *getutent (void) __THROW;$/;"	p	signature:(void)
getutent_r	/usr/include/utmp.h	/^extern int getutent_r (struct utmp *__buffer, struct utmp **__result) __THROW;$/;"	p	signature:(struct utmp *__buffer, struct utmp **__result)
getutid	/usr/include/utmp.h	/^extern struct utmp *getutid (const struct utmp *__id) __THROW;$/;"	p	signature:(const struct utmp *__id)
getutid_r	/usr/include/utmp.h	/^extern int getutid_r (const struct utmp *__id, struct utmp *__buffer,$/;"	p	signature:(const struct utmp *__id, struct utmp *__buffer, struct utmp **__result)
getutline	/usr/include/utmp.h	/^extern struct utmp *getutline (const struct utmp *__line) __THROW;$/;"	p	signature:(const struct utmp *__line)
getutline_r	/usr/include/utmp.h	/^extern int getutline_r (const struct utmp *__line,$/;"	p	signature:(const struct utmp *__line, struct utmp *__buffer, struct utmp **__result)
login	/usr/include/utmp.h	/^extern void login (const struct utmp *__entry) __THROW;$/;"	p	signature:(const struct utmp *__entry)
login_tty	/usr/include/utmp.h	/^extern int login_tty (int __fd) __THROW;$/;"	p	signature:(int __fd)
logout	/usr/include/utmp.h	/^extern int logout (const char *__ut_line) __THROW;$/;"	p	signature:(const char *__ut_line)
logwtmp	/usr/include/utmp.h	/^extern void logwtmp (const char *__ut_line, const char *__ut_name,$/;"	p	signature:(const char *__ut_line, const char *__ut_name, const char *__ut_host)
pututline	/usr/include/utmp.h	/^extern struct utmp *pututline (const struct utmp *__utmp_ptr) __THROW;$/;"	p	signature:(const struct utmp *__utmp_ptr)
setutent	/usr/include/utmp.h	/^extern void setutent (void) __THROW;$/;"	p	signature:(void)
updwtmp	/usr/include/utmp.h	/^extern void updwtmp (const char *__wtmp_file, const struct utmp *__utmp)$/;"	p	signature:(const char *__wtmp_file, const struct utmp *__utmp)
utmpname	/usr/include/utmp.h	/^extern int utmpname (const char *__file) __THROW;$/;"	p	signature:(const char *__file)
