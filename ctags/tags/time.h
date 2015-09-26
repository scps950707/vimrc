!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.9~svn20110310	//
CLK_TCK	/usr/include/time.h	46;"	d
TIME_UTC	/usr/include/time.h	182;"	d
_TIME_H	/usr/include/time.h	26;"	d
__clock_t_defined	/usr/include/time.h	53;"	d
__clockid_t_defined	/usr/include/time.h	86;"	d
__clockid_time_t	/usr/include/time.h	94;"	d
__daylight	/usr/include/time.h	/^extern int __daylight;		\/* If daylight-saving time is ever in use.  *\/$/;"	x
__isleap	/usr/include/time.h	310;"	d
__need_NULL	/usr/include/time.h	36;"	d
__need_clock_t	/usr/include/time.h	66;"	d
__need_size_t	/usr/include/time.h	35;"	d
__need_time_t	/usr/include/time.h	82;"	d
__need_timer_t	/usr/include/time.h	106;"	d
__need_timespec	/usr/include/time.h	127;"	d
__pid_t_defined	/usr/include/time.h	175;"	d
__time_t_defined	/usr/include/time.h	69;"	d
__timer_t_defined	/usr/include/time.h	98;"	d
__timespec_defined	/usr/include/time.h	114;"	d
__timezone	/usr/include/time.h	/^extern long int __timezone;	\/* Seconds west of UTC.  *\/$/;"	x
__tm_gmtoff	/usr/include/time.h	/^  long int __tm_gmtoff;		\/* Seconds east of UTC.  *\/$/;"	m	struct:tm	access:public
__tm_zone	/usr/include/time.h	/^  const char *__tm_zone;	\/* Timezone abbreviation.  *\/$/;"	m	struct:tm	access:public
__tzname	/usr/include/time.h	/^extern char *__tzname[2];	\/* Current timezone names.  *\/$/;"	x
asctime	/usr/include/time.h	/^extern char *asctime (const struct tm *__tp) __THROW;$/;"	p	signature:(const struct tm *__tp)
asctime_r	/usr/include/time.h	/^extern char *asctime_r (const struct tm *__restrict __tp,$/;"	p	signature:(const struct tm *__restrict __tp, char *__restrict __buf)
clock	/usr/include/time.h	/^extern clock_t clock (void) __THROW;$/;"	p	signature:(void)
clock_getcpuclockid	/usr/include/time.h	/^extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __THROW;$/;"	p	signature:(pid_t __pid, clockid_t *__clock_id)
clock_getres	/usr/include/time.h	/^extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __THROW;$/;"	p	signature:(clockid_t __clock_id, struct timespec *__res)
clock_gettime	/usr/include/time.h	/^extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __THROW;$/;"	p	signature:(clockid_t __clock_id, struct timespec *__tp)
clock_nanosleep	/usr/include/time.h	/^extern int clock_nanosleep (clockid_t __clock_id, int __flags,$/;"	p	signature:(clockid_t __clock_id, int __flags, const struct timespec *__req, struct timespec *__rem)
clock_settime	/usr/include/time.h	/^extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)$/;"	p	signature:(clockid_t __clock_id, const struct timespec *__tp)
clock_t	/usr/include/time.h	/^typedef __clock_t clock_t;$/;"	t
clockid_t	/usr/include/time.h	/^typedef __clockid_t clockid_t;$/;"	t
ctime	/usr/include/time.h	/^extern char *ctime (const time_t *__timer) __THROW;$/;"	p	signature:(const time_t *__timer)
ctime_r	/usr/include/time.h	/^extern char *ctime_r (const time_t *__restrict __timer,$/;"	p	signature:(const time_t *__restrict __timer, char *__restrict __buf)
daylight	/usr/include/time.h	/^extern int daylight;$/;"	x
difftime	/usr/include/time.h	/^extern double difftime (time_t __time1, time_t __time0)$/;"	p	signature:(time_t __time1, time_t __time0)
dysize	/usr/include/time.h	/^extern int dysize (int __year) __THROW  __attribute__ ((__const__));$/;"	p	signature:(int __year)
getdate	/usr/include/time.h	/^extern struct tm *getdate (const char *__string);$/;"	p	signature:(const char *__string)
getdate_err	/usr/include/time.h	/^extern int getdate_err;$/;"	x
getdate_r	/usr/include/time.h	/^extern int getdate_r (const char *__restrict __string,$/;"	p	signature:(const char *__restrict __string, struct tm *__restrict __resbufp)
gmtime	/usr/include/time.h	/^extern struct tm *gmtime (const time_t *__timer) __THROW;$/;"	p	signature:(const time_t *__timer)
gmtime_r	/usr/include/time.h	/^extern struct tm *gmtime_r (const time_t *__restrict __timer,$/;"	p	signature:(const time_t *__restrict __timer, struct tm *__restrict __tp)
it_interval	/usr/include/time.h	/^    struct timespec it_interval;$/;"	m	struct:itimerspec	typeref:struct:itimerspec::timespec	access:public
it_value	/usr/include/time.h	/^    struct timespec it_value;$/;"	m	struct:itimerspec	typeref:struct:itimerspec::timespec	access:public
itimerspec	/usr/include/time.h	/^struct itimerspec$/;"	s
itimerspec::it_interval	/usr/include/time.h	/^    struct timespec it_interval;$/;"	m	struct:itimerspec	typeref:struct:itimerspec::timespec	access:public
itimerspec::it_value	/usr/include/time.h	/^    struct timespec it_value;$/;"	m	struct:itimerspec	typeref:struct:itimerspec::timespec	access:public
localtime	/usr/include/time.h	/^extern struct tm *localtime (const time_t *__timer) __THROW;$/;"	p	signature:(const time_t *__timer)
localtime_r	/usr/include/time.h	/^extern struct tm *localtime_r (const time_t *__restrict __timer,$/;"	p	signature:(const time_t *__restrict __timer, struct tm *__restrict __tp)
mktime	/usr/include/time.h	/^extern time_t mktime (struct tm *__tp) __THROW;$/;"	p	signature:(struct tm *__tp)
nanosleep	/usr/include/time.h	/^extern int nanosleep (const struct timespec *__requested_time,$/;"	p	signature:(const struct timespec *__requested_time, struct timespec *__remaining)
pid_t	/usr/include/time.h	/^typedef __pid_t pid_t;$/;"	t
sigevent	/usr/include/time.h	/^struct sigevent;$/;"	x
stime	/usr/include/time.h	/^extern int stime (const time_t *__when) __THROW;$/;"	p	signature:(const time_t *__when)
strftime	/usr/include/time.h	/^extern size_t strftime (char *__restrict __s, size_t __maxsize,$/;"	p	signature:(char *__restrict __s, size_t __maxsize, const char *__restrict __format, const struct tm *__restrict __tp)
strftime_l	/usr/include/time.h	/^extern size_t strftime_l (char *__restrict __s, size_t __maxsize,$/;"	p	signature:(char *__restrict __s, size_t __maxsize, const char *__restrict __format, const struct tm *__restrict __tp, __locale_t __loc)
strptime	/usr/include/time.h	/^extern char *strptime (const char *__restrict __s,$/;"	p	signature:(const char *__restrict __s, const char *__restrict __fmt, struct tm *__tp)
strptime_l	/usr/include/time.h	/^extern char *strptime_l (const char *__restrict __s,$/;"	p	signature:(const char *__restrict __s, const char *__restrict __fmt, struct tm *__tp, __locale_t __loc)
time	/usr/include/time.h	/^extern time_t time (time_t *__timer) __THROW;$/;"	p	signature:(time_t *__timer)
time_t	/usr/include/time.h	/^typedef __time_t time_t;$/;"	t
timegm	/usr/include/time.h	/^extern time_t timegm (struct tm *__tp) __THROW;$/;"	p	signature:(struct tm *__tp)
timelocal	/usr/include/time.h	/^extern time_t timelocal (struct tm *__tp) __THROW;$/;"	p	signature:(struct tm *__tp)
timer_create	/usr/include/time.h	/^extern int timer_create (clockid_t __clock_id,$/;"	p	signature:(clockid_t __clock_id, struct sigevent *__restrict __evp, timer_t *__restrict __timerid)
timer_delete	/usr/include/time.h	/^extern int timer_delete (timer_t __timerid) __THROW;$/;"	p	signature:(timer_t __timerid)
timer_getoverrun	/usr/include/time.h	/^extern int timer_getoverrun (timer_t __timerid) __THROW;$/;"	p	signature:(timer_t __timerid)
timer_gettime	/usr/include/time.h	/^extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)$/;"	p	signature:(timer_t __timerid, struct itimerspec *__value)
timer_settime	/usr/include/time.h	/^extern int timer_settime (timer_t __timerid, int __flags,$/;"	p	signature:(timer_t __timerid, int __flags, const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue)
timer_t	/usr/include/time.h	/^typedef __timer_t timer_t;$/;"	t
timespec	/usr/include/time.h	/^struct timespec$/;"	s
timespec::tv_nsec	/usr/include/time.h	/^    __syscall_slong_t tv_nsec;	\/* Nanoseconds.  *\/$/;"	m	struct:timespec	access:public
timespec::tv_sec	/usr/include/time.h	/^    __time_t tv_sec;		\/* Seconds.  *\/$/;"	m	struct:timespec	access:public
timespec_get	/usr/include/time.h	/^extern int timespec_get (struct timespec *__ts, int __base)$/;"	p	signature:(struct timespec *__ts, int __base)
timezone	/usr/include/time.h	/^extern long int timezone;$/;"	x
tm	/usr/include/time.h	/^struct tm$/;"	s
tm::__tm_gmtoff	/usr/include/time.h	/^  long int __tm_gmtoff;		\/* Seconds east of UTC.  *\/$/;"	m	struct:tm	access:public
tm::__tm_zone	/usr/include/time.h	/^  const char *__tm_zone;	\/* Timezone abbreviation.  *\/$/;"	m	struct:tm	access:public
tm::tm_gmtoff	/usr/include/time.h	/^  long int tm_gmtoff;		\/* Seconds east of UTC.  *\/$/;"	m	struct:tm	access:public
tm::tm_hour	/usr/include/time.h	/^  int tm_hour;			\/* Hours.	[0-23] *\/$/;"	m	struct:tm	access:public
tm::tm_isdst	/usr/include/time.h	/^  int tm_isdst;			\/* DST.		[-1\/0\/1]*\/$/;"	m	struct:tm	access:public
tm::tm_mday	/usr/include/time.h	/^  int tm_mday;			\/* Day.		[1-31] *\/$/;"	m	struct:tm	access:public
tm::tm_min	/usr/include/time.h	/^  int tm_min;			\/* Minutes.	[0-59] *\/$/;"	m	struct:tm	access:public
tm::tm_mon	/usr/include/time.h	/^  int tm_mon;			\/* Month.	[0-11] *\/$/;"	m	struct:tm	access:public
tm::tm_sec	/usr/include/time.h	/^  int tm_sec;			\/* Seconds.	[0-60] (1 leap second) *\/$/;"	m	struct:tm	access:public
tm::tm_wday	/usr/include/time.h	/^  int tm_wday;			\/* Day of week.	[0-6] *\/$/;"	m	struct:tm	access:public
tm::tm_yday	/usr/include/time.h	/^  int tm_yday;			\/* Days in year.[0-365]	*\/$/;"	m	struct:tm	access:public
tm::tm_year	/usr/include/time.h	/^  int tm_year;			\/* Year	- 1900.  *\/$/;"	m	struct:tm	access:public
tm::tm_zone	/usr/include/time.h	/^  const char *tm_zone;		\/* Timezone abbreviation.  *\/$/;"	m	struct:tm	access:public
tm_gmtoff	/usr/include/time.h	/^  long int tm_gmtoff;		\/* Seconds east of UTC.  *\/$/;"	m	struct:tm	access:public
tm_hour	/usr/include/time.h	/^  int tm_hour;			\/* Hours.	[0-23] *\/$/;"	m	struct:tm	access:public
tm_isdst	/usr/include/time.h	/^  int tm_isdst;			\/* DST.		[-1\/0\/1]*\/$/;"	m	struct:tm	access:public
tm_mday	/usr/include/time.h	/^  int tm_mday;			\/* Day.		[1-31] *\/$/;"	m	struct:tm	access:public
tm_min	/usr/include/time.h	/^  int tm_min;			\/* Minutes.	[0-59] *\/$/;"	m	struct:tm	access:public
tm_mon	/usr/include/time.h	/^  int tm_mon;			\/* Month.	[0-11] *\/$/;"	m	struct:tm	access:public
tm_sec	/usr/include/time.h	/^  int tm_sec;			\/* Seconds.	[0-60] (1 leap second) *\/$/;"	m	struct:tm	access:public
tm_wday	/usr/include/time.h	/^  int tm_wday;			\/* Day of week.	[0-6] *\/$/;"	m	struct:tm	access:public
tm_yday	/usr/include/time.h	/^  int tm_yday;			\/* Days in year.[0-365]	*\/$/;"	m	struct:tm	access:public
tm_year	/usr/include/time.h	/^  int tm_year;			\/* Year	- 1900.  *\/$/;"	m	struct:tm	access:public
tm_zone	/usr/include/time.h	/^  const char *tm_zone;		\/* Timezone abbreviation.  *\/$/;"	m	struct:tm	access:public
tv_nsec	/usr/include/time.h	/^    __syscall_slong_t tv_nsec;	\/* Nanoseconds.  *\/$/;"	m	struct:timespec	access:public
tv_sec	/usr/include/time.h	/^    __time_t tv_sec;		\/* Seconds.  *\/$/;"	m	struct:timespec	access:public
tzname	/usr/include/time.h	/^extern char *tzname[2];$/;"	x
tzset	/usr/include/time.h	/^extern void tzset (void) __THROW;$/;"	p	signature:(void)
