!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
_ALIASES_H	/usr/include/aliases.h	19;"	d
alias_local	/usr/include/aliases.h	/^    int alias_local;$/;"	m	struct:aliasent	access:public
alias_members	/usr/include/aliases.h	/^    char **alias_members;$/;"	m	struct:aliasent	access:public
alias_members_len	/usr/include/aliases.h	/^    size_t alias_members_len;$/;"	m	struct:aliasent	access:public
alias_name	/usr/include/aliases.h	/^    char *alias_name;$/;"	m	struct:aliasent	access:public
aliasent	/usr/include/aliases.h	/^struct aliasent$/;"	s
aliasent::alias_local	/usr/include/aliases.h	/^    int alias_local;$/;"	m	struct:aliasent	access:public
aliasent::alias_members	/usr/include/aliases.h	/^    char **alias_members;$/;"	m	struct:aliasent	access:public
aliasent::alias_members_len	/usr/include/aliases.h	/^    size_t alias_members_len;$/;"	m	struct:aliasent	access:public
aliasent::alias_name	/usr/include/aliases.h	/^    char *alias_name;$/;"	m	struct:aliasent	access:public
endaliasent	/usr/include/aliases.h	/^extern void endaliasent (void) __THROW;$/;"	p	signature:(void)
getaliasbyname	/usr/include/aliases.h	/^extern struct aliasent *getaliasbyname (const char *__name) __THROW;$/;"	p	signature:(const char *__name)
getaliasbyname_r	/usr/include/aliases.h	/^extern int getaliasbyname_r (const char *__restrict __name,$/;"	p	signature:(const char *__restrict __name, struct aliasent *__restrict __result_buf, char *__restrict __buffer, size_t __buflen, struct aliasent **__restrict __result)
getaliasent	/usr/include/aliases.h	/^extern struct aliasent *getaliasent (void) __THROW;$/;"	p	signature:(void)
getaliasent_r	/usr/include/aliases.h	/^extern int getaliasent_r (struct aliasent *__restrict __result_buf,$/;"	p	signature:(struct aliasent *__restrict __result_buf, char *__restrict __buffer, size_t __buflen, struct aliasent **__restrict __result)
setaliasent	/usr/include/aliases.h	/^extern void setaliasent (void) __THROW;$/;"	p	signature:(void)
