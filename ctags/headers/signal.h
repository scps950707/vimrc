!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
NSIG	/usr/include/signal.h	200;"	d
SV_INTERRUPT	/usr/include/signal.h	318;"	d
SV_ONSTACK	/usr/include/signal.h	317;"	d
SV_RESETHAND	/usr/include/signal.h	319;"	d
_SIGNAL_H	/usr/include/signal.h	25;"	d
__libc_current_sigrtmax	/usr/include/signal.h	/^extern int __libc_current_sigrtmax (void) __THROW;$/;"	p	signature:(void)
__libc_current_sigrtmin	/usr/include/signal.h	/^extern int __libc_current_sigrtmin (void) __THROW;$/;"	p	signature:(void)
__need_sig_atomic_t	/usr/include/signal.h	43;"	d
__need_sigset_t	/usr/include/signal.h	51;"	d
__need_size_t	/usr/include/signal.h	341;"	d
__need_timespec	/usr/include/signal.h	74;"	d
__pid_t_defined	/usr/include/signal.h	62;"	d
__sig_atomic_t_defined	/usr/include/signal.h	38;"	d
__sighandler_t	/usr/include/signal.h	/^typedef void (*__sighandler_t) (int);$/;"	t
__sigpause	/usr/include/signal.h	/^extern int __sigpause (int __sig_or_mask, int __is_sig);$/;"	p	signature:(int __sig_or_mask, int __is_sig)
__sigset_t_defined	/usr/include/signal.h	48;"	d
__sysv_signal	/usr/include/signal.h	/^extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)$/;"	p	signature:(int __sig, __sighandler_t __handler)
__uid_t_defined	/usr/include/signal.h	68;"	d
_sys_siglist	/usr/include/signal.h	/^extern const char *const _sys_siglist[_NSIG];$/;"	x
bsd_signal	/usr/include/signal.h	/^extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)$/;"	p	signature:(int __sig, __sighandler_t __handler)
gsignal	/usr/include/signal.h	/^extern int gsignal (int __sig) __THROW;$/;"	p	signature:(int __sig)
kill	/usr/include/signal.h	/^extern int kill (__pid_t __pid, int __sig) __THROW;$/;"	p	signature:(__pid_t __pid, int __sig)
killpg	/usr/include/signal.h	/^extern int killpg (__pid_t __pgrp, int __sig) __THROW;$/;"	p	signature:(__pid_t __pgrp, int __sig)
pid_t	/usr/include/signal.h	/^typedef __pid_t pid_t;$/;"	t
psiginfo	/usr/include/signal.h	/^extern void psiginfo (const siginfo_t *__pinfo, const char *__s);$/;"	p	signature:(const siginfo_t *__pinfo, const char *__s)
psignal	/usr/include/signal.h	/^extern void psignal (int __sig, const char *__s);$/;"	p	signature:(int __sig, const char *__s)
raise	/usr/include/signal.h	/^extern int raise (int __sig) __THROW;$/;"	p	signature:(int __sig)
sig_atomic_t	/usr/include/signal.h	/^typedef __sig_atomic_t sig_atomic_t;$/;"	t
sig_t	/usr/include/signal.h	/^typedef __sighandler_t sig_t;$/;"	t
sigaction	/usr/include/signal.h	/^extern int sigaction (int __sig, const struct sigaction *__restrict __act,$/;"	p	signature:(int __sig, const struct sigaction *__restrict __act, struct sigaction *__restrict __oact)
sigaddset	/usr/include/signal.h	/^extern int sigaddset (sigset_t *__set, int __signo) __THROW __nonnull ((1));$/;"	p	signature:(sigset_t *__set, int __signo)
sigaltstack	/usr/include/signal.h	/^extern int sigaltstack (const struct sigaltstack *__restrict __ss,$/;"	p	signature:(const struct sigaltstack *__restrict __ss, struct sigaltstack *__restrict __oss)
sigandset	/usr/include/signal.h	/^extern int sigandset (sigset_t *__set, const sigset_t *__left,$/;"	p	signature:(sigset_t *__set, const sigset_t *__left, const sigset_t *__right)
sigblock	/usr/include/signal.h	/^extern int sigblock (int __mask) __THROW __attribute_deprecated__;$/;"	p	signature:(int __mask)
sigdelset	/usr/include/signal.h	/^extern int sigdelset (sigset_t *__set, int __signo) __THROW __nonnull ((1));$/;"	p	signature:(sigset_t *__set, int __signo)
sigemptyset	/usr/include/signal.h	/^extern int sigemptyset (sigset_t *__set) __THROW __nonnull ((1));$/;"	p	signature:(sigset_t *__set)
sigfillset	/usr/include/signal.h	/^extern int sigfillset (sigset_t *__set) __THROW __nonnull ((1));$/;"	p	signature:(sigset_t *__set)
siggetmask	/usr/include/signal.h	/^extern int siggetmask (void) __THROW __attribute_deprecated__;$/;"	p	signature:(void)
sighandler_t	/usr/include/signal.h	/^typedef __sighandler_t sighandler_t;$/;"	t
sighold	/usr/include/signal.h	/^extern int sighold (int __sig) __THROW;$/;"	p	signature:(int __sig)
sigignore	/usr/include/signal.h	/^extern int sigignore (int __sig) __THROW;$/;"	p	signature:(int __sig)
siginterrupt	/usr/include/signal.h	/^extern int siginterrupt (int __sig, int __interrupt) __THROW;$/;"	p	signature:(int __sig, int __interrupt)
sigisemptyset	/usr/include/signal.h	/^extern int sigisemptyset (const sigset_t *__set) __THROW __nonnull ((1));$/;"	p	signature:(const sigset_t *__set)
sigismember	/usr/include/signal.h	/^extern int sigismember (const sigset_t *__set, int __signo)$/;"	p	signature:(const sigset_t *__set, int __signo)
sigmask	/usr/include/signal.h	186;"	d
signal	/usr/include/signal.h	/^extern __sighandler_t signal (int __sig, __sighandler_t __handler)$/;"	p	signature:(int __sig, __sighandler_t __handler)
sigorset	/usr/include/signal.h	/^extern int sigorset (sigset_t *__set, const sigset_t *__left,$/;"	p	signature:(sigset_t *__set, const sigset_t *__left, const sigset_t *__right)
sigpause	/usr/include/signal.h	174;"	d
sigpending	/usr/include/signal.h	/^extern int sigpending (sigset_t *__set) __THROW __nonnull ((1));$/;"	p	signature:(sigset_t *__set)
sigprocmask	/usr/include/signal.h	/^extern int sigprocmask (int __how, const sigset_t *__restrict __set,$/;"	p	signature:(int __how, const sigset_t *__restrict __set, sigset_t *__restrict __oset)
sigqueue	/usr/include/signal.h	/^extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)$/;"	p	signature:(__pid_t __pid, int __sig, const union sigval __val)
sigrelse	/usr/include/signal.h	/^extern int sigrelse (int __sig) __THROW;$/;"	p	signature:(int __sig)
sigreturn	/usr/include/signal.h	/^extern int sigreturn (struct sigcontext *__scp) __THROW;$/;"	p	signature:(struct sigcontext *__scp)
sigset	/usr/include/signal.h	/^extern __sighandler_t sigset (int __sig, __sighandler_t __disp) __THROW;$/;"	p	signature:(int __sig, __sighandler_t __disp)
sigset_t	/usr/include/signal.h	/^typedef __sigset_t sigset_t;$/;"	t
sigsetmask	/usr/include/signal.h	/^extern int sigsetmask (int __mask) __THROW __attribute_deprecated__;$/;"	p	signature:(int __mask)
sigstack	/usr/include/signal.h	/^extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)$/;"	p	signature:(struct sigstack *__ss, struct sigstack *__oss)
sigsuspend	/usr/include/signal.h	/^extern int sigsuspend (const sigset_t *__set) __nonnull ((1));$/;"	p	signature:(const sigset_t *__set)
sigtimedwait	/usr/include/signal.h	/^extern int sigtimedwait (const sigset_t *__restrict __set,$/;"	p	signature:(const sigset_t *__restrict __set, siginfo_t *__restrict __info, const struct timespec *__restrict __timeout)
sigvec	/usr/include/signal.h	/^extern int sigvec (int __sig, const struct sigvec *__vec,$/;"	p	signature:(int __sig, const struct sigvec *__vec, struct sigvec *__ovec)
sigvec	/usr/include/signal.h	/^struct sigvec$/;"	s
sigvec::sv_flags	/usr/include/signal.h	/^    int sv_flags;		\/* Flags (see below).  *\/$/;"	m	struct:sigvec	access:public
sigvec::sv_handler	/usr/include/signal.h	/^    __sighandler_t sv_handler;	\/* Signal handler.  *\/$/;"	m	struct:sigvec	access:public
sigvec::sv_mask	/usr/include/signal.h	/^    int sv_mask;		\/* Mask of signals to be blocked.  *\/$/;"	m	struct:sigvec	access:public
sigwait	/usr/include/signal.h	/^extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)$/;"	p	signature:(const sigset_t *__restrict __set, int *__restrict __sig)
sigwaitinfo	/usr/include/signal.h	/^extern int sigwaitinfo (const sigset_t *__restrict __set,$/;"	p	signature:(const sigset_t *__restrict __set, siginfo_t *__restrict __info)
ssignal	/usr/include/signal.h	/^extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)$/;"	p	signature:(int __sig, __sighandler_t __handler)
sv_flags	/usr/include/signal.h	/^    int sv_flags;		\/* Flags (see below).  *\/$/;"	m	struct:sigvec	access:public
sv_handler	/usr/include/signal.h	/^    __sighandler_t sv_handler;	\/* Signal handler.  *\/$/;"	m	struct:sigvec	access:public
sv_mask	/usr/include/signal.h	/^    int sv_mask;		\/* Mask of signals to be blocked.  *\/$/;"	m	struct:sigvec	access:public
sv_onstack	/usr/include/signal.h	313;"	d
sys_siglist	/usr/include/signal.h	/^extern const char *const sys_siglist[_NSIG];$/;"	x
sysv_signal	/usr/include/signal.h	/^extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)$/;"	p	signature:(int __sig, __sighandler_t __handler)
uid_t	/usr/include/signal.h	/^typedef __uid_t uid_t;$/;"	t
