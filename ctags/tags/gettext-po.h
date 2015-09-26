!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
LIBGETTEXTPO_VERSION	/usr/include/gettext-po.h	31;"	d
PO_SEVERITY_ERROR	/usr/include/gettext-po.h	90;"	d
PO_SEVERITY_FATAL_ERROR	/usr/include/gettext-po.h	91;"	d
PO_SEVERITY_WARNING	/usr/include/gettext-po.h	89;"	d
_GETTEXT_PO_H	/usr/include/gettext-po.h	19;"	d
error	/usr/include/gettext-po.h	/^  void (*error) (int status, int errnum,$/;"	m	struct:po_error_handler	access:public
error_at_line	/usr/include/gettext-po.h	/^  void (*error_at_line) (int status, int errnum,$/;"	m	struct:po_error_handler	access:public
libgettextpo_version	/usr/include/gettext-po.h	/^extern int libgettextpo_version;$/;"	x
multiline_error	/usr/include/gettext-po.h	/^  void (*multiline_error) (char *prefix, char *message);$/;"	m	struct:po_error_handler	access:public
multiline_warning	/usr/include/gettext-po.h	/^  void (*multiline_warning) (char *prefix, char *message);$/;"	m	struct:po_error_handler	access:public
po_error_handler	/usr/include/gettext-po.h	/^struct po_error_handler$/;"	s
po_error_handler::error	/usr/include/gettext-po.h	/^  void (*error) (int status, int errnum,$/;"	m	struct:po_error_handler	access:public
po_error_handler::error_at_line	/usr/include/gettext-po.h	/^  void (*error_at_line) (int status, int errnum,$/;"	m	struct:po_error_handler	access:public
po_error_handler::multiline_error	/usr/include/gettext-po.h	/^  void (*multiline_error) (char *prefix, char *message);$/;"	m	struct:po_error_handler	access:public
po_error_handler::multiline_warning	/usr/include/gettext-po.h	/^  void (*multiline_warning) (char *prefix, char *message);$/;"	m	struct:po_error_handler	access:public
po_error_handler_t	/usr/include/gettext-po.h	/^typedef const struct po_error_handler *po_error_handler_t;$/;"	t	typeref:struct:po_error_handler
po_file_check_all	/usr/include/gettext-po.h	/^extern void po_file_check_all (po_file_t file, po_xerror_handler_t handler);$/;"	p	signature:(po_file_t file, po_xerror_handler_t handler)
po_file_create	/usr/include/gettext-po.h	/^extern po_file_t po_file_create (void);$/;"	p	signature:(void)
po_file_domain_header	/usr/include/gettext-po.h	/^extern const char * po_file_domain_header (po_file_t file, const char *domain);$/;"	p	signature:(po_file_t file, const char *domain)
po_file_domains	/usr/include/gettext-po.h	/^extern const char * const * po_file_domains (po_file_t file);$/;"	p	signature:(po_file_t file)
po_file_free	/usr/include/gettext-po.h	/^extern void po_file_free (po_file_t file);$/;"	p	signature:(po_file_t file)
po_file_read	/usr/include/gettext-po.h	/^extern po_file_t po_file_read (const char *filename,$/;"	p	signature:(const char *filename, po_xerror_handler_t handler)
po_file_read	/usr/include/gettext-po.h	135;"	d
po_file_t	/usr/include/gettext-po.h	/^typedef struct po_file *po_file_t;$/;"	t	typeref:struct:po_file
po_file_write	/usr/include/gettext-po.h	/^extern po_file_t po_file_write (po_file_t file, const char *filename,$/;"	p	signature:(po_file_t file, const char *filename, po_xerror_handler_t handler)
po_file_write	/usr/include/gettext-po.h	141;"	d
po_filepos_file	/usr/include/gettext-po.h	/^extern const char * po_filepos_file (po_filepos_t filepos);$/;"	p	signature:(po_filepos_t filepos)
po_filepos_start_line	/usr/include/gettext-po.h	/^extern size_t po_filepos_start_line (po_filepos_t filepos);$/;"	p	signature:(po_filepos_t filepos)
po_filepos_t	/usr/include/gettext-po.h	/^typedef struct po_filepos *po_filepos_t;$/;"	t	typeref:struct:po_filepos
po_format_list	/usr/include/gettext-po.h	/^extern const char * const * po_format_list (void);$/;"	p	signature:(void)
po_format_pretty_name	/usr/include/gettext-po.h	/^extern const char * po_format_pretty_name (const char *format_type);$/;"	p	signature:(const char *format_type)
po_header_field	/usr/include/gettext-po.h	/^extern char * po_header_field (const char *header, const char *field);$/;"	p	signature:(const char *header, const char *field)
po_header_set_field	/usr/include/gettext-po.h	/^extern char * po_header_set_field (const char *header, const char *field, const char *value);$/;"	p	signature:(const char *header, const char *field, const char *value)
po_message_add_filepos	/usr/include/gettext-po.h	/^extern void po_message_add_filepos (po_message_t message, const char *file, size_t start_line);$/;"	p	signature:(po_message_t message, const char *file, size_t start_line)
po_message_check_all	/usr/include/gettext-po.h	/^extern void po_message_check_all (po_message_t message, po_message_iterator_t iterator, po_xerror_handler_t handler);$/;"	p	signature:(po_message_t message, po_message_iterator_t iterator, po_xerror_handler_t handler)
po_message_check_format	/usr/include/gettext-po.h	/^extern void po_message_check_format (po_message_t message, po_xerror_handler_t handler);$/;"	p	signature:(po_message_t message, po_xerror_handler_t handler)
po_message_check_format	/usr/include/gettext-po.h	349;"	d
po_message_comments	/usr/include/gettext-po.h	/^extern const char * po_message_comments (po_message_t message);$/;"	p	signature:(po_message_t message)
po_message_create	/usr/include/gettext-po.h	/^extern po_message_t po_message_create (void);$/;"	p	signature:(void)
po_message_extracted_comments	/usr/include/gettext-po.h	/^extern const char * po_message_extracted_comments (po_message_t message);$/;"	p	signature:(po_message_t message)
po_message_filepos	/usr/include/gettext-po.h	/^extern po_filepos_t po_message_filepos (po_message_t message, int i);$/;"	p	signature:(po_message_t message, int i)
po_message_insert	/usr/include/gettext-po.h	/^extern void po_message_insert (po_message_iterator_t iterator, po_message_t message);$/;"	p	signature:(po_message_iterator_t iterator, po_message_t message)
po_message_is_format	/usr/include/gettext-po.h	/^extern int po_message_is_format (po_message_t message, const char *format_type);$/;"	p	signature:(po_message_t message, const char *format_type)
po_message_is_fuzzy	/usr/include/gettext-po.h	/^extern int po_message_is_fuzzy (po_message_t message);$/;"	p	signature:(po_message_t message)
po_message_is_obsolete	/usr/include/gettext-po.h	/^extern int po_message_is_obsolete (po_message_t message);$/;"	p	signature:(po_message_t message)
po_message_is_range	/usr/include/gettext-po.h	/^extern int po_message_is_range (po_message_t message, int *minp, int *maxp);$/;"	p	signature:(po_message_t message, int *minp, int *maxp)
po_message_iterator	/usr/include/gettext-po.h	/^extern po_message_iterator_t po_message_iterator (po_file_t file, const char *domain);$/;"	p	signature:(po_file_t file, const char *domain)
po_message_iterator_free	/usr/include/gettext-po.h	/^extern void po_message_iterator_free (po_message_iterator_t iterator);$/;"	p	signature:(po_message_iterator_t iterator)
po_message_iterator_t	/usr/include/gettext-po.h	/^typedef struct po_message_iterator *po_message_iterator_t;$/;"	t	typeref:struct:po_message_iterator
po_message_msgctxt	/usr/include/gettext-po.h	/^extern const char * po_message_msgctxt (po_message_t message);$/;"	p	signature:(po_message_t message)
po_message_msgid	/usr/include/gettext-po.h	/^extern const char * po_message_msgid (po_message_t message);$/;"	p	signature:(po_message_t message)
po_message_msgid_plural	/usr/include/gettext-po.h	/^extern const char * po_message_msgid_plural (po_message_t message);$/;"	p	signature:(po_message_t message)
po_message_msgstr	/usr/include/gettext-po.h	/^extern const char * po_message_msgstr (po_message_t message);$/;"	p	signature:(po_message_t message)
po_message_msgstr_plural	/usr/include/gettext-po.h	/^extern const char * po_message_msgstr_plural (po_message_t message, int index);$/;"	p	signature:(po_message_t message, int index)
po_message_prev_msgctxt	/usr/include/gettext-po.h	/^extern const char * po_message_prev_msgctxt (po_message_t message);$/;"	p	signature:(po_message_t message)
po_message_prev_msgid	/usr/include/gettext-po.h	/^extern const char * po_message_prev_msgid (po_message_t message);$/;"	p	signature:(po_message_t message)
po_message_prev_msgid_plural	/usr/include/gettext-po.h	/^extern const char * po_message_prev_msgid_plural (po_message_t message);$/;"	p	signature:(po_message_t message)
po_message_remove_filepos	/usr/include/gettext-po.h	/^extern void po_message_remove_filepos (po_message_t message, int i);$/;"	p	signature:(po_message_t message, int i)
po_message_set_comments	/usr/include/gettext-po.h	/^extern void po_message_set_comments (po_message_t message, const char *comments);$/;"	p	signature:(po_message_t message, const char *comments)
po_message_set_extracted_comments	/usr/include/gettext-po.h	/^extern void po_message_set_extracted_comments (po_message_t message, const char *comments);$/;"	p	signature:(po_message_t message, const char *comments)
po_message_set_format	/usr/include/gettext-po.h	/^extern void po_message_set_format (po_message_t message, const char *format_type, \/*bool*\/int value);$/;"	p	signature:(po_message_t message, const char *format_type, int value)
po_message_set_fuzzy	/usr/include/gettext-po.h	/^extern void po_message_set_fuzzy (po_message_t message, int fuzzy);$/;"	p	signature:(po_message_t message, int fuzzy)
po_message_set_msgctxt	/usr/include/gettext-po.h	/^extern void po_message_set_msgctxt (po_message_t message, const char *msgctxt);$/;"	p	signature:(po_message_t message, const char *msgctxt)
po_message_set_msgid	/usr/include/gettext-po.h	/^extern void po_message_set_msgid (po_message_t message, const char *msgid);$/;"	p	signature:(po_message_t message, const char *msgid)
po_message_set_msgid_plural	/usr/include/gettext-po.h	/^extern void po_message_set_msgid_plural (po_message_t message, const char *msgid_plural);$/;"	p	signature:(po_message_t message, const char *msgid_plural)
po_message_set_msgstr	/usr/include/gettext-po.h	/^extern void po_message_set_msgstr (po_message_t message, const char *msgstr);$/;"	p	signature:(po_message_t message, const char *msgstr)
po_message_set_msgstr_plural	/usr/include/gettext-po.h	/^extern void po_message_set_msgstr_plural (po_message_t message, int index, const char *msgstr);$/;"	p	signature:(po_message_t message, int index, const char *msgstr)
po_message_set_obsolete	/usr/include/gettext-po.h	/^extern void po_message_set_obsolete (po_message_t message, int obsolete);$/;"	p	signature:(po_message_t message, int obsolete)
po_message_set_prev_msgctxt	/usr/include/gettext-po.h	/^extern void po_message_set_prev_msgctxt (po_message_t message, const char *prev_msgctxt);$/;"	p	signature:(po_message_t message, const char *prev_msgctxt)
po_message_set_prev_msgid	/usr/include/gettext-po.h	/^extern void po_message_set_prev_msgid (po_message_t message, const char *prev_msgid);$/;"	p	signature:(po_message_t message, const char *prev_msgid)
po_message_set_prev_msgid_plural	/usr/include/gettext-po.h	/^extern void po_message_set_prev_msgid_plural (po_message_t message, const char *prev_msgid_plural);$/;"	p	signature:(po_message_t message, const char *prev_msgid_plural)
po_message_set_range	/usr/include/gettext-po.h	/^extern void po_message_set_range (po_message_t message, int min, int max);$/;"	p	signature:(po_message_t message, int min, int max)
po_message_t	/usr/include/gettext-po.h	/^typedef struct po_message *po_message_t;$/;"	t	typeref:struct:po_message
po_next_message	/usr/include/gettext-po.h	/^extern po_message_t po_next_message (po_message_iterator_t iterator);$/;"	p	signature:(po_message_iterator_t iterator)
po_xerror_handler	/usr/include/gettext-po.h	/^struct po_xerror_handler$/;"	s
po_xerror_handler::xerror	/usr/include/gettext-po.h	/^  void (*xerror) (int severity,$/;"	m	struct:po_xerror_handler	access:public
po_xerror_handler::xerror2	/usr/include/gettext-po.h	/^  void (*xerror2) (int severity,$/;"	m	struct:po_xerror_handler	access:public
po_xerror_handler_t	/usr/include/gettext-po.h	/^typedef const struct po_xerror_handler *po_xerror_handler_t;$/;"	t	typeref:struct:po_xerror_handler
xerror	/usr/include/gettext-po.h	/^  void (*xerror) (int severity,$/;"	m	struct:po_xerror_handler	access:public
xerror2	/usr/include/gettext-po.h	/^  void (*xerror2) (int severity,$/;"	m	struct:po_xerror_handler	access:public
