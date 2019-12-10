# 1 "..\\os\\xstrans.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 325 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "..\\os\\xstrans.c" 2




# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xfuncproto.h" 1
# 6 "..\\os\\xstrans.c" 2


extern __attribute__((visibility("default"))) void ErrorF(const char *f, ...) __attribute__((__format__(__printf__,1,2)));





# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/transport.c" 1
# 50 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/transport.c"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdlib.h" 1 3
# 88 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdlib.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\__config" 1 3
# 22 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\__config" 3
# 89 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdlib.h" 2 3
# 92 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdlib.h" 3


# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\stdlib.h" 1 3







int getloadavg(double loadavg[], int nelem);






# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdlib.h" 1 3







# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\features.h" 1 3
# 9 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdlib.h" 2 3
# 19 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdlib.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 32 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef int wchar_t;
# 120 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef unsigned long int size_t;
# 20 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdlib.h" 2 3

int atoi (const char *);
long atol (const char *);
long long atoll (const char *);
double atof (const char *);

float strtof (const char *restrict, char **restrict);
double strtod (const char *restrict, char **restrict);
long double strtold (const char *restrict, char **restrict);

long strtol (const char *restrict, char **restrict, int);
unsigned long strtoul (const char *restrict, char **restrict, int);
long long strtoll (const char *restrict, char **restrict, int);
unsigned long long strtoull (const char *restrict, char **restrict, int);

int rand (void);
void srand (unsigned);

void *malloc (size_t);
void *calloc (size_t, size_t);
void *realloc (void *, size_t);
void free (void *);
void *aligned_alloc(size_t alignment, size_t size);

_Noreturn void abort (void);
int atexit (void (*) (void));
_Noreturn void exit (int);
_Noreturn void _Exit (int);
int at_quick_exit (void (*) (void));
_Noreturn void quick_exit (int);

char *getenv (const char *);

int system (const char *);

void *bsearch (const void *, const void *, size_t, size_t, int (*)(const void *, const void *));
void qsort (void *, size_t, size_t, int (*)(const void *, const void *));

int abs (int);
long labs (long);
long long llabs (long long);

typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;
typedef struct { long long quot, rem; } lldiv_t;

div_t div (int, int);
ldiv_t ldiv (long, long);
lldiv_t lldiv (long long, long long);

int mblen (const char *, size_t);
int mbtowc (wchar_t *restrict, const char *restrict, size_t);
int wctomb (char *, wchar_t);
size_t mbstowcs (wchar_t *restrict, const char *restrict, size_t);
size_t wcstombs (char *restrict, const wchar_t *restrict, size_t);




size_t __ctype_get_mb_cur_max(void);
# 99 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdlib.h" 3
int posix_memalign (void **, size_t, size_t);
int setenv (const char *, const char *, int);
int unsetenv (const char *);
int mkstemp (char *);
int mkostemp (char *, int);
char *mkdtemp (char *);
int getsubopt (char **, char *const *, char **);
int rand_r (unsigned *);






char *realpath (const char *restrict, char *restrict);
long int random (void);
void srandom (unsigned int);
char *initstate (unsigned int, char *, size_t);
char *setstate (char *);
int putenv (char *);
int posix_openpt (int);
int grantpt (int);
int unlockpt (int);
char *ptsname (int);
char *l64a (long);
long a64l (const char *);
void setkey (const char *);
double drand48 (void);
double erand48 (unsigned short [3]);
long int lrand48 (void);
long int nrand48 (unsigned short [3]);
long mrand48 (void);
long jrand48 (unsigned short [3]);
void srand48 (long);
unsigned short *seed48 (unsigned short [3]);
void lcong48 (unsigned short [7]);




# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\alloca.h" 1 3








# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 10 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\alloca.h" 2 3

void *alloca(size_t);
# 139 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdlib.h" 2 3
char *mktemp (char *);
int mkstemps (char *, int);
int mkostemps (char *, int, int);
void *valloc (size_t);
void *memalign(size_t, size_t);
int getloadavg(double *, int);
int clearenv(void);





int ptsname_r(int, char *, size_t);
char *ecvt(double, int, int *, int *);
char *fcvt(double, int, int *, int *);
char *gcvt(double, int, char *);
struct __locale_struct;
float strtof_l(const char *restrict, char **restrict, struct __locale_struct *);
double strtod_l(const char *restrict, char **restrict, struct __locale_struct *);
long double strtold_l(const char *restrict, char **restrict, struct __locale_struct *);
# 15 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\stdlib.h" 2 3
# 95 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdlib.h" 2 3
# 51 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/transport.c" 2




# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h" 1
# 79 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h"
# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h" 1
# 54 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h"
# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h" 1
# 36 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h"
# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xosdefs.h" 1
# 37 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h" 2





# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/types.h" 1 3
# 57 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/types.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 75 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef long time_t;




typedef long suseconds_t;
# 89 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef struct { union { int __i[11]; volatile int __vi[11]; unsigned __s[11]; } __u; } pthread_attr_t;







typedef struct { union { int __i[7]; volatile int __vi[7]; volatile void *__p[7]; } __u; } pthread_mutex_t;
typedef pthread_mutex_t mtx_t;




typedef struct { union { int __i[12]; volatile int __vi[12]; void *__p[12]; } __u; } pthread_cond_t;
typedef pthread_cond_t cnd_t;




typedef struct { union { int __i[8]; volatile int __vi[8]; void *__p[8]; } __u; } pthread_rwlock_t;




typedef struct { union { int __i[5]; volatile int __vi[5]; void *__p[5]; } __u; } pthread_barrier_t;
# 135 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef long int ssize_t;
# 150 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef long int register_t;





typedef signed char int8_t;




typedef short int16_t;




typedef int int32_t;




typedef long long int int64_t;
# 201 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef unsigned long long int u_int64_t;
# 212 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef unsigned mode_t;




typedef unsigned long int nlink_t;




typedef long long int off_t;




typedef unsigned long long int ino_t;




typedef unsigned int dev_t;




typedef long blksize_t;




typedef int blkcnt_t;




typedef unsigned int fsblkcnt_t;




typedef unsigned int fsfilcnt_t;
# 268 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef void * timer_t;




typedef int clockid_t;




typedef long clock_t;
# 299 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef int pid_t;




typedef unsigned id_t;




typedef unsigned uid_t;




typedef unsigned gid_t;




typedef int key_t;




typedef unsigned useconds_t;
# 337 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef struct __pthread * pthread_t;





typedef int pthread_once_t;




typedef unsigned pthread_key_t;




typedef int pthread_spinlock_t;




typedef struct { unsigned __attr; } pthread_mutexattr_t;




typedef struct { unsigned __attr; } pthread_condattr_t;




typedef struct { unsigned __attr; } pthread_barrierattr_t;




typedef struct { unsigned __attr[2]; } pthread_rwlockattr_t;
# 58 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/types.h" 2 3


typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned u_int32_t;
typedef char *caddr_t;
typedef unsigned char u_char;
typedef unsigned short u_short, ushort;
typedef unsigned u_int, uint;
typedef unsigned long u_long, ulong;
typedef long long quad_t;
typedef unsigned long long u_quad_t;

# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\endian.h" 1 3
# 23 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\endian.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdint.h" 1 3
# 106 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdint.h" 3
# 119 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdint.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdint.h" 1 3
# 20 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdint.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 125 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef unsigned long int uintptr_t;
# 140 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef long int intptr_t;
# 176 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef long long int intmax_t;




typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long long int uint64_t;
# 206 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef unsigned long long int uintmax_t;
# 21 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdint.h" 2 3

typedef int8_t int_fast8_t;
typedef int64_t int_fast64_t;

typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_fast8_t;
typedef uint64_t uint_fast64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;
# 95 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdint.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/stdint.h" 1 3
typedef int32_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
# 96 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdint.h" 2 3
# 120 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdint.h" 2 3
# 24 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\endian.h" 2 3

static inline uint16_t __bswap16(uint16_t __x)
{
 return __x<<8 | __x>>8;
}

static inline uint32_t __bswap32(uint32_t __x)
{
 return __x>>24 | __x>>8&0xff00 | __x<<8&0xff0000 | __x<<24;
}

static inline uint64_t __bswap64(uint64_t __x)
{
 return __bswap32(__x)+0ULL<<32 | __bswap32(__x>>32);
}
# 71 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/types.h" 2 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/select.h" 1 3
# 16 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/select.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 288 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
struct timeval { time_t tv_sec; suseconds_t tv_usec; };




struct timespec { time_t tv_sec; long tv_nsec; };
# 397 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef struct __sigset_t { unsigned long __bits[128/sizeof(long)]; } sigset_t;
# 17 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/select.h" 2 3



typedef unsigned long fd_mask;

typedef struct {
 unsigned long fds_bits[1024 / 8 / sizeof(long)];
} fd_set;






int select (int, fd_set *restrict, fd_set *restrict, fd_set *restrict, struct timeval *restrict);
int pselect (int, fd_set *restrict, fd_set *restrict, fd_set *restrict, const struct timespec *restrict, const sigset_t *restrict);
# 72 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/types.h" 2 3
# 43 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h" 2
# 62 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\string.h" 1 3
# 59 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\string.h" 3


# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\string.h" 1 3







extern char* strlwr(char *);
extern char* strupr(char *);






# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\string.h" 1 3
# 23 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\string.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 391 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef struct __locale_struct * locale_t;
# 24 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\string.h" 2 3

void *memcpy (void *restrict, const void *restrict, size_t);
void *memmove (void *, const void *, size_t);
void *memset (void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void *memchr (const void *, int, size_t);

char *strcpy (char *restrict, const char *restrict);
char *strncpy (char *restrict, const char *restrict, size_t);

char *strcat (char *restrict, const char *restrict);
char *strncat (char *restrict, const char *restrict, size_t);

int strcmp (const char *, const char *);
int strncmp (const char *, const char *, size_t);

int strcoll (const char *, const char *);
size_t strxfrm (char *restrict, const char *restrict, size_t);

char *strchr (const char *, int);
char *strrchr (const char *, int);

size_t strcspn (const char *, const char *);
size_t strspn (const char *, const char *);
char *strpbrk (const char *, const char *);
char *strstr (const char *, const char *);
char *strtok (char *restrict, const char *restrict);

size_t strlen (const char *);

char *strerror (int);



# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\strings.h" 1 3
# 11 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\strings.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 12 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\strings.h" 2 3




int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (void *, size_t);
char *index (const char *, int);
char *rindex (const char *, int);



int ffs (int);
int ffsl (long);
int ffsll (long long);


int strcasecmp (const char *, const char *);
int strncasecmp (const char *, const char *, size_t);

int strcasecmp_l (const char *, const char *, locale_t);
int strncasecmp_l (const char *, const char *, size_t, locale_t);
# 58 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\string.h" 2 3





char *strtok_r (char *restrict, const char *restrict, char **restrict);
int strerror_r (int, char *, size_t);
char *stpcpy(char *restrict, const char *restrict);
char *stpncpy(char *restrict, const char *restrict, size_t);
size_t strnlen (const char *, size_t);
char *strdup (const char *);
char *strndup (const char *, size_t);
char *strsignal(int);
char *strerror_l (int, locale_t);
int strcoll_l (const char *, const char *, locale_t);
size_t strxfrm_l (char *restrict, const char *restrict, size_t, locale_t);




void *memccpy (void *restrict, const void *restrict, int, size_t);



char *strsep(char **, const char *);
size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);




int strverscmp (const char *, const char *);
int strcasecmp_l (const char *, const char *, locale_t);
int strncasecmp_l (const char *, const char *, size_t, locale_t);
char *strchrnul(const char *, int);
char *strcasestr(const char *, const char *);
void *memmem(const void *, size_t, const void *, size_t);
void *memrchr(const void *, int, size_t);
void *mempcpy(void *, const void *, size_t);

char *basename();
# 16 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\string.h" 2 3
# 62 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\string.h" 2 3
# 63 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h" 2
# 88 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\fcntl.h" 1 3




# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\wasi/wasi.h" 1 3
# 22 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\wasi/wasi.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stddef.h" 1 3
# 44 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stddef.h" 3


# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stddef.h" 1 3
# 17 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stddef.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 130 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef long int ptrdiff_t;
# 283 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef struct { long long __ll; long double __ld; } max_align_t;
# 18 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stddef.h" 2 3
# 47 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stddef.h" 2 3
# 23 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\wasi/wasi.h" 2 3


_Static_assert(_Alignof(int8_t) == 1, "non-wasi data layout");
_Static_assert(_Alignof(uint8_t) == 1, "non-wasi data layout");
_Static_assert(_Alignof(int16_t) == 2, "non-wasi data layout");
_Static_assert(_Alignof(uint16_t) == 2, "non-wasi data layout");
_Static_assert(_Alignof(int32_t) == 4, "non-wasi data layout");
_Static_assert(_Alignof(uint32_t) == 4, "non-wasi data layout");
_Static_assert(_Alignof(int64_t) == 8, "non-wasi data layout");
_Static_assert(_Alignof(uint64_t) == 8, "non-wasi data layout");





typedef uint8_t __wasi_advice_t;







typedef uint32_t __wasi_clockid_t;





typedef uint64_t __wasi_device_t;

typedef uint64_t __wasi_dircookie_t;


typedef uint16_t __wasi_errno_t;
# 136 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\wasi/wasi.h" 3
typedef uint16_t __wasi_eventrwflags_t;


typedef uint8_t __wasi_eventtype_t;




typedef uint32_t __wasi_exitcode_t;

typedef uint32_t __wasi_fd_t;

typedef uint16_t __wasi_fdflags_t;






typedef int64_t __wasi_filedelta_t;

typedef uint64_t __wasi_filesize_t;

typedef uint8_t __wasi_filetype_t;
# 169 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\wasi/wasi.h" 3
typedef uint16_t __wasi_fstflags_t;





typedef uint64_t __wasi_inode_t;

typedef uint32_t __wasi_linkcount_t;

typedef uint32_t __wasi_lookupflags_t;


typedef uint16_t __wasi_oflags_t;





typedef uint16_t __wasi_riflags_t;



typedef uint64_t __wasi_rights_t;
# 223 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\wasi/wasi.h" 3
typedef uint16_t __wasi_roflags_t;


typedef uint8_t __wasi_sdflags_t;



typedef uint16_t __wasi_siflags_t;

typedef uint8_t __wasi_signal_t;
# 265 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\wasi/wasi.h" 3
typedef uint16_t __wasi_subclockflags_t;


typedef uint64_t __wasi_timestamp_t;

typedef uint64_t __wasi_userdata_t;


typedef uint8_t __wasi_whence_t;




typedef uint8_t __wasi_preopentype_t;


typedef struct __wasi_dirent_t {
    __wasi_dircookie_t d_next;
    __wasi_inode_t d_ino;
    uint32_t d_namlen;
    __wasi_filetype_t d_type;
} __wasi_dirent_t;
_Static_assert(__builtin_offsetof(__wasi_dirent_t, d_next) == 0, "non-wasi data layout");
_Static_assert(__builtin_offsetof(__wasi_dirent_t, d_ino) == 8, "non-wasi data layout");
_Static_assert(__builtin_offsetof(__wasi_dirent_t, d_namlen) == 16, "non-wasi data layout");
_Static_assert(__builtin_offsetof(__wasi_dirent_t, d_type) == 20, "non-wasi data layout");
_Static_assert(sizeof(__wasi_dirent_t) == 24, "non-wasi data layout");
_Static_assert(_Alignof(__wasi_dirent_t) == 8, "non-wasi data layout");

typedef struct __wasi_event_t {
    __wasi_userdata_t userdata;
    __wasi_errno_t error;
    __wasi_eventtype_t type;
    union __wasi_event_u {
        struct __wasi_event_u_fd_readwrite_t {
            __wasi_filesize_t nbytes;
            __wasi_eventrwflags_t flags;
        } fd_readwrite;
    } u;
} __wasi_event_t;
_Static_assert(__builtin_offsetof(__wasi_event_t, userdata) == 0, "non-wasi data layout");
_Static_assert(__builtin_offsetof(__wasi_event_t, error) == 8, "non-wasi data layout");
_Static_assert(__builtin_offsetof(__wasi_event_t, type) == 10, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_event_t, u.fd_readwrite.nbytes) == 16, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_event_t, u.fd_readwrite.flags) == 24, "non-wasi data layout");
_Static_assert(sizeof(__wasi_event_t) == 32, "non-wasi data layout");
_Static_assert(_Alignof(__wasi_event_t) == 8, "non-wasi data layout");

typedef struct __wasi_prestat_t {
    __wasi_preopentype_t pr_type;
    union __wasi_prestat_u {
        struct __wasi_prestat_u_dir_t {
            size_t pr_name_len;
        } dir;
    } u;
} __wasi_prestat_t;
_Static_assert(__builtin_offsetof(__wasi_prestat_t, pr_type) == 0, "non-wasi data layout");
_Static_assert(sizeof(void *) != 4 ||
    __builtin_offsetof(__wasi_prestat_t, u.dir.pr_name_len) == 4, "non-wasi data layout");
