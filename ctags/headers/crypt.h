!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
_CRYPT_H	/usr/include/crypt.h	25;"	d
crypt	/usr/include/crypt.h	/^extern char *crypt (const char *__key, const char *__salt)$/;"	p	signature:(const char *__key, const char *__salt)
crypt_3_buf	/usr/include/crypt.h	/^    char crypt_3_buf[14];$/;"	m	struct:crypt_data	access:public
crypt_data	/usr/include/crypt.h	/^struct crypt_data$/;"	s
crypt_data::crypt_3_buf	/usr/include/crypt.h	/^    char crypt_3_buf[14];$/;"	m	struct:crypt_data	access:public
crypt_data::current_salt	/usr/include/crypt.h	/^    char current_salt[2];$/;"	m	struct:crypt_data	access:public
crypt_data::current_saltbits	/usr/include/crypt.h	/^    long int current_saltbits;$/;"	m	struct:crypt_data	access:public
crypt_data::direction	/usr/include/crypt.h	/^    int  direction, initialized;$/;"	m	struct:crypt_data	access:public
crypt_data::initialized	/usr/include/crypt.h	/^    int  direction, initialized;$/;"	m	struct:crypt_data	access:public
crypt_data::keysched	/usr/include/crypt.h	/^    char keysched[16 * 8];$/;"	m	struct:crypt_data	access:public
crypt_data::sb0	/usr/include/crypt.h	/^    char sb0[32768];$/;"	m	struct:crypt_data	access:public
crypt_data::sb1	/usr/include/crypt.h	/^    char sb1[32768];$/;"	m	struct:crypt_data	access:public
crypt_data::sb2	/usr/include/crypt.h	/^    char sb2[32768];$/;"	m	struct:crypt_data	access:public
crypt_data::sb3	/usr/include/crypt.h	/^    char sb3[32768];$/;"	m	struct:crypt_data	access:public
crypt_r	/usr/include/crypt.h	/^extern char *crypt_r (const char *__key, const char *__salt,$/;"	p	signature:(const char *__key, const char *__salt, struct crypt_data * __restrict __data)
current_salt	/usr/include/crypt.h	/^    char current_salt[2];$/;"	m	struct:crypt_data	access:public
current_saltbits	/usr/include/crypt.h	/^    long int current_saltbits;$/;"	m	struct:crypt_data	access:public
direction	/usr/include/crypt.h	/^    int  direction, initialized;$/;"	m	struct:crypt_data	access:public
encrypt	/usr/include/crypt.h	/^extern void encrypt (char *__glibc_block, int __edflag)$/;"	p	signature:(char *__glibc_block, int __edflag)
encrypt_r	/usr/include/crypt.h	/^extern void encrypt_r (char *__glibc_block, int __edflag,$/;"	p	signature:(char *__glibc_block, int __edflag, struct crypt_data * __restrict __data)
initialized	/usr/include/crypt.h	/^    int  direction, initialized;$/;"	m	struct:crypt_data	access:public
keysched	/usr/include/crypt.h	/^    char keysched[16 * 8];$/;"	m	struct:crypt_data	access:public
sb0	/usr/include/crypt.h	/^    char sb0[32768];$/;"	m	struct:crypt_data	access:public
sb1	/usr/include/crypt.h	/^    char sb1[32768];$/;"	m	struct:crypt_data	access:public
sb2	/usr/include/crypt.h	/^    char sb2[32768];$/;"	m	struct:crypt_data	access:public
sb3	/usr/include/crypt.h	/^    char sb3[32768];$/;"	m	struct:crypt_data	access:public
setkey	/usr/include/crypt.h	/^extern void setkey (const char *__key) __THROW __nonnull ((1));$/;"	p	signature:(const char *__key)
setkey_r	/usr/include/crypt.h	/^extern void setkey_r (const char *__key,$/;"	p	signature:(const char *__key, struct crypt_data * __restrict __data)
