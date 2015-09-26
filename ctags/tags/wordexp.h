!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
WRDE_APPEND	/usr/include/wordexp.h	/^    WRDE_APPEND = (1 << 1),	\/* Append to results of a previous call.  *\/$/;"	e	enum:__anon1
WRDE_BADCHAR	/usr/include/wordexp.h	/^    WRDE_BADCHAR,		\/* A metachar appears in the wrong place.  *\/$/;"	e	enum:__anon3
WRDE_BADVAL	/usr/include/wordexp.h	/^    WRDE_BADVAL,		\/* Undefined var reference with WRDE_UNDEF.  *\/$/;"	e	enum:__anon3
WRDE_CMDSUB	/usr/include/wordexp.h	/^    WRDE_CMDSUB,		\/* Command substitution with WRDE_NOCMD.  *\/$/;"	e	enum:__anon3
WRDE_DOOFFS	/usr/include/wordexp.h	/^    WRDE_DOOFFS = (1 << 0),	\/* Insert PWORDEXP->we_offs NULLs.  *\/$/;"	e	enum:__anon1
WRDE_NOCMD	/usr/include/wordexp.h	/^    WRDE_NOCMD = (1 << 2),	\/* Don't do command substitution.  *\/$/;"	e	enum:__anon1
WRDE_NOSPACE	/usr/include/wordexp.h	/^    WRDE_NOSPACE = 1,		\/* Ran out of memory.  *\/$/;"	e	enum:__anon3
WRDE_NOSYS	/usr/include/wordexp.h	/^    WRDE_NOSYS = -1,		\/* Never used since we support `wordexp'.  *\/$/;"	e	enum:__anon3
WRDE_REUSE	/usr/include/wordexp.h	/^    WRDE_REUSE = (1 << 3),	\/* Reuse storage in PWORDEXP.  *\/$/;"	e	enum:__anon1
WRDE_SHOWERR	/usr/include/wordexp.h	/^    WRDE_SHOWERR = (1 << 4),	\/* Don't redirect stderr to \/dev\/null.  *\/$/;"	e	enum:__anon1
WRDE_SYNTAX	/usr/include/wordexp.h	/^    WRDE_SYNTAX			\/* Shell syntax error.  *\/$/;"	e	enum:__anon3
WRDE_UNDEF	/usr/include/wordexp.h	/^    WRDE_UNDEF = (1 << 5),	\/* Error for expanding undefined variables.  *\/$/;"	e	enum:__anon1
_WORDEXP_H	/usr/include/wordexp.h	19;"	d
__WRDE_FLAGS	/usr/include/wordexp.h	/^    __WRDE_FLAGS = (WRDE_DOOFFS | WRDE_APPEND | WRDE_NOCMD |$/;"	e	enum:__anon1
__anon2::we_offs	/usr/include/wordexp.h	/^    size_t we_offs;		\/* Slots to reserve in `we_wordv'.  *\/$/;"	m	struct:__anon2	access:public
__anon2::we_wordc	/usr/include/wordexp.h	/^    size_t we_wordc;		\/* Count of words matched.  *\/$/;"	m	struct:__anon2	access:public
__anon2::we_wordv	/usr/include/wordexp.h	/^    char **we_wordv;		\/* List of expanded words.  *\/$/;"	m	struct:__anon2	access:public
__need_size_t	/usr/include/wordexp.h	22;"	d
we_offs	/usr/include/wordexp.h	/^    size_t we_offs;		\/* Slots to reserve in `we_wordv'.  *\/$/;"	m	struct:__anon2	access:public
we_wordc	/usr/include/wordexp.h	/^    size_t we_wordc;		\/* Count of words matched.  *\/$/;"	m	struct:__anon2	access:public
we_wordv	/usr/include/wordexp.h	/^    char **we_wordv;		\/* List of expanded words.  *\/$/;"	m	struct:__anon2	access:public
wordexp	/usr/include/wordexp.h	/^extern int wordexp (const char *__restrict __words,$/;"	p	signature:(const char *__restrict __words, wordexp_t *__restrict __pwordexp, int __flags)
wordexp_t	/usr/include/wordexp.h	/^  } wordexp_t;$/;"	t	typeref:struct:__anon2
wordfree	/usr/include/wordexp.h	/^extern void wordfree (wordexp_t *__wordexp) __THROW;$/;"	p	signature:(wordexp_t *__wordexp)
