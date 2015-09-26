!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
POSIX_SPAWN_RESETIDS	/usr/include/spawn.h	54;"	d
POSIX_SPAWN_SETPGROUP	/usr/include/spawn.h	55;"	d
POSIX_SPAWN_SETSCHEDPARAM	/usr/include/spawn.h	58;"	d
POSIX_SPAWN_SETSCHEDULER	/usr/include/spawn.h	59;"	d
POSIX_SPAWN_SETSIGDEF	/usr/include/spawn.h	56;"	d
POSIX_SPAWN_SETSIGMASK	/usr/include/spawn.h	57;"	d
POSIX_SPAWN_USEVFORK	/usr/include/spawn.h	61;"	d
_SPAWN_H	/usr/include/spawn.h	20;"	d
__actions	/usr/include/spawn.h	/^  struct __spawn_action *__actions;$/;"	m	struct:__anon2	typeref:struct:__anon2::__spawn_action	access:public
__allocated	/usr/include/spawn.h	/^  int __allocated;$/;"	m	struct:__anon2	access:public
__anon1::__flags	/usr/include/spawn.h	/^  short int __flags;$/;"	m	struct:__anon1	access:public
__anon1::__pad	/usr/include/spawn.h	/^  int __pad[16];$/;"	m	struct:__anon1	access:public
__anon1::__pgrp	/usr/include/spawn.h	/^  pid_t __pgrp;$/;"	m	struct:__anon1	access:public
__anon1::__policy	/usr/include/spawn.h	/^  int __policy;$/;"	m	struct:__anon1	access:public
__anon1::__sd	/usr/include/spawn.h	/^  sigset_t __sd;$/;"	m	struct:__anon1	access:public
__anon1::__sp	/usr/include/spawn.h	/^  struct sched_param __sp;$/;"	m	struct:__anon1	typeref:struct:__anon1::sched_param	access:public
__anon1::__ss	/usr/include/spawn.h	/^  sigset_t __ss;$/;"	m	struct:__anon1	access:public
__anon2::__actions	/usr/include/spawn.h	/^  struct __spawn_action *__actions;$/;"	m	struct:__anon2	typeref:struct:__anon2::__spawn_action	access:public
__anon2::__allocated	/usr/include/spawn.h	/^  int __allocated;$/;"	m	struct:__anon2	access:public
__anon2::__pad	/usr/include/spawn.h	/^  int __pad[16];$/;"	m	struct:__anon2	access:public
__anon2::__used	/usr/include/spawn.h	/^  int __used;$/;"	m	struct:__anon2	access:public
__flags	/usr/include/spawn.h	/^  short int __flags;$/;"	m	struct:__anon1	access:public
__need_sigset_t	/usr/include/spawn.h	24;"	d
__pad	/usr/include/spawn.h	/^  int __pad[16];$/;"	m	struct:__anon1	access:public
__pad	/usr/include/spawn.h	/^  int __pad[16];$/;"	m	struct:__anon2	access:public
__pgrp	/usr/include/spawn.h	/^  pid_t __pgrp;$/;"	m	struct:__anon1	access:public
__policy	/usr/include/spawn.h	/^  int __policy;$/;"	m	struct:__anon1	access:public
__sd	/usr/include/spawn.h	/^  sigset_t __sd;$/;"	m	struct:__anon1	access:public
__sp	/usr/include/spawn.h	/^  struct sched_param __sp;$/;"	m	struct:__anon1	typeref:struct:__anon1::sched_param	access:public
__ss	/usr/include/spawn.h	/^  sigset_t __ss;$/;"	m	struct:__anon1	access:public
__used	/usr/include/spawn.h	/^  int __used;$/;"	m	struct:__anon2	access:public
posix_spawn	/usr/include/spawn.h	/^extern int posix_spawn (pid_t *__restrict __pid,$/;"	p	signature:(pid_t *__restrict __pid, const char *__restrict __path, const posix_spawn_file_actions_t *__restrict __file_actions, const posix_spawnattr_t *__restrict __attrp, char *const __argv[__restrict_arr], char *const __envp[__restrict_arr])
posix_spawn_file_actions_addclose	/usr/include/spawn.h	/^extern int posix_spawn_file_actions_addclose (posix_spawn_file_actions_t *$/;"	p	signature:(posix_spawn_file_actions_t * __file_actions, int __fd)
posix_spawn_file_actions_adddup2	/usr/include/spawn.h	/^extern int posix_spawn_file_actions_adddup2 (posix_spawn_file_actions_t *$/;"	p	signature:(posix_spawn_file_actions_t * __file_actions, int __fd, int __newfd)
posix_spawn_file_actions_addopen	/usr/include/spawn.h	/^extern int posix_spawn_file_actions_addopen (posix_spawn_file_actions_t *$/;"	p	signature:(posix_spawn_file_actions_t * __restrict __file_actions, int __fd, const char *__restrict __path, int __oflag, mode_t __mode)
posix_spawn_file_actions_destroy	/usr/include/spawn.h	/^extern int posix_spawn_file_actions_destroy (posix_spawn_file_actions_t *$/;"	p	signature:(posix_spawn_file_actions_t * __file_actions)
posix_spawn_file_actions_init	/usr/include/spawn.h	/^extern int posix_spawn_file_actions_init (posix_spawn_file_actions_t *$/;"	p	signature:(posix_spawn_file_actions_t * __file_actions)
posix_spawn_file_actions_t	/usr/include/spawn.h	/^} posix_spawn_file_actions_t;$/;"	t	typeref:struct:__anon2
posix_spawnattr_destroy	/usr/include/spawn.h	/^extern int posix_spawnattr_destroy (posix_spawnattr_t *__attr) __THROW;$/;"	p	signature:(posix_spawnattr_t *__attr)
posix_spawnattr_getflags	/usr/include/spawn.h	/^extern int posix_spawnattr_getflags (const posix_spawnattr_t *__restrict$/;"	p	signature:(const posix_spawnattr_t *__restrict __attr, short int *__restrict __flags)
posix_spawnattr_getpgroup	/usr/include/spawn.h	/^extern int posix_spawnattr_getpgroup (const posix_spawnattr_t *__restrict$/;"	p	signature:(const posix_spawnattr_t *__restrict __attr, pid_t *__restrict __pgroup)
posix_spawnattr_getschedparam	/usr/include/spawn.h	/^extern int posix_spawnattr_getschedparam (const posix_spawnattr_t *$/;"	p	signature:(const posix_spawnattr_t * __restrict __attr, struct sched_param *__restrict __schedparam)
posix_spawnattr_getschedpolicy	/usr/include/spawn.h	/^extern int posix_spawnattr_getschedpolicy (const posix_spawnattr_t *$/;"	p	signature:(const posix_spawnattr_t * __restrict __attr, int *__restrict __schedpolicy)
posix_spawnattr_getsigdefault	/usr/include/spawn.h	/^extern int posix_spawnattr_getsigdefault (const posix_spawnattr_t *$/;"	p	signature:(const posix_spawnattr_t * __restrict __attr, sigset_t *__restrict __sigdefault)
posix_spawnattr_getsigmask	/usr/include/spawn.h	/^extern int posix_spawnattr_getsigmask (const posix_spawnattr_t *__restrict$/;"	p	signature:(const posix_spawnattr_t *__restrict __attr, sigset_t *__restrict __sigmask)
posix_spawnattr_init	/usr/include/spawn.h	/^extern int posix_spawnattr_init (posix_spawnattr_t *__attr) __THROW;$/;"	p	signature:(posix_spawnattr_t *__attr)
posix_spawnattr_setflags	/usr/include/spawn.h	/^extern int posix_spawnattr_setflags (posix_spawnattr_t *_attr,$/;"	p	signature:(posix_spawnattr_t *_attr, short int __flags)
posix_spawnattr_setpgroup	/usr/include/spawn.h	/^extern int posix_spawnattr_setpgroup (posix_spawnattr_t *__attr,$/;"	p	signature:(posix_spawnattr_t *__attr, pid_t __pgroup)
posix_spawnattr_setschedparam	/usr/include/spawn.h	/^extern int posix_spawnattr_setschedparam (posix_spawnattr_t *__restrict __attr,$/;"	p	signature:(posix_spawnattr_t *__restrict __attr, const struct sched_param * __restrict __schedparam)
posix_spawnattr_setschedpolicy	/usr/include/spawn.h	/^extern int posix_spawnattr_setschedpolicy (posix_spawnattr_t *__attr,$/;"	p	signature:(posix_spawnattr_t *__attr, int __schedpolicy)
posix_spawnattr_setsigdefault	/usr/include/spawn.h	/^extern int posix_spawnattr_setsigdefault (posix_spawnattr_t *__restrict __attr,$/;"	p	signature:(posix_spawnattr_t *__restrict __attr, const sigset_t *__restrict __sigdefault)
posix_spawnattr_setsigmask	/usr/include/spawn.h	/^extern int posix_spawnattr_setsigmask (posix_spawnattr_t *__restrict __attr,$/;"	p	signature:(posix_spawnattr_t *__restrict __attr, const sigset_t *__restrict __sigmask)
posix_spawnattr_t	/usr/include/spawn.h	/^} posix_spawnattr_t;$/;"	t	typeref:struct:__anon1
posix_spawnp	/usr/include/spawn.h	/^extern int posix_spawnp (pid_t *__pid, const char *__file,$/;"	p	signature:(pid_t *__pid, const char *__file, const posix_spawn_file_actions_t *__file_actions, const posix_spawnattr_t *__attrp, char *const __argv[], char *const __envp[])