_Static_assert(sizeof(void *) != 8 ||
    __builtin_offsetof(__wasi_prestat_t, u.dir.pr_name_len) == 8, "non-wasi data layout");
_Static_assert(sizeof(void *) != 4 ||
    sizeof(__wasi_prestat_t) == 8, "non-wasi data layout");
_Static_assert(sizeof(void *) != 8 ||
    sizeof(__wasi_prestat_t) == 16, "non-wasi data layout");
_Static_assert(sizeof(void *) != 4 ||
    _Alignof(__wasi_prestat_t) == 4, "non-wasi data layout");
_Static_assert(sizeof(void *) != 8 ||
    _Alignof(__wasi_prestat_t) == 8, "non-wasi data layout");

typedef struct __wasi_fdstat_t {
    __wasi_filetype_t fs_filetype;
    __wasi_fdflags_t fs_flags;
    __wasi_rights_t fs_rights_base;
    __wasi_rights_t fs_rights_inheriting;
} __wasi_fdstat_t;
_Static_assert(
    __builtin_offsetof(__wasi_fdstat_t, fs_filetype) == 0, "non-wasi data layout");
_Static_assert(__builtin_offsetof(__wasi_fdstat_t, fs_flags) == 2, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_fdstat_t, fs_rights_base) == 8, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_fdstat_t, fs_rights_inheriting) == 16,
    "non-wasi data layout");
_Static_assert(sizeof(__wasi_fdstat_t) == 24, "non-wasi data layout");
_Static_assert(_Alignof(__wasi_fdstat_t) == 8, "non-wasi data layout");

typedef struct __wasi_filestat_t {
    __wasi_device_t st_dev;
    __wasi_inode_t st_ino;
    __wasi_filetype_t st_filetype;
    __wasi_linkcount_t st_nlink;
    __wasi_filesize_t st_size;
    __wasi_timestamp_t st_atim;
    __wasi_timestamp_t st_mtim;
    __wasi_timestamp_t st_ctim;
} __wasi_filestat_t;
_Static_assert(__builtin_offsetof(__wasi_filestat_t, st_dev) == 0, "non-wasi data layout");
_Static_assert(__builtin_offsetof(__wasi_filestat_t, st_ino) == 8, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_filestat_t, st_filetype) == 16, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_filestat_t, st_nlink) == 20, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_filestat_t, st_size) == 24, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_filestat_t, st_atim) == 32, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_filestat_t, st_mtim) == 40, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_filestat_t, st_ctim) == 48, "non-wasi data layout");
_Static_assert(sizeof(__wasi_filestat_t) == 56, "non-wasi data layout");
_Static_assert(_Alignof(__wasi_filestat_t) == 8, "non-wasi data layout");

typedef struct __wasi_ciovec_t {
    const void *buf;
    size_t buf_len;
} __wasi_ciovec_t;
_Static_assert(__builtin_offsetof(__wasi_ciovec_t, buf) == 0, "non-wasi data layout");
_Static_assert(sizeof(void *) != 4 ||
    __builtin_offsetof(__wasi_ciovec_t, buf_len) == 4, "non-wasi data layout");
_Static_assert(sizeof(void *) != 8 ||
    __builtin_offsetof(__wasi_ciovec_t, buf_len) == 8, "non-wasi data layout");
_Static_assert(sizeof(void *) != 4 ||
    sizeof(__wasi_ciovec_t) == 8, "non-wasi data layout");
_Static_assert(sizeof(void *) != 8 ||
    sizeof(__wasi_ciovec_t) == 16, "non-wasi data layout");
_Static_assert(sizeof(void *) != 4 ||
    _Alignof(__wasi_ciovec_t) == 4, "non-wasi data layout");
_Static_assert(sizeof(void *) != 8 ||
    _Alignof(__wasi_ciovec_t) == 8, "non-wasi data layout");

typedef struct __wasi_iovec_t {
    void *buf;
    size_t buf_len;
} __wasi_iovec_t;
_Static_assert(__builtin_offsetof(__wasi_iovec_t, buf) == 0, "non-wasi data layout");
_Static_assert(sizeof(void *) != 4 ||
    __builtin_offsetof(__wasi_iovec_t, buf_len) == 4, "non-wasi data layout");
_Static_assert(sizeof(void *) != 8 ||
    __builtin_offsetof(__wasi_iovec_t, buf_len) == 8, "non-wasi data layout");
_Static_assert(sizeof(void *) != 4 ||
    sizeof(__wasi_iovec_t) == 8, "non-wasi data layout");
_Static_assert(sizeof(void *) != 8 ||
    sizeof(__wasi_iovec_t) == 16, "non-wasi data layout");
_Static_assert(sizeof(void *) != 4 ||
    _Alignof(__wasi_iovec_t) == 4, "non-wasi data layout");
_Static_assert(sizeof(void *) != 8 ||
    _Alignof(__wasi_iovec_t) == 8, "non-wasi data layout");

typedef struct __wasi_subscription_t {
    __wasi_userdata_t userdata;
    __wasi_eventtype_t type;
    union __wasi_subscription_u {
        struct __wasi_subscription_u_clock_t {
            __wasi_userdata_t identifier;
            __wasi_clockid_t clock_id;
            __wasi_timestamp_t timeout;
            __wasi_timestamp_t precision;
            __wasi_subclockflags_t flags;
        } clock;
        struct __wasi_subscription_u_fd_readwrite_t {
            __wasi_fd_t fd;
        } fd_readwrite;
    } u;
} __wasi_subscription_t;
_Static_assert(
    __builtin_offsetof(__wasi_subscription_t, userdata) == 0, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_subscription_t, type) == 8, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_subscription_t, u.clock.identifier) == 16,
    "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_subscription_t, u.clock.clock_id) == 24,
    "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_subscription_t, u.clock.timeout) == 32, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_subscription_t, u.clock.precision) == 40,
    "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_subscription_t, u.clock.flags) == 48, "non-wasi data layout");
_Static_assert(
    __builtin_offsetof(__wasi_subscription_t, u.fd_readwrite.fd) == 16,
    "non-wasi data layout");
