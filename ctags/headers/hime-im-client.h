!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
FLAG_HIME_client_handle_has_focus	/usr/include/hime-im-client.h	/^  FLAG_HIME_client_handle_has_focus = 1,$/;"	e	enum:__anon1
FLAG_HIME_client_handle_raise_window	/usr/include/hime-im-client.h	/^  FLAG_HIME_client_handle_raise_window = 0x1000  \/\/ for mozilla, dirty fix$/;"	e	enum:__anon1
FLAG_HIME_client_handle_use_preedit	/usr/include/hime-im-client.h	/^  FLAG_HIME_client_handle_use_preedit = 2,$/;"	e	enum:__anon1
FLAG_HIME_srv_ret_status_use_pop_up	/usr/include/hime-im-client.h	/^  FLAG_HIME_srv_ret_status_use_pop_up = 1    \/\/ If this is used, we don't need the dirty fix$/;"	e	enum:__anon2
HIME_IM_CLIENT_H	/usr/include/hime-im-client.h	19;"	d
HIME_PASSWD	/usr/include/hime-im-client.h	/^struct HIME_PASSWD;$/;"	x
HIME_client_handle	/usr/include/hime-im-client.h	/^} HIME_client_handle;$/;"	t	typeref:struct:HIME_client_handle_S
HIME_client_handle_S	/usr/include/hime-im-client.h	/^typedef struct HIME_client_handle_S {$/;"	s
HIME_client_handle_S::client_win	/usr/include/hime-im-client.h	/^  Window client_win;	\/* client window *\/$/;"	m	struct:HIME_client_handle_S	access:public
HIME_client_handle_S::disp	/usr/include/hime-im-client.h	/^  Display *disp;$/;"	m	struct:HIME_client_handle_S	access:public
HIME_client_handle_S::fd	/usr/include/hime-im-client.h	/^  int fd;$/;"	m	struct:HIME_client_handle_S	access:public
HIME_client_handle_S::flag	/usr/include/hime-im-client.h	/^  u_int flag;$/;"	m	struct:HIME_client_handle_S	access:public
HIME_client_handle_S::input_style	/usr/include/hime-im-client.h	/^  u_int	input_style;	\/* input style *\/$/;"	m	struct:HIME_client_handle_S	access:public
HIME_client_handle_S::passwd	/usr/include/hime-im-client.h	/^  struct HIME_PASSWD *passwd;$/;"	m	struct:HIME_client_handle_S	typeref:struct:HIME_client_handle_S::HIME_PASSWD	access:public
HIME_client_handle_S::seq	/usr/include/hime-im-client.h	/^  u_int seq;$/;"	m	struct:HIME_client_handle_S	access:public
HIME_client_handle_S::spot_location	/usr/include/hime-im-client.h	/^  XPoint spot_location; \/* spot location *\/$/;"	m	struct:HIME_client_handle_S	access:public
_XSERVER64	/usr/include/hime-im-client.h	22;"	d
client_win	/usr/include/hime-im-client.h	/^  Window client_win;	\/* client window *\/$/;"	m	struct:HIME_client_handle_S	access:public
disp	/usr/include/hime-im-client.h	/^  Display *disp;$/;"	m	struct:HIME_client_handle_S	access:public
fd	/usr/include/hime-im-client.h	/^  int fd;$/;"	m	struct:HIME_client_handle_S	access:public
find_hime_window	/usr/include/hime-im-client.h	/^Window find_hime_window(Display *dpy);$/;"	p	signature:(Display *dpy)
flag	/usr/include/hime-im-client.h	/^  u_int flag;$/;"	m	struct:HIME_client_handle_S	access:public
hime_im_client_clear_flags	/usr/include/hime-im-client.h	/^void hime_im_client_clear_flags(HIME_client_handle *handle, int flags, int *ret_flags);$/;"	p	signature:(HIME_client_handle *handle, int flags, int *ret_flags)
hime_im_client_close	/usr/include/hime-im-client.h	/^void hime_im_client_close(HIME_client_handle *handle);$/;"	p	signature:(HIME_client_handle *handle)
hime_im_client_focus_in	/usr/include/hime-im-client.h	/^void hime_im_client_focus_in(HIME_client_handle *handle);$/;"	p	signature:(HIME_client_handle *handle)
hime_im_client_focus_out	/usr/include/hime-im-client.h	/^void hime_im_client_focus_out(HIME_client_handle *handle);$/;"	p	signature:(HIME_client_handle *handle)
hime_im_client_focus_out2	/usr/include/hime-im-client.h	/^void hime_im_client_focus_out2(HIME_client_handle *handle, char **rstr);$/;"	p	signature:(HIME_client_handle *handle, char **rstr)
hime_im_client_forward_key_press	/usr/include/hime-im-client.h	/^int hime_im_client_forward_key_press(HIME_client_handle *handle,$/;"	p	signature:(HIME_client_handle *handle, KeySym key, u_int state, char **rstr)
hime_im_client_forward_key_press2	/usr/include/hime-im-client.h	/^int hime_im_client_forward_key_press2(HIME_client_handle *handle,$/;"	p	signature:(HIME_client_handle *handle, KeySym key, u_int state, char **rstr)
hime_im_client_forward_key_release	/usr/include/hime-im-client.h	/^int hime_im_client_forward_key_release(HIME_client_handle *handle,$/;"	p	signature:(HIME_client_handle *handle, KeySym key, u_int state, char **rstr)
hime_im_client_get_preedit	/usr/include/hime-im-client.h	/^int hime_im_client_get_preedit(HIME_client_handle *handle, char **str, HIME_PREEDIT_ATTR att[], int *cursor, int *sub_comp_len);$/;"	p	signature:(HIME_client_handle *handle, char **str, HIME_PREEDIT_ATTR att[], int *cursor, int *sub_comp_len)
hime_im_client_message	/usr/include/hime-im-client.h	/^void hime_im_client_message(HIME_client_handle *handle, char *message);$/;"	p	signature:(HIME_client_handle *handle, char *message)
hime_im_client_open	/usr/include/hime-im-client.h	/^HIME_client_handle *hime_im_client_open(Display *disp);$/;"	p	signature:(Display *disp)
hime_im_client_reset	/usr/include/hime-im-client.h	/^void hime_im_client_reset(HIME_client_handle *handle);$/;"	p	signature:(HIME_client_handle *handle)
hime_im_client_set_cursor_location	/usr/include/hime-im-client.h	/^void hime_im_client_set_cursor_location(HIME_client_handle *handle,$/;"	p	signature:(HIME_client_handle *handle, int x, int y)
hime_im_client_set_flags	/usr/include/hime-im-client.h	/^void hime_im_client_set_flags(HIME_client_handle *handle, int flags, int *ret_flags);$/;"	p	signature:(HIME_client_handle *handle, int flags, int *ret_flags)
hime_im_client_set_window	/usr/include/hime-im-client.h	/^void hime_im_client_set_window(HIME_client_handle *handle, Window win);$/;"	p	signature:(HIME_client_handle *handle, Window win)
input_style	/usr/include/hime-im-client.h	/^  u_int	input_style;	\/* input style *\/$/;"	m	struct:HIME_client_handle_S	access:public
passwd	/usr/include/hime-im-client.h	/^  struct HIME_PASSWD *passwd;$/;"	m	struct:HIME_client_handle_S	typeref:struct:HIME_client_handle_S::HIME_PASSWD	access:public
seq	/usr/include/hime-im-client.h	/^  u_int seq;$/;"	m	struct:HIME_client_handle_S	access:public
spot_location	/usr/include/hime-im-client.h	/^  XPoint spot_location; \/* spot location *\/$/;"	m	struct:HIME_client_handle_S	access:public
