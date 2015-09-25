!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
GROUP_API_VERSION	/usr/include/sudo_plugin.h	170;"	d
GROUP_API_VERSION_GET_MAJOR	/usr/include/sudo_plugin.h	173;"	d
GROUP_API_VERSION_GET_MINOR	/usr/include/sudo_plugin.h	174;"	d
GROUP_API_VERSION_MAJOR	/usr/include/sudo_plugin.h	168;"	d
GROUP_API_VERSION_MINOR	/usr/include/sudo_plugin.h	169;"	d
GROUP_API_VERSION_SET_MAJOR	/usr/include/sudo_plugin.h	175;"	d
GROUP_API_VERSION_SET_MINOR	/usr/include/sudo_plugin.h	178;"	d
SUDO_API_MKVERSION	/usr/include/sudo_plugin.h	23;"	d
SUDO_API_VERSION	/usr/include/sudo_plugin.h	24;"	d
SUDO_API_VERSION_GET_MAJOR	/usr/include/sudo_plugin.h	27;"	d
SUDO_API_VERSION_GET_MINOR	/usr/include/sudo_plugin.h	28;"	d
SUDO_API_VERSION_MAJOR	/usr/include/sudo_plugin.h	21;"	d
SUDO_API_VERSION_MINOR	/usr/include/sudo_plugin.h	22;"	d
SUDO_API_VERSION_SET_MAJOR	/usr/include/sudo_plugin.h	29;"	d
SUDO_API_VERSION_SET_MINOR	/usr/include/sudo_plugin.h	32;"	d
SUDO_CONV_DEBUG_MSG	/usr/include/sudo_plugin.h	43;"	d
SUDO_CONV_ERROR_MSG	/usr/include/sudo_plugin.h	40;"	d
SUDO_CONV_INFO_MSG	/usr/include/sudo_plugin.h	41;"	d
SUDO_CONV_PROMPT_ECHO_OFF	/usr/include/sudo_plugin.h	38;"	d
SUDO_CONV_PROMPT_ECHO_OK	/usr/include/sudo_plugin.h	44;"	d
SUDO_CONV_PROMPT_ECHO_ON	/usr/include/sudo_plugin.h	39;"	d
SUDO_CONV_PROMPT_MASK	/usr/include/sudo_plugin.h	42;"	d
SUDO_CONV_REPL_MAX	/usr/include/sudo_plugin.h	59;"	d
SUDO_HOOK_GETENV	/usr/include/sudo_plugin.h	120;"	d
SUDO_HOOK_MKVERSION	/usr/include/sudo_plugin.h	91;"	d
SUDO_HOOK_PUTENV	/usr/include/sudo_plugin.h	119;"	d
SUDO_HOOK_RET_ERROR	/usr/include/sudo_plugin.h	107;"	d
SUDO_HOOK_RET_NEXT	/usr/include/sudo_plugin.h	108;"	d
SUDO_HOOK_RET_STOP	/usr/include/sudo_plugin.h	109;"	d
SUDO_HOOK_SETENV	/usr/include/sudo_plugin.h	117;"	d
SUDO_HOOK_UNSETENV	/usr/include/sudo_plugin.h	118;"	d
SUDO_HOOK_VERSION	/usr/include/sudo_plugin.h	92;"	d
SUDO_HOOK_VERSION_GET_MAJOR	/usr/include/sudo_plugin.h	95;"	d
SUDO_HOOK_VERSION_GET_MINOR	/usr/include/sudo_plugin.h	96;"	d
SUDO_HOOK_VERSION_MAJOR	/usr/include/sudo_plugin.h	89;"	d
SUDO_HOOK_VERSION_MINOR	/usr/include/sudo_plugin.h	90;"	d
SUDO_HOOK_VERSION_SET_MAJOR	/usr/include/sudo_plugin.h	97;"	d
SUDO_HOOK_VERSION_SET_MINOR	/usr/include/sudo_plugin.h	100;"	d
SUDO_IO_PLUGIN	/usr/include/sudo_plugin.h	148;"	d
SUDO_POLICY_PLUGIN	/usr/include/sudo_plugin.h	125;"	d
_SUDO_PLUGIN_H	/usr/include/sudo_plugin.h	18;"	d
check_policy	/usr/include/sudo_plugin.h	/^    int (*check_policy)(int argc, char * const argv[],$/;"	m	struct:policy_plugin	access:public
cleanup	/usr/include/sudo_plugin.h	/^    void (*cleanup)(void);$/;"	m	struct:sudoers_group_plugin	access:public
close	/usr/include/sudo_plugin.h	/^    void (*close)(int exit_status, int error); \/* wait status or error *\/$/;"	m	struct:io_plugin	access:public
close	/usr/include/sudo_plugin.h	/^    void (*close)(int exit_status, int error); \/* wait status or error *\/$/;"	m	struct:policy_plugin	access:public
closure	/usr/include/sudo_plugin.h	/^    void *closure;$/;"	m	struct:sudo_hook	access:public
deregister_hooks	/usr/include/sudo_plugin.h	/^    void (*deregister_hooks)(int version, int (*deregister_hook)(struct sudo_hook *hook));$/;"	m	struct:io_plugin	access:public
deregister_hooks	/usr/include/sudo_plugin.h	/^    void (*deregister_hooks)(int version, int (*deregister_hook)(struct sudo_hook *hook));$/;"	m	struct:policy_plugin	access:public
hook_fn	/usr/include/sudo_plugin.h	/^    sudo_hook_fn_t hook_fn;$/;"	m	struct:sudo_hook	access:public
hook_type	/usr/include/sudo_plugin.h	/^    int hook_type;$/;"	m	struct:sudo_hook	access:public
hook_version	/usr/include/sudo_plugin.h	/^    int hook_version;$/;"	m	struct:sudo_hook	access:public
init	/usr/include/sudo_plugin.h	/^    int (*init)(int version, sudo_printf_t sudo_printf, char *const argv[]);$/;"	m	struct:sudoers_group_plugin	access:public
init_session	/usr/include/sudo_plugin.h	/^    int (*init_session)(struct passwd *pwd, char **user_env_out[]);$/;"	m	struct:policy_plugin	access:public
invalidate	/usr/include/sudo_plugin.h	/^    void (*invalidate)(int remove);$/;"	m	struct:policy_plugin	access:public
io_plugin	/usr/include/sudo_plugin.h	/^struct io_plugin {$/;"	s
io_plugin::close	/usr/include/sudo_plugin.h	/^    void (*close)(int exit_status, int error); \/* wait status or error *\/$/;"	m	struct:io_plugin	access:public
io_plugin::deregister_hooks	/usr/include/sudo_plugin.h	/^    void (*deregister_hooks)(int version, int (*deregister_hook)(struct sudo_hook *hook));$/;"	m	struct:io_plugin	access:public
io_plugin::log_stderr	/usr/include/sudo_plugin.h	/^    int (*log_stderr)(const char *buf, unsigned int len);$/;"	m	struct:io_plugin	access:public
io_plugin::log_stdin	/usr/include/sudo_plugin.h	/^    int (*log_stdin)(const char *buf, unsigned int len);$/;"	m	struct:io_plugin	access:public
io_plugin::log_stdout	/usr/include/sudo_plugin.h	/^    int (*log_stdout)(const char *buf, unsigned int len);$/;"	m	struct:io_plugin	access:public
io_plugin::log_ttyin	/usr/include/sudo_plugin.h	/^    int (*log_ttyin)(const char *buf, unsigned int len);$/;"	m	struct:io_plugin	access:public
io_plugin::log_ttyout	/usr/include/sudo_plugin.h	/^    int (*log_ttyout)(const char *buf, unsigned int len);$/;"	m	struct:io_plugin	access:public
io_plugin::open	/usr/include/sudo_plugin.h	/^    int (*open)(unsigned int version, sudo_conv_t conversation,$/;"	m	struct:io_plugin	access:public
io_plugin::register_hooks	/usr/include/sudo_plugin.h	/^    void (*register_hooks)(int version, int (*register_hook)(struct sudo_hook *hook));$/;"	m	struct:io_plugin	access:public
io_plugin::show_version	/usr/include/sudo_plugin.h	/^    int (*show_version)(int verbose);$/;"	m	struct:io_plugin	access:public
io_plugin::type	/usr/include/sudo_plugin.h	/^    unsigned int type; \/* always SUDO_IO_PLUGIN *\/$/;"	m	struct:io_plugin	access:public
io_plugin::version	/usr/include/sudo_plugin.h	/^    unsigned int version; \/* always SUDO_API_VERSION *\/$/;"	m	struct:io_plugin	access:public
list	/usr/include/sudo_plugin.h	/^    int (*list)(int argc, char * const argv[], int verbose,$/;"	m	struct:policy_plugin	access:public
log_stderr	/usr/include/sudo_plugin.h	/^    int (*log_stderr)(const char *buf, unsigned int len);$/;"	m	struct:io_plugin	access:public
log_stdin	/usr/include/sudo_plugin.h	/^    int (*log_stdin)(const char *buf, unsigned int len);$/;"	m	struct:io_plugin	access:public
log_stdout	/usr/include/sudo_plugin.h	/^    int (*log_stdout)(const char *buf, unsigned int len);$/;"	m	struct:io_plugin	access:public
log_ttyin	/usr/include/sudo_plugin.h	/^    int (*log_ttyin)(const char *buf, unsigned int len);$/;"	m	struct:io_plugin	access:public
log_ttyout	/usr/include/sudo_plugin.h	/^    int (*log_ttyout)(const char *buf, unsigned int len);$/;"	m	struct:io_plugin	access:public
msg	/usr/include/sudo_plugin.h	/^    const char *msg;$/;"	m	struct:sudo_conv_message	access:public
msg_type	/usr/include/sudo_plugin.h	/^    int msg_type;$/;"	m	struct:sudo_conv_message	access:public
open	/usr/include/sudo_plugin.h	/^    int (*open)(unsigned int version, sudo_conv_t conversation,$/;"	m	struct:io_plugin	access:public
open	/usr/include/sudo_plugin.h	/^    int (*open)(unsigned int version, sudo_conv_t conversation,$/;"	m	struct:policy_plugin	access:public
passwd	/usr/include/sudo_plugin.h	/^struct passwd;$/;"	x
policy_plugin	/usr/include/sudo_plugin.h	/^struct policy_plugin {$/;"	s
policy_plugin::check_policy	/usr/include/sudo_plugin.h	/^    int (*check_policy)(int argc, char * const argv[],$/;"	m	struct:policy_plugin	access:public
policy_plugin::close	/usr/include/sudo_plugin.h	/^    void (*close)(int exit_status, int error); \/* wait status or error *\/$/;"	m	struct:policy_plugin	access:public
policy_plugin::deregister_hooks	/usr/include/sudo_plugin.h	/^    void (*deregister_hooks)(int version, int (*deregister_hook)(struct sudo_hook *hook));$/;"	m	struct:policy_plugin	access:public
policy_plugin::init_session	/usr/include/sudo_plugin.h	/^    int (*init_session)(struct passwd *pwd, char **user_env_out[]);$/;"	m	struct:policy_plugin	access:public
policy_plugin::invalidate	/usr/include/sudo_plugin.h	/^    void (*invalidate)(int remove);$/;"	m	struct:policy_plugin	access:public
policy_plugin::list	/usr/include/sudo_plugin.h	/^    int (*list)(int argc, char * const argv[], int verbose,$/;"	m	struct:policy_plugin	access:public
policy_plugin::open	/usr/include/sudo_plugin.h	/^    int (*open)(unsigned int version, sudo_conv_t conversation,$/;"	m	struct:policy_plugin	access:public
policy_plugin::register_hooks	/usr/include/sudo_plugin.h	/^    void (*register_hooks)(int version, int (*register_hook)(struct sudo_hook *hook));$/;"	m	struct:policy_plugin	access:public
policy_plugin::show_version	/usr/include/sudo_plugin.h	/^    int (*show_version)(int verbose);$/;"	m	struct:policy_plugin	access:public
policy_plugin::type	/usr/include/sudo_plugin.h	/^    unsigned int type; \/* always SUDO_POLICY_PLUGIN *\/$/;"	m	struct:policy_plugin	access:public
policy_plugin::validate	/usr/include/sudo_plugin.h	/^    int (*validate)(void);$/;"	m	struct:policy_plugin	access:public
policy_plugin::version	/usr/include/sudo_plugin.h	/^    unsigned int version; \/* always SUDO_API_VERSION *\/$/;"	m	struct:policy_plugin	access:public
query	/usr/include/sudo_plugin.h	/^    int (*query)(const char *user, const char *group, const struct passwd *pwd);$/;"	m	struct:sudoers_group_plugin	access:public
register_hooks	/usr/include/sudo_plugin.h	/^    void (*register_hooks)(int version, int (*register_hook)(struct sudo_hook *hook));$/;"	m	struct:io_plugin	access:public
register_hooks	/usr/include/sudo_plugin.h	/^    void (*register_hooks)(int version, int (*register_hook)(struct sudo_hook *hook));$/;"	m	struct:policy_plugin	access:public
reply	/usr/include/sudo_plugin.h	/^    char *reply;$/;"	m	struct:sudo_conv_reply	access:public
show_version	/usr/include/sudo_plugin.h	/^    int (*show_version)(int verbose);$/;"	m	struct:io_plugin	access:public
show_version	/usr/include/sudo_plugin.h	/^    int (*show_version)(int verbose);$/;"	m	struct:policy_plugin	access:public
sudo_conv_message	/usr/include/sudo_plugin.h	/^struct sudo_conv_message {$/;"	s
sudo_conv_message::msg	/usr/include/sudo_plugin.h	/^    const char *msg;$/;"	m	struct:sudo_conv_message	access:public
sudo_conv_message::msg_type	/usr/include/sudo_plugin.h	/^    int msg_type;$/;"	m	struct:sudo_conv_message	access:public
sudo_conv_message::timeout	/usr/include/sudo_plugin.h	/^    int timeout;$/;"	m	struct:sudo_conv_message	access:public
sudo_conv_reply	/usr/include/sudo_plugin.h	/^struct sudo_conv_reply {$/;"	s
sudo_conv_reply::reply	/usr/include/sudo_plugin.h	/^    char *reply;$/;"	m	struct:sudo_conv_reply	access:public
sudo_conv_t	/usr/include/sudo_plugin.h	/^typedef int (*sudo_conv_t)(int num_msgs, const struct sudo_conv_message msgs[],$/;"	t
sudo_hook	/usr/include/sudo_plugin.h	/^struct sudo_hook {$/;"	s
sudo_hook::closure	/usr/include/sudo_plugin.h	/^    void *closure;$/;"	m	struct:sudo_hook	access:public
sudo_hook::hook_fn	/usr/include/sudo_plugin.h	/^    sudo_hook_fn_t hook_fn;$/;"	m	struct:sudo_hook	access:public
sudo_hook::hook_type	/usr/include/sudo_plugin.h	/^    int hook_type;$/;"	m	struct:sudo_hook	access:public
sudo_hook::hook_version	/usr/include/sudo_plugin.h	/^    int hook_version;$/;"	m	struct:sudo_hook	access:public
sudo_hook_fn_getenv_t	/usr/include/sudo_plugin.h	/^typedef int (*sudo_hook_fn_getenv_t)(const char *name, char **value, void *closure);$/;"	t
sudo_hook_fn_putenv_t	/usr/include/sudo_plugin.h	/^typedef int (*sudo_hook_fn_putenv_t)(char *string, void *closure);$/;"	t
sudo_hook_fn_setenv_t	/usr/include/sudo_plugin.h	/^typedef int (*sudo_hook_fn_setenv_t)(const char *name, const char *value, int overwrite, void *closure);$/;"	t
sudo_hook_fn_t	/usr/include/sudo_plugin.h	/^typedef int (*sudo_hook_fn_t)();$/;"	t
sudo_hook_fn_unsetenv_t	/usr/include/sudo_plugin.h	/^typedef int (*sudo_hook_fn_unsetenv_t)(const char *name, void *closure);$/;"	t
sudo_printf_t	/usr/include/sudo_plugin.h	/^typedef int (*sudo_printf_t)(int msg_type, const char *fmt, ...);$/;"	t
sudoers_group_plugin	/usr/include/sudo_plugin.h	/^struct sudoers_group_plugin {$/;"	s
sudoers_group_plugin::cleanup	/usr/include/sudo_plugin.h	/^    void (*cleanup)(void);$/;"	m	struct:sudoers_group_plugin	access:public
sudoers_group_plugin::init	/usr/include/sudo_plugin.h	/^    int (*init)(int version, sudo_printf_t sudo_printf, char *const argv[]);$/;"	m	struct:sudoers_group_plugin	access:public
sudoers_group_plugin::query	/usr/include/sudo_plugin.h	/^    int (*query)(const char *user, const char *group, const struct passwd *pwd);$/;"	m	struct:sudoers_group_plugin	access:public
sudoers_group_plugin::version	/usr/include/sudo_plugin.h	/^    unsigned int version;$/;"	m	struct:sudoers_group_plugin	access:public
timeout	/usr/include/sudo_plugin.h	/^    int timeout;$/;"	m	struct:sudo_conv_message	access:public
type	/usr/include/sudo_plugin.h	/^    unsigned int type; \/* always SUDO_IO_PLUGIN *\/$/;"	m	struct:io_plugin	access:public
type	/usr/include/sudo_plugin.h	/^    unsigned int type; \/* always SUDO_POLICY_PLUGIN *\/$/;"	m	struct:policy_plugin	access:public
validate	/usr/include/sudo_plugin.h	/^    int (*validate)(void);$/;"	m	struct:policy_plugin	access:public
version	/usr/include/sudo_plugin.h	/^    unsigned int version; \/* always SUDO_API_VERSION *\/$/;"	m	struct:io_plugin	access:public
version	/usr/include/sudo_plugin.h	/^    unsigned int version; \/* always SUDO_API_VERSION *\/$/;"	m	struct:policy_plugin	access:public
version	/usr/include/sudo_plugin.h	/^    unsigned int version;$/;"	m	struct:sudoers_group_plugin	access:public