_Static_assert(sizeof(__wasi_subscription_t) == 56, "non-wasi data layout");
_Static_assert(_Alignof(__wasi_subscription_t) == 8, "non-wasi data layout");
# 464 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\wasi/wasi.h" 3
__wasi_errno_t __wasi_args_get(
    char **argv,
    char *argv_buf
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_args_sizes_get(
    size_t *argc,
    size_t *argv_buf_size
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_clock_res_get(
    __wasi_clockid_t clock_id,
    __wasi_timestamp_t *resolution
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_clock_time_get(
    __wasi_clockid_t clock_id,
    __wasi_timestamp_t precision,
    __wasi_timestamp_t *time
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_environ_get(
    char **environ,
    char *environ_buf
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_environ_sizes_get(
    size_t *environ_count,
    size_t *environ_buf_size
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_prestat_get(
    __wasi_fd_t fd,
    __wasi_prestat_t *buf
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_prestat_dir_name(
    __wasi_fd_t fd,
    char *path,
    size_t path_len
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_close(
    __wasi_fd_t fd
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_datasync(
    __wasi_fd_t fd
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_pread(
    __wasi_fd_t fd,
    const __wasi_iovec_t *iovs,
    size_t iovs_len,
    __wasi_filesize_t offset,
    size_t *nread
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_pwrite(
    __wasi_fd_t fd,
    const __wasi_ciovec_t *iovs,
    size_t iovs_len,
    __wasi_filesize_t offset,
    size_t *nwritten
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_read(
    __wasi_fd_t fd,
    const __wasi_iovec_t *iovs,
    size_t iovs_len,
    size_t *nread
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_renumber(
    __wasi_fd_t from,
    __wasi_fd_t to
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_seek(
    __wasi_fd_t fd,
    __wasi_filedelta_t offset,
    __wasi_whence_t whence,
    __wasi_filesize_t *newoffset
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_tell(
    __wasi_fd_t fd,
    __wasi_filesize_t *newoffset
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_fdstat_get(
    __wasi_fd_t fd,
    __wasi_fdstat_t *buf
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_fdstat_set_flags(
    __wasi_fd_t fd,
    __wasi_fdflags_t flags
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_fdstat_set_rights(
    __wasi_fd_t fd,
    __wasi_rights_t fs_rights_base,
    __wasi_rights_t fs_rights_inheriting
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_sync(
    __wasi_fd_t fd
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_write(
    __wasi_fd_t fd,
    const __wasi_ciovec_t *iovs,
    size_t iovs_len,
    size_t *nwritten
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_advise(
    __wasi_fd_t fd,
    __wasi_filesize_t offset,
    __wasi_filesize_t len,
    __wasi_advice_t advice
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_allocate(
    __wasi_fd_t fd,
    __wasi_filesize_t offset,
    __wasi_filesize_t len
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_path_create_directory(
    __wasi_fd_t fd,
    const char *path,
    size_t path_len
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_path_link(
    __wasi_fd_t old_fd,
    __wasi_lookupflags_t old_flags,
    const char *old_path,
    size_t old_path_len,
    __wasi_fd_t new_fd,
    const char *new_path,
    size_t new_path_len
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_path_open(
    __wasi_fd_t dirfd,
    __wasi_lookupflags_t dirflags,
    const char *path,
    size_t path_len,
    __wasi_oflags_t oflags,
    __wasi_rights_t fs_rights_base,
    __wasi_rights_t fs_rights_inheriting,
    __wasi_fdflags_t fs_flags,
    __wasi_fd_t *fd
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_readdir(
    __wasi_fd_t fd,
    void *buf,
    size_t buf_len,
    __wasi_dircookie_t cookie,
    size_t *bufused
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_path_readlink(
    __wasi_fd_t fd,
    const char *path,
    size_t path_len,
    char *buf,
    size_t buf_len,
    size_t *bufused
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_path_rename(
    __wasi_fd_t old_fd,
    const char *old_path,
    size_t old_path_len,
    __wasi_fd_t new_fd,
    const char *new_path,
    size_t new_path_len
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_filestat_get(
    __wasi_fd_t fd,
    __wasi_filestat_t *buf
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_filestat_set_times(
    __wasi_fd_t fd,
    __wasi_timestamp_t st_atim,
    __wasi_timestamp_t st_mtim,
    __wasi_fstflags_t fstflags
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_fd_filestat_set_size(
    __wasi_fd_t fd,
    __wasi_filesize_t st_size
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_path_filestat_get(
    __wasi_fd_t fd,
    __wasi_lookupflags_t flags,
    const char *path,
    size_t path_len,
    __wasi_filestat_t *buf
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_path_filestat_set_times(
    __wasi_fd_t fd,
    __wasi_lookupflags_t flags,
    const char *path,
    size_t path_len,
    __wasi_timestamp_t st_atim,
    __wasi_timestamp_t st_mtim,
    __wasi_fstflags_t fstflags
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_path_symlink(
    const char *old_path,
    size_t old_path_len,
    __wasi_fd_t fd,
    const char *new_path,
    size_t new_path_len
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_path_unlink_file(
    __wasi_fd_t fd,
    const char *path,
    size_t path_len
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_path_remove_directory(
    __wasi_fd_t fd,
    const char *path,
    size_t path_len
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_poll_oneoff(
    const __wasi_subscription_t *in,
    __wasi_event_t *out,
    size_t nsubscriptions,
    size_t *nevents
) __attribute__((__warn_unused_result__));

_Noreturn void __wasi_proc_exit(
    __wasi_exitcode_t rval
) ;

__wasi_errno_t __wasi_proc_raise(
    __wasi_signal_t sig
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_random_get(
    void *buf,
    size_t buf_len
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_sock_recv(
    __wasi_fd_t sock,
    const __wasi_iovec_t *ri_data,
    size_t ri_data_len,
    __wasi_riflags_t ri_flags,
    size_t *ro_datalen,
    __wasi_roflags_t *ro_flags
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_sock_send(
    __wasi_fd_t sock,
    const __wasi_ciovec_t *si_data,
    size_t si_data_len,
    __wasi_siflags_t si_flags,
    size_t *so_datalen
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_sock_shutdown(
    __wasi_fd_t sock,
    __wasi_sdflags_t how
) __attribute__((__warn_unused_result__));

__wasi_errno_t __wasi_sched_yield(void)
                                     __attribute__((__warn_unused_result__));
# 6 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\fcntl.h" 2 3
# 24 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\fcntl.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 403 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
struct iovec { void *iov_base; size_t iov_len; };
# 25 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\fcntl.h" 2 3

# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/fcntl.h" 1 3
# 27 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\fcntl.h" 2 3

struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
};

int creat(const char *, mode_t);
int fcntl(int, int, ...);
int open(const char *, int, ...);
int openat(int, const char *, int, ...);
int posix_fadvise(int, off_t, off_t, int);
int posix_fallocate(int, off_t, off_t);
# 148 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\fcntl.h" 3
int lockf(int, int, off_t);







struct f_owner_ex {
 int type;
 pid_t pid;
};
# 169 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\fcntl.h" 3
int fallocate(int, int, off_t, off_t);

ssize_t readahead(int, off_t, size_t);
int sync_file_range(int, off_t, off_t, unsigned);
ssize_t vmsplice(int, const struct iovec *, size_t, unsigned);
ssize_t splice(int, off_t *, int, off_t *, size_t, unsigned);
ssize_t tee(int, int, size_t, unsigned);
# 89 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h" 2
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\unistd.h" 1 3
# 43 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\unistd.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 44 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\unistd.h" 2 3

int pipe(int [2]);
int pipe2(int [2], int);
int close(int);
int posix_close(int, int);
int dup(int);
int dup2(int, int);
int dup3(int, int, int);
off_t lseek(int, off_t, int);
int fsync(int);
int fdatasync(int);

ssize_t read(int, void *, size_t);
ssize_t write(int, const void *, size_t);
ssize_t pread(int, void *, size_t, off_t);
ssize_t pwrite(int, const void *, size_t, off_t);

int chown(const char *, uid_t, gid_t);
int fchown(int, uid_t, gid_t);
int lchown(const char *, uid_t, gid_t);
int fchownat(int, const char *, uid_t, gid_t, int);

int link(const char *, const char *);
int linkat(int, const char *, int, const char *, int);
int symlink(const char *, const char *);
int symlinkat(const char *, int, const char *);
ssize_t readlink(const char *restrict, char *restrict, size_t);
ssize_t readlinkat(int, const char *restrict, char *restrict, size_t);
int unlink(const char *);
int unlinkat(int, const char *, int);
int rmdir(const char *);
int truncate(const char *, off_t);
int ftruncate(int, off_t);






int access(const char *, int);
int faccessat(int, const char *, int, int);

int chdir(const char *);
int fchdir(int);
char *getcwd(char *, size_t);

unsigned alarm(unsigned);
unsigned sleep(unsigned);
int pause(void);

pid_t fork(void);
int execve(const char *, char *const [], char *const []);
int execv(const char *, char *const []);
int execle(const char *, const char *, ...);
int execl(const char *, const char *, ...);
int execvp(const char *, char *const []);
int execlp(const char *, const char *, ...);
int fexecve(int, char *const [], char *const []);
_Noreturn void _exit(int);

pid_t getpid(void);
pid_t getppid(void);
pid_t getpgrp(void);
pid_t getpgid(pid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
pid_t getsid(pid_t);
char *ttyname(int);
int ttyname_r(int, char *, size_t);
int isatty(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);

uid_t getuid(void);
uid_t geteuid(void);
gid_t getgid(void);
gid_t getegid(void);
int getgroups(int, gid_t []);
int setuid(uid_t);
int setreuid(uid_t, uid_t);
int seteuid(uid_t);
int setgid(gid_t);
int setregid(gid_t, gid_t);
int setegid(gid_t);

char *getlogin(void);
int getlogin_r(char *, size_t);
int gethostname(char *, size_t);
char *ctermid(char *);

int getopt(int, char * const [], const char *);
extern char *optarg;
extern int optind, opterr, optopt;

long pathconf(const char *, int);
long fpathconf(int, int);
long sysconf(int);
size_t confstr(int, char *, size_t);







int lockf(int, int, off_t);
long gethostid(void);
int nice(int);
void sync(void);
pid_t setpgrp(void);
char *crypt(const char *, const char *);
void encrypt(char *, int);
void swab(const void *restrict, void *restrict, ssize_t);




int usleep(unsigned);
unsigned ualarm(unsigned, unsigned);






int brk(void *);
void *sbrk(intptr_t);
pid_t vfork(void);
int vhangup(void);
int chroot(const char *);
int getpagesize(void);
int getdtablesize(void);
int sethostname(const char *, size_t);
int getdomainname(char *, size_t);
int setdomainname(const char *, size_t);
int setgroups(size_t, const gid_t *);
char *getpass(const char *);
int daemon(int, int);
void setusershell(void);
void endusershell(void);
char *getusershell(void);
int acct(const char *);

int execvpe(const char *, char *const [], char *const []);
int issetugid(void);



extern char **environ;
int setresuid(uid_t, uid_t, uid_t);
int setresgid(gid_t, gid_t, gid_t);
int getresuid(uid_t *, uid_t *, uid_t *);
int getresgid(gid_t *, gid_t *, gid_t *);
char *get_current_dir_name(void);
int syncfs(int);
int euidaccess(const char *, int);
int eaccess(const char *, int);
# 276 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\unistd.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/posix.h" 1 3
# 277 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\unistd.h" 2 3
# 90 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h" 2
# 121 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/time.h" 1 3
# 11 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/time.h" 3
int gettimeofday (struct timeval *restrict, void *restrict);
# 20 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/time.h" 3
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};

int getitimer (int, struct itimerval *);
int setitimer (int, const struct itimerval *restrict, struct itimerval *restrict);
int utimes (const char *, const struct timeval [2]);




struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
int futimes(int, const struct timeval [2]);
int futimesat(int, const char *, const struct timeval [2]);
int lutimes(const char *, const struct timeval [2]);
int settimeofday(const struct timeval *, const struct timezone *);
int adjtime (const struct timeval *, struct timeval *);
# 122 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h" 2
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\time.h" 1 3







int dysize(int year);








# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\time.h" 1 3
# 31 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\time.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 32 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\time.h" 2 3






struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 const char *tm_zone;
};

clock_t clock (void);
time_t time (time_t *);
double difftime (time_t, time_t);
time_t mktime (struct tm *);
size_t strftime (char *restrict, size_t, const char *restrict, const struct tm *restrict);
struct tm *gmtime (const time_t *);
struct tm *localtime (const time_t *);
char *asctime (const struct tm *);
char *ctime (const time_t *);
int timespec_get(struct timespec *, int);
# 71 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\time.h" 3
size_t strftime_l (char * restrict, size_t, const char * restrict, const struct tm * restrict, locale_t);

struct tm *gmtime_r (const time_t *restrict, struct tm *restrict);
struct tm *localtime_r (const time_t *restrict, struct tm *restrict);
char *asctime_r (const struct tm *restrict, char *restrict);
char *ctime_r (const time_t *, char *);

void tzset (void);

struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
# 100 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\time.h" 3
int nanosleep (const struct timespec *, struct timespec *);
int clock_getres (clockid_t, struct timespec *);
int clock_gettime (clockid_t, struct timespec *);
int clock_settime (clockid_t, const struct timespec *);
int clock_nanosleep (clockid_t, int, const struct timespec *, struct timespec *);
int clock_getcpuclockid (pid_t, clockid_t *);

struct sigevent;
int timer_create (clockid_t, struct sigevent *restrict, timer_t *restrict);
int timer_delete (timer_t);
int timer_settime (timer_t, int, const struct itimerspec *restrict, struct itimerspec *restrict);
int timer_gettime (timer_t, struct itimerspec *);
int timer_getoverrun (timer_t);





char *strptime (const char *restrict, const char *restrict, struct tm *restrict);
extern int daylight;
extern long timezone;
extern char *tzname[2];
extern int getdate_err;
struct tm *getdate (const char *);




int stime(const time_t *);
time_t timegm(struct tm *);
# 17 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\time.h" 2 3
# 123 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h" 2
# 148 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h"
# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xarch.h" 1
# 149 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos.h" 2
# 55 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h" 2


# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/socket.h" 1 3
# 18 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/socket.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 409 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef unsigned socklen_t;




typedef unsigned short sa_family_t;
# 19 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/socket.h" 2 3

# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/socket.h" 1 3
struct msghdr
{
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};

struct cmsghdr
{
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;
};
# 21 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/socket.h" 2 3


struct ucred {
 pid_t pid;
 uid_t uid;
 gid_t gid;
};

struct mmsghdr {
 struct msghdr msg_hdr;
 unsigned int msg_len;
};

struct timespec;

int sendmmsg (int, struct mmsghdr *, unsigned int, unsigned int);
int recvmmsg (int, struct mmsghdr *, unsigned int, unsigned int, struct timespec *);


struct linger {
 int l_onoff;
 int l_linger;
};
# 297 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/socket.h" 3
struct sockaddr {
 sa_family_t sa_family;
 char sa_data[14];
};

struct sockaddr_storage {
 sa_family_t ss_family;
 char __ss_padding[128-sizeof(long)-sizeof(sa_family_t)];
 unsigned long __ss_align;
};

int socket (int, int, int);
int socketpair (int, int, int, int [2]);

int shutdown (int, int);

int bind (int, const struct sockaddr *, socklen_t);
int connect (int, const struct sockaddr *, socklen_t);
int listen (int, int);
int accept (int, struct sockaddr *restrict, socklen_t *restrict);
int accept4(int, struct sockaddr *restrict, socklen_t *restrict, int);

int getsockname (int, struct sockaddr *restrict, socklen_t *restrict);
int getpeername (int, struct sockaddr *restrict, socklen_t *restrict);

ssize_t send (int, const void *, size_t, int);
ssize_t recv (int, void *, size_t, int);
ssize_t sendto (int, const void *, size_t, int, const struct sockaddr *, socklen_t);
ssize_t recvfrom (int, void *restrict, size_t, int, struct sockaddr *restrict, socklen_t *restrict);
ssize_t sendmsg (int, const struct msghdr *, int);
ssize_t recvmsg (int, struct msghdr *, int);

int getsockopt (int, int, int, void *restrict, socklen_t *restrict);
int setsockopt (int, int, int, const void *, socklen_t);

int sockatmark (int);
# 58 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h" 2




# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/..\\..\\..\\pipesocket\\pipesocket.h" 1
# 29 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/..\\..\\..\\pipesocket\\pipesocket.h"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\errno.h" 1 3
# 30 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\errno.h" 3


# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\errno.h" 1 3
# 10 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\errno.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/errno.h" 1 3
# 11 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\errno.h" 2 3

int *__errno_location(void);



extern char *program_invocation_short_name, *program_invocation_name;
# 33 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\errno.h" 2 3
# 30 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/..\\..\\..\\pipesocket\\pipesocket.h" 2

# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\netdb.h" 1 3



# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netdb.h" 1 3








# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netinet/in.h" 1 3








# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\inttypes.h" 1 3
# 238 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\inttypes.h" 3
# 247 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\inttypes.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\inttypes.h" 1 3
# 12 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\inttypes.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 13 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\inttypes.h" 2 3

typedef struct { intmax_t quot, rem; } imaxdiv_t;

intmax_t imaxabs(intmax_t);
imaxdiv_t imaxdiv(intmax_t, intmax_t);

intmax_t strtoimax(const char *restrict, char **restrict, int);
uintmax_t strtoumax(const char *restrict, char **restrict, int);

intmax_t wcstoimax(const wchar_t *restrict, wchar_t **restrict, int);
uintmax_t wcstoumax(const wchar_t *restrict, wchar_t **restrict, int);
# 248 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\inttypes.h" 2 3
# 10 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netinet/in.h" 2 3


typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;
struct in_addr { in_addr_t s_addr; };

struct sockaddr_in {
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 uint8_t sin_zero[8];
};

struct in6_addr {
 union {
  uint8_t __s6_addr[16];
  uint16_t __s6_addr16[8];
  uint32_t __s6_addr32[4];
 } __in6_union;
};




struct sockaddr_in6 {
 sa_family_t sin6_family;
 in_port_t sin6_port;
 uint32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
 uint32_t sin6_scope_id;
};

struct ipv6_mreq {
 struct in6_addr ipv6mr_multiaddr;
 unsigned ipv6mr_interface;
};
# 60 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netinet/in.h" 3
extern const struct in6_addr in6addr_any, in6addr_loopback;






uint32_t htonl(uint32_t);
uint16_t htons(uint16_t);
uint32_t ntohl(uint32_t);
uint16_t ntohs(uint16_t);
# 227 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netinet/in.h" 3
struct ip_opts {
 struct in_addr ip_dst;
 char ip_opts[40];
};
# 245 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netinet/in.h" 3
struct ip_mreq {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};

struct ip_mreqn {
 struct in_addr imr_multiaddr;
 struct in_addr imr_address;
 int imr_ifindex;
};

struct ip_mreq_source {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
 struct in_addr imr_sourceaddr;
};

struct ip_msfilter {
 struct in_addr imsf_multiaddr;
 struct in_addr imsf_interface;
 uint32_t imsf_fmode;
 uint32_t imsf_numsrc;
 struct in_addr imsf_slist[1];
};




struct group_req {
 uint32_t gr_interface;
 struct sockaddr_storage gr_group;
};

struct group_source_req {
 uint32_t gsr_interface;
 struct sockaddr_storage gsr_group;
 struct sockaddr_storage gsr_source;
};

struct group_filter {
 uint32_t gf_interface;
 struct sockaddr_storage gf_group;
 uint32_t gf_fmode;
 uint32_t gf_numsrc;
 struct sockaddr_storage gf_slist[1];
};




struct in_pktinfo {
 int ipi_ifindex;
 struct in_addr ipi_spec_dst;
 struct in_addr ipi_addr;
};

struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 unsigned ipi6_ifindex;
};

struct ip6_mtuinfo {
 struct sockaddr_in6 ip6m_addr;
 uint32_t ip6m_mtu;
};
# 10 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netdb.h" 2 3



# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 14 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netdb.h" 2 3


struct addrinfo {
 int ai_flags;
 int ai_family;
 int ai_socktype;
 int ai_protocol;
 socklen_t ai_addrlen;
 struct sockaddr *ai_addr;
 char *ai_canonname;
 struct addrinfo *ai_next;
};
# 56 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netdb.h" 3
int getaddrinfo (const char *restrict, const char *restrict, const struct addrinfo *restrict, struct addrinfo **restrict);
void freeaddrinfo (struct addrinfo *);
int getnameinfo (const struct sockaddr *restrict, socklen_t, char *restrict, socklen_t, char *restrict, socklen_t, int);
const char *gai_strerror(int);




struct netent {
 char *n_name;
 char **n_aliases;
 int n_addrtype;
 uint32_t n_net;
};

struct hostent {
 char *h_name;
 char **h_aliases;
 int h_addrtype;
 int h_length;
 char **h_addr_list;
};


struct servent {
 char *s_name;
 char **s_aliases;
 int s_port;
 char *s_proto;
};

struct protoent {
 char *p_name;
 char **p_aliases;
 int p_proto;
};

void sethostent (int);
void endhostent (void);
struct hostent *gethostent (void);

void setnetent (int);
void endnetent (void);
struct netent *getnetent (void);
struct netent *getnetbyaddr (uint32_t, int);
struct netent *getnetbyname (const char *);

void setservent (int);
void endservent (void);
struct servent *getservent (void);
struct servent *getservbyname (const char *, const char *);
struct servent *getservbyport (int, const char *);

void setprotoent (int);
void endprotoent (void);
struct protoent *getprotoent (void);
struct protoent *getprotobyname (const char *);
struct protoent *getprotobynumber (int);




struct hostent *gethostbyname (const char *);
struct hostent *gethostbyaddr (const void *, socklen_t, int);
int *__h_errno_location(void);
# 130 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netdb.h" 3
void herror(const char *);
const char *hstrerror(int);
int gethostbyname_r(const char *, struct hostent *, char *, size_t, struct hostent **, int *);
int gethostbyname2_r(const char *, int, struct hostent *, char *, size_t, struct hostent **, int *);
struct hostent *gethostbyname2(const char *, int);
int gethostbyaddr_r(const void *, socklen_t, int, struct hostent *, char *, size_t, struct hostent **, int *);
int getservbyport_r(int, const char *, struct servent *, char *, size_t, struct servent **);
int getservbyname_r(const char *, const char *, struct servent *, char *, size_t, struct servent **);
# 5 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\netdb.h" 2 3








struct hostent *gethostbyname (const char *);
struct hostent *gethostbyaddr (const void *, socklen_t, int);

int gethostbyname_r(const char *, struct hostent *, char *, size_t, struct hostent **, int *);
# 32 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/..\\..\\..\\pipesocket\\pipesocket.h" 2





typedef unsigned int SOCKET;
# 46 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/..\\..\\..\\pipesocket\\pipesocket.h"
typedef unsigned long u_long;
typedef unsigned short u_short;







         int XWSAGetLastError(void);
         void XWSASetLastError(int iError);


         int Xselect(int nfds, fd_set * readfds, fd_set * writefds, fd_set * exceptfds, const struct timeval * timeout);
         int Xsend(SOCKET s, const char * buf, int len, int flags);
         struct hostent * Xgethostbyaddr(const char * addr, int len, int type);
         struct hostent * Xgethostbyname(const char * name);
         int Xbind(SOCKET s, const struct sockaddr * name, int namelen);
         int Xrecv(SOCKET s, char * buf, int len, int flags);
         int Xclosesocket(SOCKET s);



         int Xfcntl(SOCKET s, long cmd, u_long arg);

         SOCKET Xsocket(int af, int type, int protocol);
         int Xgethostname(char * name, int namelen);
         SOCKET Xaccept(SOCKET s, struct sockaddr * addr, int * addrlen);
         int Xconnect(SOCKET s, const struct sockaddr * name, int namelen);
         int XWSACleanup(void);
         int Xgetpeername(int s, struct sockaddr * name, socklen_t * namelen);
         int Xgetsockname(SOCKET s, struct sockaddr * name, int * namelen);
         u_long Xhtonl(u_long hostlong);
         u_short Xhtons(u_short hostshort);
         char * Xinet_ntoa(struct in_addr in);
         int Xsetsockopt(SOCKET s, int level, int optname, const char * optval, int optlen);
         int Xshutdown(SOCKET s, int how);
         u_short Xntohs(u_short netshort);
         unsigned long Xinet_addr(const char * cp);
         struct servent * Xgetservbyname(const char * name, const char * proto);
         int Xlisten(SOCKET s,int backlog);
# 63 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h" 2




#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
# 85 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h"
static const char *__xtransname = "_XSERVTrans";
# 141 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h"
#pragma clang diagnostic pop
# 158 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h"
typedef struct {
    unsigned char addr[128];
} Xtransaddr;





typedef long BytesReadable_t;
# 184 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/uio.h" 1 3
# 22 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/uio.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 23 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/uio.h" 2 3



ssize_t readv (int, const struct iovec *, int);
ssize_t writev (int, const struct iovec *, int);


ssize_t preadv (int, const struct iovec *, int, off_t);
ssize_t pwritev (int, const struct iovec *, int, off_t);
# 40 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/uio.h" 3
ssize_t process_vm_writev(pid_t, const struct iovec *, unsigned long, const struct iovec *, unsigned long, unsigned long);
ssize_t process_vm_readv(pid_t, const struct iovec *, unsigned long, const struct iovec *, unsigned long, unsigned long);
# 185 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h" 2


typedef struct _XtransConnInfo *XtransConnInfo;
# 237 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h"
void _XSERVTransFreeConnInfo (
    XtransConnInfo
);
# 251 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h"
XtransConnInfo _XSERVTransOpenCOTSServer(
    char *
);
# 267 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h"
XtransConnInfo _XSERVTransOpenCLTSServer(
    char *
);





XtransConnInfo _XSERVTransReopenCOTSServer(
    int,
    int,
    char *
);

XtransConnInfo _XSERVTransReopenCLTSServer(
    int,
    int,
    char *
);

int _XSERVTransGetReopenInfo(
    XtransConnInfo,
    int *,
    int *,
    char **
);




int _XSERVTransSetOption(
    XtransConnInfo,
    int,
    int
);



int _XSERVTransCreateListener(
    XtransConnInfo,
    char *,
    unsigned int
);

int _XSERVTransNoListen (
    const char*
);

int _XSERVTransResetListener(
    XtransConnInfo
);

XtransConnInfo _XSERVTransAccept(
    XtransConnInfo,
    int *
);
# 335 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h"
int _XSERVTransBytesReadable(
    XtransConnInfo,
    BytesReadable_t *
);

int _XSERVTransRead(
    XtransConnInfo,
    char *,
    int
);

int _XSERVTransWrite(
    XtransConnInfo,
    char *,
    int
);

int _XSERVTransReadv(
    XtransConnInfo,
    struct iovec *,
    int
);

int _XSERVTransWritev(
    XtransConnInfo,
    struct iovec *,
    int
);

int _XSERVTransDisconnect(
    XtransConnInfo
);

int _XSERVTransClose(
    XtransConnInfo
);

int _XSERVTransCloseForCloning(
    XtransConnInfo
);

int _XSERVTransIsLocal(
    XtransConnInfo
);

int _XSERVTransGetMyAddr(
    XtransConnInfo,
    int *,
    int *,
    Xtransaddr **
);

int _XSERVTransGetPeerAddr(
    XtransConnInfo,
    int *,
    int *,
    Xtransaddr **
);

int _XSERVTransGetConnectionNumber(
    XtransConnInfo
);



int _XSERVTransMakeAllCOTSServerListeners(
    char *,
    int *,
    int *,
    XtransConnInfo **
);

int _XSERVTransMakeAllCLTSServerListeners(
    char *,
    int *,
    int *,
    XtransConnInfo **
);
# 423 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h"
int _XSERVTransConvertAddress(
    int *,
    int *,
    Xtransaddr **
);
# 445 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.h"
int
_XSERVTransGetHostname (
    char * ,
    int
);
# 80 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h" 2






# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdio.h" 1 3
# 106 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdio.h" 3


# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdio.h" 1 3
# 26 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdio.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3






typedef __builtin_va_list va_list;




typedef __builtin_va_list __isoc_va_list;
# 379 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef struct _IO_FILE FILE;
# 27 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdio.h" 2 3
# 60 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdio.h" 3
typedef union _G_fpos64_t {
 char __opaque[16];
 double __align;
} fpos_t;

extern FILE *const stdin;
extern FILE *const stdout;
extern FILE *const stderr;





FILE *fopen(const char *restrict, const char *restrict);
FILE *freopen(const char *restrict, const char *restrict, FILE *restrict);
int fclose(FILE *);

int remove(const char *);
int rename(const char *, const char *);

int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
void clearerr(FILE *);

int fseek(FILE *, long, int);
long ftell(FILE *);
void rewind(FILE *);

int fgetpos(FILE *restrict, fpos_t *restrict);
int fsetpos(FILE *, const fpos_t *);

size_t fread(void *restrict, size_t, size_t, FILE *restrict);
size_t fwrite(const void *restrict, size_t, size_t, FILE *restrict);

int fgetc(FILE *);
int getc(FILE *);
int getchar(void);
int ungetc(int, FILE *);

int fputc(int, FILE *);
int putc(int, FILE *);
int putchar(int);

char *fgets(char *restrict, int, FILE *restrict);




int fputs(const char *restrict, FILE *restrict);
int puts(const char *);

int printf(const char *restrict, ...);
int fprintf(FILE *restrict, const char *restrict, ...);
int sprintf(char *restrict, const char *restrict, ...);
int snprintf(char *restrict, size_t, const char *restrict, ...);

int vprintf(const char *restrict, __isoc_va_list);
int vfprintf(FILE *restrict, const char *restrict, __isoc_va_list);
int vsprintf(char *restrict, const char *restrict, __isoc_va_list);
int vsnprintf(char *restrict, size_t, const char *restrict, __isoc_va_list);

int scanf(const char *restrict, ...);
int fscanf(FILE *restrict, const char *restrict, ...);
int sscanf(const char *restrict, const char *restrict, ...);
int vscanf(const char *restrict, __isoc_va_list);
int vfscanf(FILE *restrict, const char *restrict, __isoc_va_list);
int vsscanf(const char *restrict, const char *restrict, __isoc_va_list);

void perror(const char *);

int setvbuf(FILE *restrict, char *restrict, int, size_t);
void setbuf(FILE *restrict, char *restrict);

char *tmpnam(char *);
FILE *tmpfile(void);




FILE *fmemopen(void *restrict, size_t, const char *restrict);
FILE *open_memstream(char **, size_t *);
FILE *fdopen(int, const char *);
FILE *popen(const char *, const char *);
int pclose(FILE *);
int fileno(FILE *);
int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);
int dprintf(int, const char *restrict, ...);
int vdprintf(int, const char *restrict, __isoc_va_list);
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);
ssize_t getdelim(char **restrict, size_t *restrict, int, FILE *restrict);
ssize_t getline(char **restrict, size_t *restrict, FILE *restrict);
int renameat(int, const char *, int, const char *);
char *ctermid(char *);







char *tempnam(const char *, const char *);




char *cuserid(char *);
void setlinebuf(FILE *);
void setbuffer(FILE *, char *, size_t);
int fgetc_unlocked(FILE *);
int fputc_unlocked(int, FILE *);
int fflush_unlocked(FILE *);
size_t fread_unlocked(void *, size_t, size_t, FILE *);
size_t fwrite_unlocked(const void *, size_t, size_t, FILE *);
void clearerr_unlocked(FILE *);
int feof_unlocked(FILE *);
int ferror_unlocked(FILE *);
int fileno_unlocked(FILE *);
int getw(FILE *);
int putw(int, FILE *);
char *fgetln(FILE *, size_t *);
int asprintf(char **, const char *, ...);
int vasprintf(char **, const char *, __isoc_va_list);



char *fgets_unlocked(char *, int, FILE *);
int fputs_unlocked(const char *, FILE *);
# 109 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdio.h" 2 3
# 87 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h" 2







# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\arpa/inet.h" 1 3
# 95 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h" 2
# 125 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stddef.h" 1 3
# 126 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h" 2





struct _XtransConnInfo {
    struct _Xtransport *transptr;
    int index;
    char *priv;
    int flags;
    int fd;
    char *port;
    int family;
    char *addr;
    int addrlen;
    char *peeraddr;
    int peeraddrlen;
};







typedef struct _Xtransport {
    const char *TransName;
    int flags;
# 167 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h"
    const char ** nolisten;
    XtransConnInfo (*OpenCOTSServer)(
 struct _Xtransport *,
 char *,
 char *,
 char *
    );
# 190 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h"
    XtransConnInfo (*OpenCLTSServer)(
 struct _Xtransport *,
 char *,
 char *,
 char *
    );






    XtransConnInfo (*ReopenCOTSServer)(
 struct _Xtransport *,
        int,
        char *
    );

    XtransConnInfo (*ReopenCLTSServer)(
 struct _Xtransport *,
        int,
        char *
    );




    int (*SetOption)(
 XtransConnInfo,
 int,
 int
    );





    int (*CreateListener)(
 XtransConnInfo,
 char *,
 unsigned int
    );

    int (*ResetListener)(
 XtransConnInfo
    );

    XtransConnInfo (*Accept)(
 XtransConnInfo,
        int *
    );
# 254 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h"
    int (*BytesReadable)(
 XtransConnInfo,
 BytesReadable_t *
    );

    int (*Read)(
 XtransConnInfo,
 char *,
 int
    );

    int (*Write)(
 XtransConnInfo,
 char *,
 int
    );

    int (*Readv)(
 XtransConnInfo,
 struct iovec *,
 int
    );

    int (*Writev)(
 XtransConnInfo,
 struct iovec *,
 int
    );

    int (*Disconnect)(
 XtransConnInfo
    );

    int (*Close)(
 XtransConnInfo
    );

    int (*CloseForCloning)(
 XtransConnInfo
    );

} Xtransport;


typedef struct _Xtransport_table {
    Xtransport *transport;
    int transport_id;
} Xtransport_table;
# 324 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
# 337 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h"
 int _XSERVTransReadV(
    XtransConnInfo,
    struct iovec *,
    int
);
# 354 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h"
 int _XSERVTransWriteV(
    XtransConnInfo,
    struct iovec *,
    int
);
# 367 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h"
static int is_numeric (
    const char *
);


static int trans_mkdir (
    const char *,
    int
);



#pragma clang diagnostic pop








# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\stdarg.h" 1 3
# 14 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\stdarg.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdarg.h" 1 3
# 10 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdarg.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 11 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\stdarg.h" 2 3
# 15 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\stdarg.h" 2 3
# 388 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h" 2






# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\include\\os.h" 1
# 52 "D:\\projects\\xsdl\\win-xsdl\\..\\include\\os.h"
# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 1
# 77 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h"
# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xmd.h" 1
# 122 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xmd.h"
typedef long INT32;

typedef short INT16;


typedef signed char INT8;





typedef unsigned long CARD32;


typedef unsigned long long CARD64;

typedef unsigned short CARD16;
typedef unsigned char CARD8;

typedef CARD32 BITS32;
typedef CARD16 BITS16;

typedef CARD8 BYTE;
typedef CARD8 BOOL;
# 78 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2
# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/X.h" 1
# 66 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/X.h"
typedef unsigned long XID;



typedef unsigned long Mask;



typedef unsigned long Atom;

typedef unsigned long VisualID;
typedef unsigned long Time;
# 96 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/X.h"
typedef XID Window;
typedef XID Drawable;


typedef XID Font;

typedef XID Pixmap;
typedef XID Cursor;
typedef XID Colormap;
typedef XID GContext;
typedef XID KeySym;

typedef unsigned char KeyCode;
# 79 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2
# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xdefs.h" 1
# 47 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xdefs.h"
typedef int Bool;





typedef void *pointer;



typedef struct _Client *ClientPtr;
# 81 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xdefs.h"
typedef struct _Font *FontPtr;
# 91 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xdefs.h"
typedef unsigned long FSID;





typedef FSID AccContext;



typedef struct timeval **OSTimePtr;


typedef void (* BlockHandlerProcPtr)(pointer ,
         OSTimePtr ,
         pointer );
# 80 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2

# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stddef.h" 1 3
# 82 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2
# 95 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h"
typedef uint32_t ATOM;







typedef struct _CallbackList *CallbackListPtr;



typedef struct _xReq *xReqPtr;


# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\include/os.h" 1
# 110 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2
# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xfuncs.h" 1
# 111 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2
# 141 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdlib.h" 1 3
# 142 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2
# 158 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\limits.h" 1 3
# 45 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\limits.h" 3
# 58 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\limits.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\limits.h" 1 3







# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/limits.h" 1 3
# 9 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\limits.h" 2 3
# 59 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\limits.h" 2 3
# 159 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2







# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\math.h" 1 3
# 299 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\math.h" 3


# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\math.h" 1 3
# 12 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\math.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\math.h" 1 3
# 12 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\math.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 52 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 3
typedef float float_t;




typedef double double_t;
# 13 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\math.h" 2 3
# 39 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\math.h" 3
int __fpclassify(double);
int __fpclassifyf(float);
int __fpclassifyl(long double);

static inline unsigned __FLOAT_BITS(float __f)
{
 union {float __f; unsigned __i;} __u;
 __u.__f = __f;
 return __u.__i;
}
static inline unsigned long long __DOUBLE_BITS(double __f)
{
 union {double __f; unsigned long long __i;} __u;
 __u.__f = __f;
 return __u.__i;
}
# 81 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\math.h" 3
int __signbit(double);
int __signbitf(float);
int __signbitl(long double);
# 96 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\math.h" 3
static inline int __islessf(float_t __x, float_t __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x < __y; }
static inline int __isless(double_t __x, double_t __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x < __y; }
static inline int __islessl(long double __x, long double __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x < __y; }
static inline int __islessequalf(float_t __x, float_t __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x <= __y; }
static inline int __islessequal(double_t __x, double_t __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x <= __y; }
static inline int __islessequall(long double __x, long double __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x <= __y; }
static inline int __islessgreaterf(float_t __x, float_t __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x != __y; }
static inline int __islessgreater(double_t __x, double_t __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x != __y; }
static inline int __islessgreaterl(long double __x, long double __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x != __y; }
static inline int __isgreaterf(float_t __x, float_t __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x > __y; }
static inline int __isgreater(double_t __x, double_t __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x > __y; }
static inline int __isgreaterl(long double __x, long double __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x > __y; }
static inline int __isgreaterequalf(float_t __x, float_t __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x >= __y; }
static inline int __isgreaterequal(double_t __x, double_t __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x >= __y; }
static inline int __isgreaterequall(long double __x, long double __y) { return !(( sizeof((__x)) == sizeof(float) ? (__FLOAT_BITS((__x)) & 0x7fffffff) > 0x7f800000 : sizeof((__x)) == sizeof(double) ? (__DOUBLE_BITS((__x)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__x)) == 0) ? ((void)(__y),1) : ( sizeof((__y)) == sizeof(float) ? (__FLOAT_BITS((__y)) & 0x7fffffff) > 0x7f800000 : sizeof((__y)) == sizeof(double) ? (__DOUBLE_BITS((__y)) & -1ULL>>1) > 0x7ffULL<<52 : __fpclassifyl((__y)) == 0)) && __x >= __y; }
# 123 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\math.h" 3
double acos(double);
float acosf(float);
long double acosl(long double);

double acosh(double);
float acoshf(float);
long double acoshl(long double);

double asin(double);
float asinf(float);
long double asinl(long double);

double asinh(double);
float asinhf(float);
long double asinhl(long double);

double atan(double);
float atanf(float);
long double atanl(long double);

double atan2(double, double);
float atan2f(float, float);
long double atan2l(long double, long double);

double atanh(double);
float atanhf(float);
long double atanhl(long double);

double cbrt(double);
float cbrtf(float);
long double cbrtl(long double);

double ceil(double);
float ceilf(float);
long double ceill(long double);

double copysign(double, double);
float copysignf(float, float);
long double copysignl(long double, long double);

double cos(double);
float cosf(float);
long double cosl(long double);

double cosh(double);
float coshf(float);
long double coshl(long double);

double erf(double);
float erff(float);
long double erfl(long double);

double erfc(double);
float erfcf(float);
long double erfcl(long double);

double exp(double);
float expf(float);
long double expl(long double);

double exp2(double);
float exp2f(float);
long double exp2l(long double);

double expm1(double);
float expm1f(float);
long double expm1l(long double);

double fabs(double);
float fabsf(float);
long double fabsl(long double);

double fdim(double, double);
float fdimf(float, float);
long double fdiml(long double, long double);

double floor(double);
float floorf(float);
long double floorl(long double);

double fma(double, double, double);
float fmaf(float, float, float);
long double fmal(long double, long double, long double);

double fmax(double, double);
float fmaxf(float, float);
long double fmaxl(long double, long double);

double fmin(double, double);
float fminf(float, float);
long double fminl(long double, long double);

double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);

double frexp(double, int *);
float frexpf(float, int *);
long double frexpl(long double, int *);

double hypot(double, double);
float hypotf(float, float);
long double hypotl(long double, long double);

int ilogb(double);
int ilogbf(float);
int ilogbl(long double);

double ldexp(double, int);
float ldexpf(float, int);
long double ldexpl(long double, int);

double lgamma(double);
float lgammaf(float);
long double lgammal(long double);

long long llrint(double);
long long llrintf(float);
long long llrintl(long double);

long long llround(double);
long long llroundf(float);
long long llroundl(long double);

double log(double);
float logf(float);
long double logl(long double);

double log10(double);
float log10f(float);
long double log10l(long double);

double log1p(double);
float log1pf(float);
long double log1pl(long double);

double log2(double);
float log2f(float);
long double log2l(long double);

double logb(double);
float logbf(float);
long double logbl(long double);

long lrint(double);
long lrintf(float);
long lrintl(long double);

long lround(double);
long lroundf(float);
long lroundl(long double);

double modf(double, double *);
float modff(float, float *);
long double modfl(long double, long double *);

double nan(const char *);
float nanf(const char *);
long double nanl(const char *);

double nearbyint(double);
float nearbyintf(float);
long double nearbyintl(long double);

double nextafter(double, double);
float nextafterf(float, float);
long double nextafterl(long double, long double);

double nexttoward(double, long double);
float nexttowardf(float, long double);
long double nexttowardl(long double, long double);

double pow(double, double);
float powf(float, float);
long double powl(long double, long double);

double remainder(double, double);
float remainderf(float, float);
long double remainderl(long double, long double);

double remquo(double, double, int *);
float remquof(float, float, int *);
long double remquol(long double, long double, int *);

double rint(double);
float rintf(float);
long double rintl(long double);

double round(double);
float roundf(float);
long double roundl(long double);

double scalbln(double, long);
float scalblnf(float, long);
long double scalblnl(long double, long);

double scalbn(double, int);
float scalbnf(float, int);
long double scalbnl(long double, int);

double sin(double);
float sinf(float);
long double sinl(long double);

double sinh(double);
float sinhf(float);
long double sinhl(long double);

double sqrt(double);
float sqrtf(float);
long double sqrtl(long double);

double tan(double);
float tanf(float);
long double tanl(long double);

double tanh(double);
float tanhf(float);
long double tanhl(long double);

double tgamma(double);
float tgammaf(float);
long double tgammal(long double);

double trunc(double);
float truncf(float);
long double truncl(long double);
# 372 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\math.h" 3
extern int signgam;

double j0(double);
double j1(double);
double jn(int, double);

double y0(double);
double y1(double);
double yn(int, double);





double drem(double, double);
float dremf(float, float);

int finite(double);
int finitef(float);

double scalb(double, double);
float scalbf(float, float);

double significand(double);
float significandf(float);

double lgamma_r(double, int*);
float lgammaf_r(float, int*);

float j0f(float);
float j1f(float);
float jnf(int, float);

float y0f(float);
float y1f(float);
float ynf(int, float);



long double lgammal_r(long double, int*);

void sincos(double, double*, double*);
void sincosf(float, float*, float*);
void sincosl(long double, long double*, long double*);

double exp10(double);
float exp10f(float);
long double exp10l(long double);

double pow10(double);
float pow10f(float);
long double pow10l(long double);
# 13 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\math.h" 2 3
# 302 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\math.h" 2 3
# 167 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2
# 176 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\assert.h" 1 3
# 20 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\assert.h" 3
_Noreturn

void __assert_fail (const char *, const char *, int, const char *);
# 177 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\ctype.h" 1 3
# 37 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\ctype.h" 3


# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\ctype.h" 1 3
# 15 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\ctype.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\ctype.h" 1 3
# 10 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\ctype.h" 3
int isalnum(int);
int isalpha(int);
int isblank(int);
int iscntrl(int);
int isdigit(int);
int isgraph(int);
int islower(int);
int isprint(int);
int ispunct(int);
int isspace(int);
int isupper(int);
int isxdigit(int);
int tolower(int);
int toupper(int);


static inline int __isspace(int _c)
{
 return _c == ' ' || (unsigned)_c-'\t' < 5;
}
# 46 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\ctype.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 47 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\ctype.h" 2 3

int isalnum_l(int, locale_t);
int isalpha_l(int, locale_t);
int isblank_l(int, locale_t);
int iscntrl_l(int, locale_t);
int isdigit_l(int, locale_t);
int isgraph_l(int, locale_t);
int islower_l(int, locale_t);
int isprint_l(int, locale_t);
int ispunct_l(int, locale_t);
int isspace_l(int, locale_t);
int isupper_l(int, locale_t);
int isxdigit_l(int, locale_t);
int tolower_l(int, locale_t);
int toupper_l(int, locale_t);

int isascii(int);
int toascii(int);
# 16 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\ctype.h" 2 3
# 40 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\ctype.h" 2 3
# 178 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdio.h" 1 3
# 179 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h" 2
# 198 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h"
static inline int
bits_to_bytes(const int bits) {
    return ((bits + 7) >> 3);
}






static inline int
bytes_to_int32(const int bytes) {
    return (((bytes) + 3) >> 2);
}






static inline int
pad_to_int32(const int bytes) {
    return (((bytes) + 3) & ~3);
}

extern char**
xstrtokenize(const char *str, const char* separators);







static inline int
version_compare(uint16_t a_major, uint16_t a_minor,
                uint16_t b_major, uint16_t b_minor)
{
    int a, b;

    a = a_major << 16 | a_minor;
    b = b_major << 16 | b_minor;

    return (a - b);
}
# 288 "D:\\projects\\xsdl\\win-xsdl\\..\\include/misc.h"
extern __attribute__((visibility("default"))) void SwapLongs(
    CARD32 *list,
    unsigned long count);

extern __attribute__((visibility("default"))) void SwapShorts(
    short *list,
    unsigned long count);

extern __attribute__((visibility("default"))) void MakePredeclaredAtoms(void);

extern __attribute__((visibility("default"))) int Ones(
    unsigned long );

typedef struct _xPoint *DDXPointPtr;
typedef struct pixman_box16 *BoxPtr;
typedef struct _xEvent *xEventPtr;
typedef struct _xRectangle *xRectanglePtr;
typedef struct _GrabRec *GrabPtr;







typedef struct _CharInfo *CharInfoPtr;



extern __attribute__((visibility("default"))) unsigned long globalSerialNumber;
extern __attribute__((visibility("default"))) unsigned long serverGeneration;
# 53 "D:\\projects\\xsdl\\win-xsdl\\..\\include/os.h" 2


# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\assert.h" 1 3
# 20 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\assert.h" 3
_Noreturn

void __assert_fail (const char *, const char *, int, const char *);
# 56 "D:\\projects\\xsdl\\win-xsdl\\..\\include/os.h" 2

typedef int pid_t;
# 74 "D:\\projects\\xsdl\\win-xsdl\\..\\include/os.h"
typedef struct _FontPathRec *FontPathPtr;
typedef struct _NewClientRec *NewClientPtr;
# 90 "D:\\projects\\xsdl\\win-xsdl\\..\\include/os.h"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdio.h" 1 3
# 91 "D:\\projects\\xsdl\\win-xsdl\\..\\include/os.h" 2
# 101 "D:\\projects\\xsdl\\win-xsdl\\..\\include/os.h"
extern __attribute__((visibility("default"))) int WaitForSomething(
    int*
);

extern __attribute__((visibility("default"))) int ReadRequestFromClient(ClientPtr );

extern __attribute__((visibility("default"))) Bool InsertFakeRequest(
    ClientPtr ,
    char* ,
    int );

extern __attribute__((visibility("default"))) void ResetCurrentRequest(ClientPtr );

extern __attribute__((visibility("default"))) void FlushAllOutput(void);

extern __attribute__((visibility("default"))) void FlushIfCriticalOutputPending(void);

extern __attribute__((visibility("default"))) void SetCriticalOutputPending(void);

extern __attribute__((visibility("default"))) int WriteToClient(ClientPtr , int , const void* );

extern __attribute__((visibility("default"))) void ResetOsBuffers(void);

extern __attribute__((visibility("default"))) void InitConnectionLimits(void);

extern __attribute__((visibility("default"))) void NotifyParentProcess(void);

extern __attribute__((visibility("default"))) void CreateWellKnownSockets(void);

extern __attribute__((visibility("default"))) void ResetWellKnownSockets(void);

extern __attribute__((visibility("default"))) void CloseWellKnownConnections(void);

extern __attribute__((visibility("default"))) XID AuthorizationIDOfClient(ClientPtr );

extern __attribute__((visibility("default"))) char *ClientAuthorized(
    ClientPtr ,
    unsigned int ,
    char* ,
    unsigned int ,
    char* );

extern __attribute__((visibility("default"))) Bool EstablishNewConnections(
    ClientPtr ,
    pointer );

extern __attribute__((visibility("default"))) void CheckConnections(void);

extern __attribute__((visibility("default"))) void CloseDownConnection(ClientPtr );

extern __attribute__((visibility("default"))) void AddGeneralSocket(int );

extern __attribute__((visibility("default"))) void RemoveGeneralSocket(int );

extern __attribute__((visibility("default"))) void AddEnabledDevice(int );

extern __attribute__((visibility("default"))) void RemoveEnabledDevice(int );

extern __attribute__((visibility("default"))) int OnlyListenToOneClient(ClientPtr );

extern __attribute__((visibility("default"))) void ListenToAllClients(void);

extern __attribute__((visibility("default"))) void IgnoreClient(ClientPtr );

extern __attribute__((visibility("default"))) void AttendClient(ClientPtr );

extern __attribute__((visibility("default"))) void MakeClientGrabImpervious(ClientPtr );

extern __attribute__((visibility("default"))) void MakeClientGrabPervious(ClientPtr );





extern __attribute__((visibility("default"))) CARD32 GetTimeInMillis(void);

extern __attribute__((visibility("default"))) void AdjustWaitForDelay(
    pointer ,
    unsigned long );

typedef struct _OsTimerRec *OsTimerPtr;

typedef CARD32 (*OsTimerCallback)(
    OsTimerPtr ,
    CARD32 ,
    pointer );

extern __attribute__((visibility("default"))) void TimerInit(void);

extern __attribute__((visibility("default"))) Bool TimerForce(OsTimerPtr );




extern __attribute__((visibility("default"))) OsTimerPtr TimerSet(
    OsTimerPtr ,
    int ,
    CARD32 ,
    OsTimerCallback ,
    pointer );

extern __attribute__((visibility("default"))) void TimerCheck(void);
extern __attribute__((visibility("default"))) void TimerCancel(OsTimerPtr );
extern __attribute__((visibility("default"))) void TimerFree(OsTimerPtr );

extern __attribute__((visibility("default"))) void SetScreenSaverTimer(void);
extern __attribute__((visibility("default"))) void FreeScreenSaverTimer(void);

extern __attribute__((visibility("default"))) void AutoResetServer(int );

extern __attribute__((visibility("default"))) void GiveUp(int );

extern __attribute__((visibility("default"))) void UseMsg(void);

extern __attribute__((visibility("default"))) void ProcessCommandLine(int , char* []);

extern __attribute__((visibility("default"))) int set_font_authorizations(
    char ** ,
    int * ,
    pointer );







extern __attribute__((visibility("default"))) void *Xalloc(unsigned long ) __attribute__((deprecated));



extern __attribute__((visibility("default"))) void *Xcalloc(unsigned long ) __attribute__((deprecated));



extern __attribute__((visibility("default"))) void *Xrealloc(void * , unsigned long )
    __attribute__((deprecated));



extern __attribute__((visibility("default"))) void Xfree(void * ) __attribute__((deprecated));







extern __attribute__((visibility("default"))) void *XNFalloc(unsigned long );




extern __attribute__((visibility("default"))) void *XNFcalloc(unsigned long );




extern __attribute__((visibility("default"))) void *XNFrealloc(void * , unsigned long );





extern __attribute__((visibility("default"))) char *Xstrdup(const char *s);





extern __attribute__((visibility("default"))) char *XNFstrdup(const char *s);



# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\include/Xprintf.h" 1
# 27 "D:\\projects\\xsdl\\win-xsdl\\..\\include/Xprintf.h"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libcxx\\stdio.h" 1 3
# 28 "D:\\projects\\xsdl\\win-xsdl\\..\\include/Xprintf.h" 2
# 51 "D:\\projects\\xsdl\\win-xsdl\\..\\include/Xprintf.h"
extern __attribute__((visibility("default"))) int Xasprintf (char **ret,
    const char * restrict fmt,
    ...) __attribute__((__format__(__printf__,2,3)));
extern __attribute__((visibility("default"))) int Xvasprintf (char **ret,
     const char * restrict fmt,
     va_list va) __attribute__((__format__(__printf__,2,0)));
extern __attribute__((visibility("default"))) int XNFasprintf (char **ret,
      const char * restrict fmt,
      ...) __attribute__((__format__(__printf__,2,3)));
extern __attribute__((visibility("default"))) int XNFvasprintf (char **ret,
       const char * restrict fmt,
       va_list va) __attribute__((__format__(__printf__,2,0)));
# 275 "D:\\projects\\xsdl\\win-xsdl\\..\\include/os.h" 2


extern __attribute__((visibility("default"))) char *Xprintf(const char *fmt, ...) __attribute__((__format__(__printf__,1,2))) __attribute__((deprecated));
extern __attribute__((visibility("default"))) char *Xvprintf(const char *fmt, va_list va)__attribute__((__format__(__printf__,1,0))) __attribute__((deprecated));
extern __attribute__((visibility("default"))) char *XNFprintf(const char *fmt, ...) __attribute__((__format__(__printf__,1,2))) __attribute__((deprecated));
extern __attribute__((visibility("default"))) char *XNFvprintf(const char *fmt, va_list va)__attribute__((__format__(__printf__,1,0))) __attribute__((deprecated));

typedef void (*OsSigHandlerPtr)(int );
typedef int (*OsSigWrapperPtr)(int );

extern __attribute__((visibility("default"))) OsSigHandlerPtr OsSignal(int , OsSigHandlerPtr );
extern __attribute__((visibility("default"))) OsSigWrapperPtr OsRegisterSigWrapper(OsSigWrapperPtr newWrap);

extern __attribute__((visibility("default"))) int auditTrailLevel;

extern __attribute__((visibility("default"))) void LockServer(void);
extern __attribute__((visibility("default"))) void UnlockServer(void);

extern __attribute__((visibility("default"))) int OsLookupColor(
    int ,
    char * ,
    unsigned ,
    unsigned short * ,
    unsigned short * ,
    unsigned short * );

extern __attribute__((visibility("default"))) void OsInit(void);

extern __attribute__((visibility("default"))) void OsCleanup(Bool);

extern __attribute__((visibility("default"))) void OsVendorFatalError(void);

extern __attribute__((visibility("default"))) void OsVendorInit(void);

extern __attribute__((visibility("default"))) void OsBlockSignals (void);

extern __attribute__((visibility("default"))) void OsReleaseSignals (void);

extern __attribute__((visibility("default"))) void OsAbort (void) __attribute((noreturn));


extern __attribute__((visibility("default"))) int System(char *);
extern __attribute__((visibility("default"))) pointer Popen(char *, char *);
extern __attribute__((visibility("default"))) int Pclose(pointer);
extern __attribute__((visibility("default"))) pointer Fopen(char *, char *);
extern __attribute__((visibility("default"))) int Fclose(pointer);
# 329 "D:\\projects\\xsdl\\win-xsdl\\..\\include/os.h"
extern __attribute__((visibility("default"))) void CheckUserParameters(int argc, char **argv, char **envp);
extern __attribute__((visibility("default"))) void CheckUserAuthorization(void);

extern __attribute__((visibility("default"))) int AddHost(
    ClientPtr ,
    int ,
    unsigned ,
    const void * );

extern __attribute__((visibility("default"))) Bool ForEachHostInFamily (
    int ,
    Bool (* )(
            unsigned char * ,
            short ,
            pointer ),
    pointer );

extern __attribute__((visibility("default"))) int RemoveHost(
    ClientPtr ,
    int ,
    unsigned ,
    pointer );

extern __attribute__((visibility("default"))) int GetHosts(
    pointer * ,
    int * ,
    int * ,
    BOOL * );

typedef struct sockaddr * sockaddrPtr;

extern __attribute__((visibility("default"))) int InvalidHost(sockaddrPtr , int , ClientPtr client);

extern __attribute__((visibility("default"))) int LocalClient(ClientPtr );

extern __attribute__((visibility("default"))) int LocalClientCred(ClientPtr, int *, int *);






typedef struct {
    int fieldsSet;
    int euid;
    int egid;
    int nSuppGids;
    int *pSuppGids;
    int pid;
    int zoneid;
} LocalClientCredRec;

extern __attribute__((visibility("default"))) int GetLocalClientCreds(ClientPtr, LocalClientCredRec **);
extern __attribute__((visibility("default"))) void FreeLocalClientCreds(LocalClientCredRec *);

extern __attribute__((visibility("default"))) int ChangeAccessControl(ClientPtr , int );

extern __attribute__((visibility("default"))) int GetAccessControl(void);


extern __attribute__((visibility("default"))) void AddLocalHosts(void);

extern __attribute__((visibility("default"))) void ResetHosts(char *display);

extern __attribute__((visibility("default"))) void EnableLocalHost(void);

extern __attribute__((visibility("default"))) void DisableLocalHost(void);

extern __attribute__((visibility("default"))) void AccessUsingXdmcp(void);

extern __attribute__((visibility("default"))) void DefineSelf(int );







extern __attribute__((visibility("default"))) void InitAuthorization(char * );



extern __attribute__((visibility("default"))) int AuthorizationFromID (
 XID id,
 unsigned short *name_lenp,
 char **namep,
 unsigned short *data_lenp,
 char **datap);

extern __attribute__((visibility("default"))) XID CheckAuthorization(
    unsigned int ,
    const char * ,
    unsigned int ,
    const char * ,
    ClientPtr ,
    char **
);

extern __attribute__((visibility("default"))) void ResetAuthorization(void);

extern __attribute__((visibility("default"))) int RemoveAuthorization (
    unsigned short name_length,
    const char *name,
    unsigned short data_length,
    const char *data);

extern __attribute__((visibility("default"))) int AddAuthorization(
    unsigned int ,
    const char * ,
    unsigned int ,
    char * );
# 451 "D:\\projects\\xsdl\\win-xsdl\\..\\include/os.h"
extern __attribute__((visibility("default"))) int ddxProcessArgument(int , char * [], int );

extern __attribute__((visibility("default"))) void ddxUseMsg(void);


extern __attribute__((visibility("default"))) CallbackListPtr ReplyCallback;
typedef struct {
    ClientPtr client;
    const void *replyData;
    unsigned long dataLenBytes;
    unsigned long bytesRemaining;
    Bool startOfReply;
    unsigned long padBytes;
} ReplyInfoRec;


extern __attribute__((visibility("default"))) CallbackListPtr FlushCallback;

enum ExitCode {
    EXIT_NO_ERROR = 0,
    EXIT_ERR_ABORT = 1,
    EXIT_ERR_CONFIGURE = 2,
    EXIT_ERR_DRIVERS = 3,
};

extern __attribute__((visibility("default"))) void AbortDDX(enum ExitCode error);
extern __attribute__((visibility("default"))) void ddxGiveUp(enum ExitCode error);
extern __attribute__((visibility("default"))) int TimeSinceLastInputEvent(void);
# 497 "D:\\projects\\xsdl\\win-xsdl\\..\\include/os.h"
extern __attribute__((visibility("default"))) size_t strlcpy(char *dst, const char *src, size_t siz);
extern __attribute__((visibility("default"))) size_t strlcat(char *dst, const char *src, size_t siz);



typedef enum _LogParameter {
    XLOG_FLUSH,
    XLOG_SYNC,
    XLOG_VERBOSITY,
    XLOG_FILE_VERBOSITY
} LogParameter;


typedef enum {
    X_PROBED,
    X_CONFIG,
    X_DEFAULT,
    X_CMDLINE,
    X_NOTICE,
    X_ERROR,
    X_WARNING,
    X_INFO,
    X_NONE,
    X_NOT_IMPLEMENTED,
    X_UNKNOWN = -1
} MessageType;

extern __attribute__((visibility("default"))) const char *LogInit(const char *fname, const char *backup);
extern __attribute__((visibility("default"))) void LogClose(enum ExitCode error);
extern __attribute__((visibility("default"))) Bool LogSetParameter(LogParameter param, int value);
extern __attribute__((visibility("default"))) void LogVWrite(int verb, const char *f, va_list args) __attribute__((__format__(__printf__,2,0)));
extern __attribute__((visibility("default"))) void LogWrite(int verb, const char *f, ...) __attribute__((__format__(__printf__,2,3)));
extern __attribute__((visibility("default"))) void LogVMessageVerb(MessageType type, int verb, const char *format,
       va_list args) __attribute__((__format__(__printf__,3,0)));
extern __attribute__((visibility("default"))) void LogMessageVerb(MessageType type, int verb, const char *format,
      ...) __attribute__((__format__(__printf__,3,4)));
extern __attribute__((visibility("default"))) void LogMessage(MessageType type, const char *format, ...)
   __attribute__((__format__(__printf__,2,3)));
extern __attribute__((visibility("default"))) void FreeAuditTimer(void);
extern __attribute__((visibility("default"))) void AuditF(const char *f, ...) __attribute__((__format__(__printf__,1,2)));
extern __attribute__((visibility("default"))) void VAuditF(const char *f, va_list args) __attribute__((__format__(__printf__,1,0)));
extern __attribute__((visibility("default"))) void FatalError(const char *f, ...) __attribute__((__format__(__printf__,1,2))) __attribute((noreturn));







extern __attribute__((visibility("default"))) void VErrorF(const char *f, va_list args) __attribute__((__format__(__printf__,1,0)));
extern __attribute__((visibility("default"))) void ErrorF(const char *f, ...) __attribute__((__format__(__printf__,1,2)));
extern __attribute__((visibility("default"))) void Error(const char *str);
extern __attribute__((visibility("default"))) void LogPrintMarkers(void);
# 395 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h" 2
# 415 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h"
static inline void __attribute__((__format__(__printf__,2,3)))
prmsg(int lvl, const char *f, ...)
{

    va_list args;

    __builtin_va_start(args,f);
    if (lvl <= 5) {
 int saveerrno = (*__errno_location());

 ErrorF("%s", __xtransname);
 VErrorF(f, args);
# 436 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransint.h"
 (*__errno_location()) = saveerrno;
    }
    __builtin_va_end(args);

}
# 56 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/transport.c" 2


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wformat-nonliteral"
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
# 74 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/transport.c"
# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c" 1
# 82 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\arpa/inet.h" 1 3
# 83 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c" 2





# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos_r.h" 1
# 390 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xos_r.h"
typedef int _Xgethostbynameparams;
typedef int _Xgetservbynameparams;
# 89 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c" 2
# 107 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netinet/tcp.h" 1 3
# 66 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netinet/tcp.h" 3
typedef uint32_t tcp_seq;
# 75 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netinet/tcp.h" 3
struct tcphdr {


 __extension__

 union { struct {

 uint16_t source;
 uint16_t dest;
 uint32_t seq;
 uint32_t ack_seq;

 uint16_t res1:4;
 uint16_t doff:4;
 uint16_t fin:1;
 uint16_t syn:1;
 uint16_t rst:1;
 uint16_t psh:1;
 uint16_t ack:1;
 uint16_t urg:1;
 uint16_t res2:2;
# 107 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netinet/tcp.h" 3
 uint16_t window;
 uint16_t check;
 uint16_t urg_ptr;

 }; struct {


 uint16_t th_sport;
 uint16_t th_dport;
 uint32_t th_seq;
 uint32_t th_ack;

 uint8_t th_x2:4;
 uint8_t th_off:4;




 uint8_t th_flags;
 uint16_t th_win;
 uint16_t th_sum;
 uint16_t th_urp;


 }; };

};
# 148 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\netinet/tcp.h" 3
struct tcp_info {
 uint8_t tcpi_state;
 uint8_t tcpi_ca_state;
 uint8_t tcpi_retransmits;
 uint8_t tcpi_probes;
 uint8_t tcpi_backoff;
 uint8_t tcpi_options;
 uint8_t tcpi_snd_wscale : 4, tcpi_rcv_wscale : 4;
 uint32_t tcpi_rto;
 uint32_t tcpi_ato;
 uint32_t tcpi_snd_mss;
 uint32_t tcpi_rcv_mss;
 uint32_t tcpi_unacked;
 uint32_t tcpi_sacked;
 uint32_t tcpi_lost;
 uint32_t tcpi_retrans;
 uint32_t tcpi_fackets;
 uint32_t tcpi_last_data_sent;
 uint32_t tcpi_last_ack_sent;
 uint32_t tcpi_last_data_recv;
 uint32_t tcpi_last_ack_recv;
 uint32_t tcpi_pmtu;
 uint32_t tcpi_rcv_ssthresh;
 uint32_t tcpi_rtt;
 uint32_t tcpi_rttvar;
 uint32_t tcpi_snd_ssthresh;
 uint32_t tcpi_snd_cwnd;
 uint32_t tcpi_advmss;
 uint32_t tcpi_reordering;
 uint32_t tcpi_rcv_rtt;
 uint32_t tcpi_rcv_space;
 uint32_t tcpi_total_retrans;
 uint64_t tcpi_pacing_rate;
 uint64_t tcpi_max_pacing_rate;
 uint64_t tcpi_bytes_acked;
 uint64_t tcpi_bytes_received;
 uint32_t tcpi_segs_out;
 uint32_t tcpi_segs_in;
 uint32_t tcpi_notsent_bytes;
 uint32_t tcpi_min_rtt;
 uint32_t tcpi_data_segs_in;
 uint32_t tcpi_data_segs_out;
};



struct tcp_md5sig {
 struct sockaddr_storage tcpm_addr;
 uint16_t __tcpm_pad1;
 uint16_t tcpm_keylen;
 uint32_t __tcpm_pad2;
 uint8_t tcpm_key[80];
};
# 108 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c" 2


# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/ioctl.h" 1 3






# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/ioctl.h" 1 3
# 90 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/ioctl.h" 3
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 8 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/ioctl.h" 2 3

int ioctl (int, int, ...);
# 111 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c" 2
# 177 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
typedef struct _Sockettrans2dev {
    const char *transname;
    int family;
    int devcotsname;
    int devcltsname;
    int protocol;
} Sockettrans2dev;

static Sockettrans2dev Sockettrans2devtab[] = {

    {"inet",2,1,2,0},

    {"tcp",2,1,2,0},
# 202 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
};




static int _XSERVTransSocketINETClose (XtransConnInfo ciptr);
# 259 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
static int
_XSERVTransSocketSelectFamily (int first, const char *family)

{
    int i;

    prmsg (3,"SocketSelectFamily(%s)\n", family);

    for (i = first + 1; i < (sizeof(Sockettrans2devtab)/sizeof(Sockettrans2dev));i++)
    {
        if (!strcmp (family, Sockettrans2devtab[i].transname))
     return i;
    }

    return (first == -1 ? -2 : -1);
}







static int
_XSERVTransSocketINETGetAddr (XtransConnInfo ciptr)

{



    struct sockaddr_in socknamev4;

    void *socknamePtr;
    int namelen;

    prmsg (3,"SocketINETGetAddr(%p)\n", ciptr);





    namelen = sizeof(socknamev4);
    socknamePtr = &socknamev4;


    memset(socknamePtr,0,namelen);

    if (Xgetsockname (ciptr->fd,(struct sockaddr *) socknamePtr,
       (void *)&namelen) < 0)
    {

 (*__errno_location()) = XWSAGetLastError();

 prmsg (1,"SocketINETGetAddr: getsockname() failed: %d\n",
     XWSAGetLastError());
 return -1;
    }





    if ((ciptr->addr = malloc (namelen)) == ((void*)0))
    {
        prmsg (1,
     "SocketINETGetAddr: Can't allocate space for the addr\n");
        return -1;
    }




    ciptr->family = socknamev4.sin_family;

    ciptr->addrlen = namelen;
    memcpy (ciptr->addr, socknamePtr, ciptr->addrlen);

    return 0;
}







static int
_XSERVTransSocketINETGetPeerAddr (XtransConnInfo ciptr)

{



    struct sockaddr_in socknamev4;
    void *socknamePtr;
    int namelen;
# 364 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
    {
 namelen = sizeof(socknamev4);
 socknamePtr = &socknamev4;
    }

    memset(socknamePtr,0,namelen);

    prmsg (3,"SocketINETGetPeerAddr(%p)\n", ciptr);

    if (Xgetpeername (ciptr->fd, (struct sockaddr *) socknamePtr,
       (void *)&namelen) < 0)
    {

 (*__errno_location()) = XWSAGetLastError();

 prmsg (1,"SocketINETGetPeerAddr: getpeername() failed: %d\n",
     XWSAGetLastError());
 return -1;
    }





    if ((ciptr->peeraddr = malloc (namelen)) == ((void*)0))
    {
        prmsg (1,
    "SocketINETGetPeerAddr: Can't allocate space for the addr\n");
        return -1;
    }

    ciptr->peeraddrlen = namelen;
    memcpy (ciptr->peeraddr, socknamePtr, ciptr->peeraddrlen);

    return 0;
}


static XtransConnInfo
_XSERVTransSocketOpen (int i, int type)

{
    XtransConnInfo ciptr;

    prmsg (3,"SocketOpen(%d,%d)\n", i, type);

    if ((ciptr = calloc (1, sizeof(struct _XtransConnInfo))) == ((void*)0))
    {
 prmsg (1, "SocketOpen: malloc failed\n");
 return ((void*)0);
    }

 prmsg(1, "SocketOpen: socket(%d, %d, %d)\n", Sockettrans2devtab[i].family, type, Sockettrans2devtab[i].protocol);
    if ((ciptr->fd = Xsocket(Sockettrans2devtab[i].family, type,
 Sockettrans2devtab[i].protocol)) < 0


       || ciptr->fd >= sysconf(4)


      ) {

 (*__errno_location()) = XWSAGetLastError();

 prmsg (2, "SocketOpen: socket() failed for %s\n",
     Sockettrans2devtab[i].transname);

 free (ciptr);
 return ((void*)0);
    }


    if (Sockettrans2devtab[i].family == 2



    )
    {




 int tmp = 1;
 Xsetsockopt (ciptr->fd, 6, 1,
     (char *) &tmp, sizeof (int));
    }


    return ciptr;
}




static XtransConnInfo
_XSERVTransSocketReopen (int i __attribute__((__unused__)), int type, int fd, char *port)

{
    XtransConnInfo ciptr;
    int portlen;
    struct sockaddr *addr;
    size_t addrlen;

    prmsg (3,"SocketReopen(%d,%d,%s)\n", type, fd, port);

    if (port == ((void*)0)) {
      prmsg (1, "SocketReopen: port was null!\n");
      return ((void*)0);
    }

    portlen = strlen(port) + 1;







    if (portlen < 0 || portlen > 14) {
      prmsg (1, "SocketReopen: invalid portlen %d\n", portlen);
      return ((void*)0);
    }


    if ((ciptr = calloc (1, sizeof(struct _XtransConnInfo))) == ((void*)0))
    {
 prmsg (1, "SocketReopen: malloc(ciptr) failed\n");
 return ((void*)0);
    }

    ciptr->fd = fd;

    addrlen = portlen + __builtin_offsetof(struct sockaddr, sa_data);
    if ((addr = calloc (1, addrlen)) == ((void*)0)) {
 prmsg (1, "SocketReopen: malloc(addr) failed\n");
 free (ciptr);
 return ((void*)0);
    }
    ciptr->addr = (char *) addr;
    ciptr->addrlen = addrlen;

    if ((ciptr->peeraddr = calloc (1, addrlen)) == ((void*)0)) {
 prmsg (1, "SocketReopen: malloc(portaddr) failed\n");
 free (addr);
 free (ciptr);
 return ((void*)0);
    }
    ciptr->peeraddrlen = addrlen;


    ciptr->flags = (1<<1) | (1<<4);



    addr->sa_family = 1;



    strncpy(addr->sa_data, port, portlen);

    ciptr->family = 1;
    memcpy(ciptr->peeraddr, ciptr->addr, addrlen);
    ciptr->port = (strrchr((addr->sa_data),(':')));
    if (ciptr->port == ((void*)0)) {
 if (is_numeric(addr->sa_data)) {
     ciptr->port = addr->sa_data;
 }
    } else if (ciptr->port[0] == ':') {
 ciptr->port++;
    }

    return ciptr;
}
# 595 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
static XtransConnInfo
_XSERVTransSocketOpenCOTSServer (Xtransport *thistrans, char *protocol,
        char *host, char *port)

{
    XtransConnInfo ciptr = ((void*)0);
    int i = -1;

    prmsg (2,"SocketOpenCOTSServer(%s,%s,%s)\n", protocol, host, port);

                    ;

    while ((i = _XSERVTransSocketSelectFamily (i, thistrans->TransName)) >= 0) {
 if ((ciptr = _XSERVTransSocketOpen (
   i, Sockettrans2devtab[i].devcotsname)) != ((void*)0))
     break;
    }
    if (i < 0) {
 if (i == -1)
     prmsg (1,"SocketOpenCOTSServer: Unable to open socket for %s\n",
     thistrans->TransName);
 else
     prmsg (1,"SocketOpenCOTSServer: Unable to determine socket type for %s\n",
     thistrans->TransName);
 return ((void*)0);
    }
# 632 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
    if (Sockettrans2devtab[i].family == 2



    )
    {
 int one = 1;
 Xsetsockopt (ciptr->fd, 1, 2,
      (char *) &one, sizeof (int));
    }


    if (Sockettrans2devtab[i].family == 10)
    {
 int one = 1;
 Xsetsockopt(ciptr->fd, 41, 26, &one, sizeof(int));
    }



    ciptr->index = i;

    return ciptr;
}
# 701 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
static XtransConnInfo
_XSERVTransSocketOpenCLTSServer (Xtransport *thistrans, char *protocol,
        char *host, char *port)

{
    XtransConnInfo ciptr = ((void*)0);
    int i = -1;

    prmsg (2,"SocketOpenCLTSServer(%s,%s,%s)\n", protocol, host, port);

                    ;

    while ((i = _XSERVTransSocketSelectFamily (i, thistrans->TransName)) >= 0) {
 if ((ciptr = _XSERVTransSocketOpen (
   i, Sockettrans2devtab[i].devcotsname)) != ((void*)0))
     break;
    }
    if (i < 0) {
 if (i == -1)
     prmsg (1,"SocketOpenCLTSServer: Unable to open socket for %s\n",
     thistrans->TransName);
 else
     prmsg (1,"SocketOpenCLTSServer: Unable to determine socket type for %s\n",
     thistrans->TransName);
 return ((void*)0);
    }


    if (Sockettrans2devtab[i].family == 10)
    {
 int one = 1;
 Xsetsockopt(ciptr->fd, 41, 26, &one, sizeof(int));
    }



    ciptr->index = i;

    return ciptr;
}






static XtransConnInfo
_XSERVTransSocketReopenCOTSServer (Xtransport *thistrans, int fd, char *port)

{
    XtransConnInfo ciptr = ((void*)0);
    int i = -1;

    prmsg (2,
 "SocketReopenCOTSServer(%d, %s)\n", fd, port);

                    ;

    while ((i = _XSERVTransSocketSelectFamily (i, thistrans->TransName)) >= 0) {
 if ((ciptr = _XSERVTransSocketReopen (
   i, Sockettrans2devtab[i].devcotsname, fd, port)) != ((void*)0))
     break;
    }
    if (i < 0) {
 if (i == -1)
     prmsg (1,"SocketReopenCOTSServer: Unable to open socket for %s\n",
     thistrans->TransName);
 else
     prmsg (1,"SocketReopenCOTSServer: Unable to determine socket type for %s\n",
     thistrans->TransName);
 return ((void*)0);
    }



    ciptr->index = i;

    return ciptr;
}

static XtransConnInfo
_XSERVTransSocketReopenCLTSServer (Xtransport *thistrans, int fd, char *port)

{
    XtransConnInfo ciptr = ((void*)0);
    int i = -1;

    prmsg (2,
 "SocketReopenCLTSServer(%d, %s)\n", fd, port);

                    ;

    while ((i = _XSERVTransSocketSelectFamily (i, thistrans->TransName)) >= 0) {
 if ((ciptr = _XSERVTransSocketReopen (
   i, Sockettrans2devtab[i].devcotsname, fd, port)) != ((void*)0))
     break;
    }
    if (i < 0) {
 if (i == -1)
     prmsg (1,"SocketReopenCLTSServer: Unable to open socket for %s\n",
     thistrans->TransName);
 else
     prmsg (1,"SocketReopenCLTSServer: Unable to determine socket type for %s\n",
     thistrans->TransName);
 return ((void*)0);
    }



    ciptr->index = i;

    return ciptr;
}




static int
_XSERVTransSocketSetOption (XtransConnInfo ciptr, int option, int arg)

{
    prmsg (2,"SocketSetOption(%d,%d,%d)\n", ciptr->fd, option, arg);

    return -1;
}
# 857 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
static int
_XSERVTransSocketCreateListener (XtransConnInfo ciptr,
        struct sockaddr *sockname,
        int socknamelen, unsigned int flags)

{
    int namelen = socknamelen;
    int fd = ciptr->fd;
    int retry;

    prmsg (3, "SocketCreateListener(%p,%d)\n", ciptr, fd);

    if (Sockettrans2devtab[ciptr->index].family == 2



 )
 retry = 20;
    else
 retry = 0;





 Xfcntl(fd, 4, 04000);


    while (Xbind (fd, (struct sockaddr *) sockname, namelen) < 0)
    {
 if ((*__errno_location()) == (3)) {
     if (flags & 1)
  break;
     else
  return -2;
 }

 if (retry-- == 0) {
     prmsg (1, "SocketCreateListener: failed to bind listener\n");
     close (fd);
     return -1;
 }

 sleep (1);



    }

    if (Sockettrans2devtab[ciptr->index].family == 2



 ) {




    {
 static int linger[2] = { 0, 0 };
 Xsetsockopt (fd, 1, 13,
  (char *) linger, sizeof (linger));
    }


}

 int listen_err = Xlisten(fd, 128);
    if (listen_err < 0)
    {
 prmsg (1, "SocketCreateListener: listen2() failed : %d\n", listen_err);
 close (fd);
 return -1;
    }



    ciptr->flags = 1 | (ciptr->flags & ((1<<4)|(1<<5)));

    return 0;
}


static int
_XSERVTransSocketINETCreateListener (XtransConnInfo ciptr, char *port, unsigned int flags)

{



    struct sockaddr_in sockname;

    unsigned short sport;
    int namelen = sizeof(sockname);
    int status;
    long tmpport;



    struct servent *servp;


    char portbuf[32];


    prmsg (2, "SocketINETCreateListener(%s)\n", port);
# 974 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
    if (is_numeric (port))
    {

 tmpport = 6000 + strtol (port, (char**)((void*)0), 10);
 snprintf (portbuf, sizeof(portbuf), "%lu", tmpport);
 port = portbuf;
    }


    if (port && *port)
    {


 if (!is_numeric (port))
 {
     if ((servp = Xgetservbyname((port),("tcp"))) == ((void*)0))
     {
  prmsg (1,
      "SocketINETCreateListener: Unable to get service for %s\n",
        port);
  return -1;
     }

     sport = servp->s_port;
 }
 else
 {
     tmpport = strtol (port, (char**)((void*)0), 10);






     if (tmpport < 1024 || tmpport > 0xffff)
  return -1;

     sport = (unsigned short) tmpport;
 }
    }
    else
 sport = 0;

    memset(&sockname,0,sizeof(sockname));
# 1040 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
    sockname.sin_family = 2;
    sockname.sin_port = Xhtons (sport);
    sockname.sin_addr.s_addr = Xhtonl (((in_addr_t) 0x00000000));


    if ((status = _XSERVTransSocketCreateListener (ciptr,
 (struct sockaddr *) &sockname, namelen, flags)) < 0)
    {
 prmsg (1,
    "SocketINETCreateListener: ...SocketCreateListener() failed\n");
 return status;
    }

    if (_XSERVTransSocketINETGetAddr (ciptr) < 0)
    {
 prmsg (1,
       "SocketINETCreateListener: ...SocketINETGetAddr() failed\n");
 return -1;
    }

    return 0;
}
# 1257 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
static XtransConnInfo
_XSERVTransSocketINETAccept (XtransConnInfo ciptr, int *status)

{
    XtransConnInfo newciptr;
    struct sockaddr_in sockname;
    int namelen = sizeof(sockname);

    prmsg (2, "SocketINETAccept(%p,%d)\n", ciptr, ciptr->fd);

    if ((newciptr = calloc (1, sizeof(struct _XtransConnInfo))) == ((void*)0))
    {
 prmsg (1, "SocketINETAccept: malloc failed\n");
 *status = -1;
 return ((void*)0);
    }

    if ((newciptr->fd = Xaccept (ciptr->fd,
 (struct sockaddr *) &sockname, (void *)&namelen)) < 0)
    {

 (*__errno_location()) = XWSAGetLastError();

 prmsg (1, "SocketINETAccept: accept() failed\n");
 free (newciptr);
 *status = -2;
 return ((void*)0);
    }


    {




 int tmp = 1;
 Xsetsockopt (newciptr->fd, 6, 1,
     (char *) &tmp, sizeof (int));
    }







    if (_XSERVTransSocketINETGetAddr (newciptr) < 0)
    {
 prmsg (1,
     "SocketINETAccept: ...SocketINETGetAddr() failed:\n");
 close (newciptr->fd);
 free (newciptr);
 *status = -3;
        return ((void*)0);
    }

    if (_XSERVTransSocketINETGetPeerAddr (newciptr) < 0)
    {
 prmsg (1,
   "SocketINETAccept: ...SocketINETGetPeerAddr() failed:\n");
 close (newciptr->fd);
 if (newciptr->addr) free (newciptr->addr);
 free (newciptr);
 *status = -3;
        return ((void*)0);
    }

    *status = 0;

    return newciptr;
}
# 2091 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
static int
_XSERVTransSocketBytesReadable (XtransConnInfo ciptr, BytesReadable_t *pend)

{
    prmsg (2,"SocketBytesReadable(%p,%d,%p)\n",
 ciptr, ciptr->fd, pend);
# 2107 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
    return ioctl (ciptr->fd, 0x541B, (char *) pend);


}


static int
_XSERVTransSocketRead (XtransConnInfo ciptr, char *buf, int size)

{
    prmsg (2,"SocketRead(%d,%p,%d)\n", ciptr->fd, buf, size);


    {
 int ret = Xrecv ((SOCKET)ciptr->fd, buf, size, 0);
 if (ret == (-1)) (*__errno_location()) = XWSAGetLastError();
 return ret;
    }



}


static int
_XSERVTransSocketWrite (XtransConnInfo ciptr, char *buf, int size)

{
    prmsg (2,"SocketWrite(%d,%p,%d)\n", ciptr->fd, buf, size);


    {
 int ret = Xsend ((SOCKET)ciptr->fd, buf, size, 0);
 if (ret == (-1)) (*__errno_location()) = XWSAGetLastError();
 return ret;
    }



}


static int
_XSERVTransSocketReadv (XtransConnInfo ciptr, struct iovec *buf, int size)

{
    prmsg (2,"SocketReadv(%d,%p,%d)\n", ciptr->fd, buf, size);

    return _XSERVTransReadV(ciptr, buf, size);
}


static int
_XSERVTransSocketWritev (XtransConnInfo ciptr, struct iovec *buf, int size)

{
    prmsg (2,"SocketWritev2(%d,%p,%d)\n", ciptr->fd, buf, size);

    return _XSERVTransWriteV(ciptr, buf, size);
}


static int
_XSERVTransSocketDisconnect (XtransConnInfo ciptr)

{
    prmsg (2,"SocketDisconnect(%p,%d)\n", ciptr, ciptr->fd);


    {
 int ret = Xshutdown(ciptr->fd,2);
 if (ret == (-1)) (*__errno_location()) = XWSAGetLastError();
 return ret;
    }



}



static int
_XSERVTransSocketINETClose (XtransConnInfo ciptr)

{
    prmsg (2,"SocketINETClose(%p,%d)\n", ciptr, ciptr->fd);


    {
 int ret = close (ciptr->fd);
 if (ret == (-1)) (*__errno_location()) = XWSAGetLastError();
 return ret;
    }



}
# 2260 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtranssock.c"
static const char* tcp_nolisten[] = {
 "inet",



 ((void*)0)
};


Xtransport _XSERVTransSocketTCPFuncs = {

 "tcp",
        (1<<0),




 tcp_nolisten,
 _XSERVTransSocketOpenCOTSServer,





 _XSERVTransSocketOpenCLTSServer,


 _XSERVTransSocketReopenCOTSServer,
 _XSERVTransSocketReopenCLTSServer,

 _XSERVTransSocketSetOption,

 _XSERVTransSocketINETCreateListener,
 ((void*)0),
 _XSERVTransSocketINETAccept,




 _XSERVTransSocketBytesReadable,
 _XSERVTransSocketRead,
 _XSERVTransSocketWrite,
 _XSERVTransSocketReadv,
 _XSERVTransSocketWritev,
 _XSERVTransSocketDisconnect,
 _XSERVTransSocketINETClose,
 _XSERVTransSocketINETClose,
 };

Xtransport _XSERVTransSocketINETFuncs = {

 "inet",
 0,




 ((void*)0),
 _XSERVTransSocketOpenCOTSServer,





 _XSERVTransSocketOpenCLTSServer,


 _XSERVTransSocketReopenCOTSServer,
 _XSERVTransSocketReopenCLTSServer,

 _XSERVTransSocketSetOption,

 _XSERVTransSocketINETCreateListener,
 ((void*)0),
 _XSERVTransSocketINETAccept,




 _XSERVTransSocketBytesReadable,
 _XSERVTransSocketRead,
 _XSERVTransSocketWrite,
 _XSERVTransSocketReadv,
 _XSERVTransSocketWritev,
 _XSERVTransSocketDisconnect,
 _XSERVTransSocketINETClose,
 _XSERVTransSocketINETClose,
 };
# 75 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/transport.c" 2




# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c" 1
# 83 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
static
Xtransport_table Xtransports[] = {






    { &_XSERVTransSocketTCPFuncs, 7 },



    { &_XSERVTransSocketINETFuncs, 6 },
# 122 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
};
# 137 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
void
_XSERVTransFreeConnInfo (XtransConnInfo ciptr)

{
    prmsg (3,"FreeConnInfo(%p)\n", ciptr);

    if (ciptr->addr)
 free (ciptr->addr);

    if (ciptr->peeraddr)
 free (ciptr->peeraddr);

    if (ciptr->port)
 free (ciptr->port);

    free (ciptr);
}




static Xtransport *
_XSERVTransSelectTransport (const char *protocol)

{
    char protobuf[20];
    int i;

    prmsg (3,"SelectTransport(%s)\n", protocol);






    strncpy (protobuf, protocol, 20 - 1);
    protobuf[20 -1] = '\0';

    for (i = 0; i < 20 && protobuf[i] != '\0'; i++)
 if (isupper (protobuf[i]))
     protobuf[i] = tolower (protobuf[i]);



    for (i = 0; i < (sizeof(Xtransports)/sizeof(Xtransport_table)); i++)
    {
 if (!strcmp (protobuf, Xtransports[i].transport->TransName))
     return Xtransports[i].transport;
    }

    return ((void*)0);
}


static

int
_XSERVTransParseAddress (char *address, char **protocol, char **host, char **port)

{
# 211 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
    char *mybuf, *tmpptr;
    const char *_protocol;
    char *_host, *_port;
    char hostnamebuf[256];
    int _host_len;

    prmsg (3,"ParseAddress(%s)\n", address);



    tmpptr = mybuf = strdup (address);





    _protocol = mybuf;


   if ( ((mybuf = strchr (mybuf,'/')) == ((void*)0)) &&
      ((mybuf = strrchr (tmpptr,':')) == ((void*)0)) )
   {

 *protocol = ((void*)0);
 *host = ((void*)0);
 *port = ((void*)0);
 free (tmpptr);
 return 0;
    }

    if (*mybuf == ':')
    {




 if (mybuf == tmpptr)
 {

     _protocol = "local";
 }
 else
 {

     _protocol = "tcp";
     mybuf = tmpptr;
 }
    }
    else
    {


 *mybuf ++= '\0';

 if (strlen(_protocol) == 0)
 {




     if (*mybuf != ':')
  _protocol = "tcp";
     else
  _protocol = "local";
 }
    }



    _host = mybuf;

    if ((mybuf = strrchr (mybuf,':')) == ((void*)0))
    {
 *protocol = ((void*)0);
 *host = ((void*)0);
 *port = ((void*)0);
 free (tmpptr);
 return 0;
    }

    *mybuf ++= '\0';

    _host_len = strlen(_host);
    if (_host_len == 0)
    {
 _XSERVTransGetHostname (hostnamebuf, sizeof (hostnamebuf));
 _host = hostnamebuf;
    }
# 323 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
    _port = mybuf;
# 354 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
    if ((*protocol = strdup (_protocol)) == ((void*)0))
    {

 *port = ((void*)0);
 *host = ((void*)0);
 *protocol = ((void*)0);
 free (tmpptr);
 return 0;
    }

    if ((*host = strdup (_host)) == ((void*)0))
    {

 *port = ((void*)0);
 *host = ((void*)0);
 free (*protocol);
 *protocol = ((void*)0);
 free (tmpptr);
 return 0;
    }

    if ((*port = strdup (_port)) == ((void*)0))
    {

 *port = ((void*)0);
 free (*host);
 *host = ((void*)0);
 free (*protocol);
 *protocol = ((void*)0);
 free (tmpptr);
 return 0;
    }

    free (tmpptr);

    return 1;
}
# 399 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
static XtransConnInfo
_XSERVTransOpen (int type, char *address)

{
    char *protocol = ((void*)0), *host = ((void*)0), *port = ((void*)0);
    XtransConnInfo ciptr = ((void*)0);
    Xtransport *thistrans;

    prmsg (2,"Open(%d,%s)\n", type, address);
# 419 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
    if (_XSERVTransParseAddress (address, &protocol, &host, &port) == 0)
    {
 prmsg (1,"Open: Unable to Parse address %s\n", address);
 return ((void*)0);
    }

 prmsg(1, "Open: ParseAddress(%s) -> %s, %s, %s\n", address,protocol, host, port);



    if ((thistrans = _XSERVTransSelectTransport (protocol)) == ((void*)0))
    {
 prmsg (1,"Open: Unable to find transport for %s\n",
        protocol);

 free (protocol);
 free (host);
 free (port);
 return ((void*)0);
    }



    switch (type)
    {
    case 1:



 break;
    case 2:

 ciptr = thistrans->OpenCOTSServer(thistrans, protocol, host, port);

 break;
    case 3:



 break;
    case 4:

 ciptr = thistrans->OpenCLTSServer(thistrans, protocol, host, port);

 break;
    default:
 prmsg (1,"Open: Unknown Open type %d\n", type);
    }

    if (ciptr == ((void*)0))
    {
 if (!(thistrans->flags & (1<<2)))
 {
     prmsg (1,"Open: transport open failed for %s/%s:%s\n",
            protocol, host, port);
 }
 free (protocol);
 free (host);
 free (port);
 return ((void*)0);
    }

    ciptr->transptr = thistrans;
    ciptr->port = port;

    free (protocol);
    free (host);

    return ciptr;
}
# 499 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
static XtransConnInfo
_XSERVTransReopen (int type, int trans_id, int fd, char *port)

{
    XtransConnInfo ciptr = ((void*)0);
    Xtransport *thistrans = ((void*)0);
    char *save_port;
    int i;

    prmsg (2,"Reopen(%d,%d,%s)\n", trans_id, fd, port);



    for (i = 0; i < (sizeof(Xtransports)/sizeof(Xtransport_table)); i++)
 if (Xtransports[i].transport_id == trans_id)
 {
     thistrans = Xtransports[i].transport;
     break;
 }

    if (thistrans == ((void*)0))
    {
 prmsg (1,"Reopen: Unable to find transport id %d\n",
        trans_id);

 return ((void*)0);
    }

    if ((save_port = strdup (port)) == ((void*)0))
    {
 prmsg (1,"Reopen: Unable to malloc port string\n");

 return ((void*)0);
    }



    switch (type)
    {
    case 2:
 ciptr = thistrans->ReopenCOTSServer(thistrans, fd, port);
 break;
    case 4:
 ciptr = thistrans->ReopenCLTSServer(thistrans, fd, port);
 break;
    default:
 prmsg (1,"Reopen: Bad Open type %d\n", type);
    }

    if (ciptr == ((void*)0))
    {
 prmsg (1,"Reopen: transport open failed\n");
 free (save_port);
 return ((void*)0);
    }

    ciptr->transptr = thistrans;
    ciptr->port = save_port;

    return ciptr;
}
# 586 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
XtransConnInfo
_XSERVTransOpenCOTSServer (char *address)

{
    prmsg (2,"OpenCOTSServer(%s)\n", address);
    return _XSERVTransOpen (2, address);
}
# 612 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
XtransConnInfo
_XSERVTransOpenCLTSServer (char *address)

{
    prmsg (2,"OpenCLTSServer(%s)\n", address);
    return _XSERVTransOpen (4, address);
}






XtransConnInfo
_XSERVTransReopenCOTSServer (int trans_id, int fd, char *port)

{
    prmsg (2,"ReopenCOTSServer(%d, %d, %s)\n", trans_id, fd, port);
    return _XSERVTransReopen (2, trans_id, fd, port);
}

XtransConnInfo
_XSERVTransReopenCLTSServer (int trans_id, int fd, char *port)

{
    prmsg (2,"ReopenCLTSServer(%d, %d, %s)\n", trans_id, fd, port);
    return _XSERVTransReopen (4, trans_id, fd, port);
}


int
_XSERVTransGetReopenInfo (XtransConnInfo ciptr,
        int *trans_id, int *fd, char **port)

{
    int i;

    for (i = 0; i < (sizeof(Xtransports)/sizeof(Xtransport_table)); i++)
 if (Xtransports[i].transport == ciptr->transptr)
 {
     *trans_id = Xtransports[i].transport_id;
     *fd = ciptr->fd;

     if ((*port = strdup (ciptr->port)) == ((void*)0))
  return 0;
     else
  return 1;
 }

    return 0;
}




int
_XSERVTransSetOption (XtransConnInfo ciptr, int option, int arg)

{
    int fd = ciptr->fd;
    int ret = 0;

    prmsg (2,"SetOption(%d,%d,%d)\n", fd, option, arg);
# 686 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
    switch (option)
    {
    case 1:
 switch (arg)
 {
 case 0:

     break;
 case 1:


     ret = Xfcntl (fd, 3, 0);
     if (ret != -1)
  ret = Xfcntl (fd, 4, ret | 04000);
# 730 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
     break;
 default:

     break;
 }
 break;
    case 2:


 ret = Xfcntl (fd, 2, 1);




 break;
    }

    return ret;
}



int
_XSERVTransCreateListener (XtransConnInfo ciptr, char *port, unsigned int flags)

{
    return ciptr->transptr->CreateListener (ciptr, port, flags);
}

int
_XSERVTransNoListen (const char * protocol)

{
   Xtransport *trans;
   int i = 0, ret = 0;

   if ((trans = _XSERVTransSelectTransport(protocol)) == ((void*)0))
   {
 prmsg (1,"TransNoListen: unable to find transport: %s\n",
        protocol);

 return -1;
   }
   if (trans->flags & (1<<0)) {
       if (trans->nolisten)
    while (trans->nolisten[i]) {
        ret |= _XSERVTransNoListen(trans->nolisten[i]);
        i++;
       }
   }

   trans->flags |= (1<<3);
   return ret;
}

int
_XSERVTransResetListener (XtransConnInfo ciptr)

{
    if (ciptr->transptr->ResetListener)
 return ciptr->transptr->ResetListener (ciptr);
    else
 return 1;
}


XtransConnInfo
_XSERVTransAccept (XtransConnInfo ciptr, int *status)

{
    XtransConnInfo newciptr;

    prmsg (2,"Accept(%d)\n", ciptr->fd);

    newciptr = ciptr->transptr->Accept (ciptr, status);

    if (newciptr)
 newciptr->transptr = ciptr->transptr;

    return newciptr;
}
# 860 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
int
_XSERVTransBytesReadable (XtransConnInfo ciptr, BytesReadable_t *pend)

{
    return ciptr->transptr->BytesReadable (ciptr, pend);
}

int
_XSERVTransRead (XtransConnInfo ciptr, char *buf, int size)

{
    return ciptr->transptr->Read (ciptr, buf, size);
}

int
_XSERVTransWrite (XtransConnInfo ciptr, char *buf, int size)

{
 prmsg(2, "TRANS(Write) (%d,%p,%d)\n", ciptr->fd, buf, size);
    return ciptr->transptr->Write (ciptr, buf, size);
}

int
_XSERVTransReadv (XtransConnInfo ciptr, struct iovec *buf, int size)

{
 12;
    return ciptr->transptr->Readv (ciptr, buf, size);
}

int
_XSERVTransWritev (XtransConnInfo ciptr, struct iovec *buf, int size)

{
    return ciptr->transptr->Writev (ciptr, buf, size);
}

int
_XSERVTransDisconnect (XtransConnInfo ciptr)

{
    return ciptr->transptr->Disconnect (ciptr);
}

int
_XSERVTransClose (XtransConnInfo ciptr)

{
    int ret;

    prmsg (2,"Close(%d)\n", ciptr->fd);

    ret = ciptr->transptr->Close (ciptr);

    _XSERVTransFreeConnInfo (ciptr);

    return ret;
}

int
_XSERVTransCloseForCloning (XtransConnInfo ciptr)

{
    int ret;

    prmsg (2,"CloseForCloning(%d)\n", ciptr->fd);

    ret = ciptr->transptr->CloseForCloning (ciptr);

    _XSERVTransFreeConnInfo (ciptr);

    return ret;
}

int
_XSERVTransIsLocal (XtransConnInfo ciptr)

{
    return (ciptr->family == 1);
}


int
_XSERVTransGetMyAddr (XtransConnInfo ciptr, int *familyp, int *addrlenp,
    Xtransaddr **addrp)

{
    prmsg (2,"GetMyAddr(%d)\n", ciptr->fd);

    *familyp = ciptr->family;
    *addrlenp = ciptr->addrlen;

    if ((*addrp = malloc (ciptr->addrlen)) == ((void*)0))
    {
 prmsg (1,"GetMyAddr: malloc failed\n");
 return -1;
    }
    memcpy(*addrp, ciptr->addr, ciptr->addrlen);

    return 0;
}

int
_XSERVTransGetPeerAddr (XtransConnInfo ciptr, int *familyp, int *addrlenp,
      Xtransaddr **addrp)

{
    prmsg (2,"GetPeerAddr(%d)\n", ciptr->fd);

    *familyp = ciptr->family;
    *addrlenp = ciptr->peeraddrlen;

    if ((*addrp = malloc (ciptr->peeraddrlen)) == ((void*)0))
    {
 prmsg (1,"GetPeerAddr: malloc failed\n");
 return -1;
    }
    memcpy(*addrp, ciptr->peeraddr, ciptr->peeraddrlen);

    return 0;
}


int
_XSERVTransGetConnectionNumber (XtransConnInfo ciptr)

{
    return ciptr->fd;
}
# 999 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
static int
complete_network_count (void)

{
    int count = 0;
    int found_local = 0;
    int i;





    for (i = 0; i < (sizeof(Xtransports)/sizeof(Xtransport_table)); i++)
    {
 if (Xtransports[i].transport->flags & (1<<0)
     || Xtransports[i].transport->flags & (1<<3))
     continue;

 if (Xtransports[i].transport->flags & (1<<1))
     found_local = 1;
 else
     count++;
    }

    return (count + found_local);
}






int
_XSERVTransMakeAllCOTSServerListeners (char *port, int *partial, int *count_ret,
       XtransConnInfo **ciptrs_ret)

{
    char buffer[256];
    XtransConnInfo ciptr, temp_ciptrs[(sizeof(Xtransports)/sizeof(Xtransport_table))];
    int status, i, j;




    prmsg (2,"MakeAllCOTSServerListeners(%s,%p)\n",
    port ? port : "NULL", ciptrs_ret);

    *count_ret = 0;
# 1059 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
    for (i = 0; i < (sizeof(Xtransports)/sizeof(Xtransport_table)); i++)
    {
 Xtransport *trans = Xtransports[i].transport;
 unsigned int flags = 0;

 if (trans->flags&(1<<0) || trans->flags&(1<<3))
     continue;

 snprintf(buffer, sizeof(buffer), "%s/:%s",
   trans->TransName, port ? port : "");

 prmsg (5,"MakeAllCOTSServerListeners: opening %s\n",
        buffer);

 if ((ciptr = _XSERVTransOpenCOTSServer(buffer)) == ((void*)0))
 {
     if (trans->flags & (1<<2))
  continue;

     prmsg (1,
   "MakeAllCOTSServerListeners: failed to open listener for %s\n",
    trans->TransName);
     continue;
 }






 if ((status = _XSERVTransCreateListener (ciptr, port, flags)) < 0)
 {
     if (status == -2)
     {






  prmsg (1,
  "MakeAllCOTSServerListeners: server already running\n");

  for (j = 0; j < *count_ret; j++)
      _XSERVTransClose (temp_ciptrs[j]);

  *count_ret = 0;
  *ciptrs_ret = ((void*)0);
  *partial = 0;
  return -1;
     }
     else
     {
  prmsg (1,
 "MakeAllCOTSServerListeners: failed to create listener for %s\n",
    trans->TransName);

  continue;
     }
 }






 prmsg (5,
       "MakeAllCOTSServerListeners: opened listener for %s, %d\n",
       trans->TransName, ciptr->fd);

 temp_ciptrs[*count_ret] = ciptr;
 (*count_ret)++;
    }

    *partial = (*count_ret < complete_network_count());

    prmsg (5,
     "MakeAllCOTSServerListeners: partial=%d, actual=%d, complete=%d \n",
 *partial, *count_ret, complete_network_count());

    if (*count_ret > 0)
    {
 if ((*ciptrs_ret = malloc (
     *count_ret * sizeof (XtransConnInfo))) == ((void*)0))
 {
     return -1;
 }

 for (i = 0; i < *count_ret; i++)
 {
     (*ciptrs_ret)[i] = temp_ciptrs[i];
 }
    }
    else
 *ciptrs_ret = ((void*)0);

    return 0;
}

int
_XSERVTransMakeAllCLTSServerListeners (char *port, int *partial, int *count_ret,
       XtransConnInfo **ciptrs_ret)

{
    char buffer[256];
    XtransConnInfo ciptr, temp_ciptrs[(sizeof(Xtransports)/sizeof(Xtransport_table))];
    int status, i, j;

    prmsg (2,"MakeAllCLTSServerListeners(%s,%p)\n",
 port ? port : "NULL", ciptrs_ret);

    *count_ret = 0;

    for (i = 0; i < (sizeof(Xtransports)/sizeof(Xtransport_table)); i++)
    {
 Xtransport *trans = Xtransports[i].transport;

 if (trans->flags&(1<<0) || trans->flags&(1<<3))
     continue;

 snprintf(buffer, sizeof(buffer), "%s/:%s",
   trans->TransName, port ? port : "");

 prmsg (5,"MakeAllCLTSServerListeners: opening %s\n",
     buffer);

 if ((ciptr = _XSERVTransOpenCLTSServer (buffer)) == ((void*)0))
 {
     prmsg (1,
 "MakeAllCLTSServerListeners: failed to open listener for %s\n",
    trans->TransName);
     continue;
 }

 if ((status = _XSERVTransCreateListener (ciptr, port, 0)) < 0)
 {
     if (status == -2)
     {






  prmsg (1,
  "MakeAllCLTSServerListeners: server already running\n");

  for (j = 0; j < *count_ret; j++)
      _XSERVTransClose (temp_ciptrs[j]);

  *count_ret = 0;
  *ciptrs_ret = ((void*)0);
  *partial = 0;
  return -1;
     }
     else
     {
  prmsg (1,
 "MakeAllCLTSServerListeners: failed to create listener for %s\n",
    trans->TransName);

  continue;
     }
 }

 prmsg (5,
 "MakeAllCLTSServerListeners: opened listener for %s, %d\n",
       trans->TransName, ciptr->fd);
 temp_ciptrs[*count_ret] = ciptr;
 (*count_ret)++;
    }

    *partial = (*count_ret < complete_network_count());

    prmsg (5,
     "MakeAllCLTSServerListeners: partial=%d, actual=%d, complete=%d \n",
 *partial, *count_ret, complete_network_count());

    if (*count_ret > 0)
    {
 if ((*ciptrs_ret = malloc (
     *count_ret * sizeof (XtransConnInfo))) == ((void*)0))
 {
     return -1;
 }

 for (i = 0; i < *count_ret; i++)
 {
     (*ciptrs_ret)[i] = temp_ciptrs[i];
 }
    }
    else
 *ciptrs_ret = ((void*)0);

    return 0;
}
# 1347 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
int _XSERVTransGetHostname (char *buf, int maxlen)

{
    int len;
# 1361 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtrans.c"
    buf[0] = '\0';
    (void) Xgethostname (buf, maxlen);
    buf [maxlen - 1] = '\0';
    len = strlen(buf);

    return len;
}
# 80 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/transport.c" 2
# 1 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransutil.c" 1
# 89 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransutil.c"
int
_XSERVTransConvertAddress(int *familyp, int *addrlenp, Xtransaddr **addrp)

{

    prmsg(2,"ConvertAddress(%d,%d,%p)\n",*familyp,*addrlenp,*addrp);

    switch( *familyp )
    {

    case 2:
    {





 struct sockaddr_in saddr;
 int len = sizeof(saddr.sin_addr.s_addr);
 char *cp = (char *) &saddr.sin_addr.s_addr;

 memcpy (&saddr, *addrp, sizeof (struct sockaddr_in));

 if ((len == 4) && (cp[0] == 127) && (cp[1] == 0) &&
     (cp[2] == 0) && (cp[3] == 1))
 {
     *familyp=256;
 }
 else
 {
     *familyp=0;
     *addrlenp=len;
     memcpy(*addrp,&saddr.sin_addr,len);
 }
 break;
    }
# 180 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransutil.c"
    default:
 prmsg(1,"ConvertAddress: Unknown family type %d\n",
       *familyp);
 return -1;
    }


    if (*familyp == 256)
    {





 char hostnamebuf[256];
 int len = _XSERVTransGetHostname (hostnamebuf, sizeof hostnamebuf);

 if (len > 0) {
     if (*addrp && *addrlenp < (len + 1))
     {
  free (*addrp);
  *addrp = ((void*)0);
     }
     if (!*addrp)
  *addrp = malloc (len + 1);
     if (*addrp) {
  strcpy ((char *) *addrp, hostnamebuf);
  *addrlenp = len;
     } else {
  *addrlenp = 0;
     }
 }
 else
 {
     if (*addrp)
  free (*addrp);
     *addrp = ((void*)0);
     *addrlenp = 0;
 }
    }

    return 0;
}
# 449 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransutil.c"
static int
is_numeric (const char *str)
{
    int i;

    for (i = 0; i < (int) strlen (str); i++)
 if (!isdigit (str[i]))
     return (0);

    return (1);
}




# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\sys/stat.h" 1 3







# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/stat.h" 1 3
# 21 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/stat.h" 3
# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/alltypes.h" 1 3
# 22 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/stat.h" 2 3

# 1 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\lib\\libc\\musl\\arch\\emscripten\\bits/stat.h" 1 3



struct stat
{
 dev_t st_dev;
 int __st_dev_padding;
 long __st_ino_truncated;
 mode_t st_mode;
 nlink_t st_nlink;
 uid_t st_uid;
 gid_t st_gid;
 dev_t st_rdev;
 int __st_rdev_padding;
 off_t st_size;
 blksize_t st_blksize;
 blkcnt_t st_blocks;
 struct timespec st_atim;
 struct timespec st_mtim;
 struct timespec st_ctim;
 ino_t st_ino;
};
# 24 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/stat.h" 2 3
# 73 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\libc\\sys/stat.h" 3
int stat(const char *restrict, struct stat *restrict);
int fstat(int, struct stat *);
int lstat(const char *restrict, struct stat *restrict);
int fstatat(int, const char *restrict, struct stat *restrict, int);
int chmod(const char *, mode_t);
int fchmod(int, mode_t);
int fchmodat(int, const char *, mode_t, int);
mode_t umask(mode_t);
int mkdir(const char *, mode_t);
int mknod(const char *, mode_t, dev_t);
int mkfifo(const char *, mode_t);
int mkdirat(int, const char *, mode_t);
int mknodat(int, const char *, mode_t, dev_t);
int mkfifoat(int, const char *, mode_t);

int futimens(int, const struct timespec [2]);
int utimensat(int, const char *, const struct timespec [2], int);


int lchmod(const char *, mode_t);
# 9 "c:\\Utils\\emsdk\\fastcomp\\emscripten\\system\\include\\compat\\sys/stat.h" 2 3
# 464 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransutil.c" 2
# 480 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransutil.c"
static int
trans_mkdir(const char *path, int mode)
{
    struct stat buf;

    if (lstat(path, &buf) != 0) {
 if ((*__errno_location()) != (44)) {
     prmsg(1, "mkdir: ERROR: (l)stat failed for %s (%d)\n",
    path, (*__errno_location()));
     return -1;
 }
# 499 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransutil.c"
 if (geteuid() != 0) {
     if (mode & 01000) {
  prmsg(1, "mkdir: ERROR: euid != 0,"
        "directory %s will not be created.\n",
        path);



     } else {
  prmsg(1, "mkdir: Cannot create %s with root ownership\n",
        path);
     }
 }



 if (mkdir(path, mode) == 0) {
     if (chmod(path, mode)) {
  prmsg(1, "mkdir: ERROR: Mode of %s should be set to %04o\n",
        path, mode);



     }



 } else {
     prmsg(1, "mkdir: ERROR: Cannot create %s\n",
    path);
     return -1;
 }

 return 0;

    } else {


  if (1==1){
     int updateOwner = 0;
     int updateMode = 0;
     int updatedOwner = 0;
     int updatedMode = 0;
     int status = 0;

     if (buf.st_uid != 0)
  updateOwner = 1;






     if ((~mode) & 0077 & buf.st_mode)
  updateMode = 1;






     if ((~buf.st_mode) & 0022 & mode) {
  updateMode = 1;
  status |= 4;
     }





     if (mode & 01000) {
  status |= 2;
  if (!(buf.st_mode & 01000)) {
      status |= 1;
      updateMode = 1;
  }
     }
# 614 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransutil.c"
     if (updateOwner && !updatedOwner) {
# 623 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/Xtransutil.c"
  prmsg(1, "mkdir: Owner of %s should be set to root\n",
        path);

     }

     if (updateMode && !updatedMode) {







  prmsg(1, "mkdir: Mode of %s should be set to %04o\n",
        path, mode);
  if (status & 4) {
      prmsg(1, "mkdir: this may cause subsequent errors\n");
  }
     }
     return 0;
 }
 return -1;

    }


    return -1;
}
# 81 "D:\\projects\\xsdl\\win-xsdl\\..\\sys_include\\X11/Xtrans/transport.c" 2


#pragma clang diagnostic pop
# 14 "..\\os\\xstrans.c" 2

