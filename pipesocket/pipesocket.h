#pragma once

#ifdef __cplusplus
#define EXTERN_C       extern "C"
#else
#define EXTERN_C       /* Nothing */
#endif

#ifdef _WIN32
#define		WIN32_LEAN_AND_MEAN            
#define 	NOGDI
#define 	NOUSER
#define 	NOSOUND
#define INCL_WINSOCK_API_PROTOTYPES 0

#define ATOM wATOM
#define BYTE wBYTE
#define BOOL wBOOL
#define INT32 wINT32
#define FreeResource wFreeResource

#include <winsock2.h>
typedef int socklen_t;
#else
#define FAR
#include <sys/time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <errno.h>
#include <unistd.h>
#include <netdb.h>

//define this so it wont include inet.h
#define _ARPA_INET_H
#define _FCNTL_H

typedef unsigned int SOCKET;
#define INVALID_SOCKET (-1)
#define SOCKET_ERROR (-1)

#define WSAEINTR EINTR
#define WSAEINVAL EINVAL 
#define WSAENOTSOCK EBADF 
#define WSAENOTCONN ENOTCONN
#define WSAEWOULDBLOCK EWOULDBLOCK
typedef unsigned long u_long;
typedef unsigned short u_short;
#endif

#ifdef __EMSCRIPTEN
#include <emscripten.h>
#include <emscripten/threading.h>
#else

#endif

#ifdef _WIN32
EXTERN_C int  XWSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData);
#endif

EXTERN_C int XWSAGetLastError(void);
EXTERN_C void XWSASetLastError(int iError);


EXTERN_C int  Xselect(int nfds, fd_set FAR * readfds, fd_set FAR * writefds, fd_set FAR * exceptfds, const struct timeval FAR * timeout);
EXTERN_C int  Xsend(SOCKET s, const char FAR * buf, int len, int flags);
EXTERN_C struct hostent FAR * Xgethostbyaddr(const char FAR * addr, int len, int type);
EXTERN_C struct hostent FAR * Xgethostbyname(const char FAR * name);
EXTERN_C int Xbind(SOCKET s, const struct sockaddr FAR * name, int namelen);
EXTERN_C int Xrecv(SOCKET s, char FAR * buf, int len, int flags);
EXTERN_C int Xclosesocket(SOCKET s);
#ifdef _WIN32
EXTERN_C int Xioctlsocket(SOCKET s, long cmd, u_long FAR * argp);
#else
EXTERN_C int Xfcntl(SOCKET s, long cmd, u_long arg);
#endif
EXTERN_C SOCKET Xsocket(int af, int type, int protocol);
EXTERN_C int Xgethostname(char FAR * name, int namelen);
EXTERN_C SOCKET Xaccept(SOCKET s, struct sockaddr FAR * addr, int FAR * addrlen);
EXTERN_C int Xconnect(SOCKET s, const struct sockaddr FAR * name, int namelen);
EXTERN_C int XWSACleanup(void);
EXTERN_C int Xgetpeername(int s, struct sockaddr FAR* name, socklen_t FAR* namelen);
EXTERN_C int Xgetsockname(SOCKET s, struct sockaddr FAR * name, int FAR * namelen);
EXTERN_C u_long Xhtonl(u_long hostlong);
EXTERN_C u_short Xhtons(u_short hostshort);
EXTERN_C char FAR * Xinet_ntoa(struct in_addr in);
EXTERN_C int Xsetsockopt(SOCKET s, int level, int optname, const char FAR * optval, int optlen);
EXTERN_C int Xshutdown(SOCKET s, int how);
EXTERN_C u_short Xntohs(u_short netshort);
EXTERN_C unsigned long Xinet_addr(const char FAR * cp);
EXTERN_C struct servent FAR * Xgetservbyname(const char FAR * name, const char FAR * proto);
EXTERN_C int Xlisten(SOCKET s,int backlog);

#ifdef _WIN32
#undef ATOM
#undef BYTE
#undef BOOL
#undef INT32
#undef FreeResource
#undef DWORD
#endif


#define select(a,b,c,d,e) Xselect(a,b,c,d,e)
#define socket Xsocket
#define accept Xaccept
#define bind Xbind
#define listen Xlisten
#define setsockopt Xsetsockopt
#define closesocket Xclosesocket
#define connect Xconnect
#define shutdown(a,b) Xshutdown(a,b)
#define WSAGetLastError XWSAGetLastError
#define WSAStartup XWSAStartup
#define WSACleanup XWSACleanup
#define WSASetLastError XWSASetLastError
#define htonl Xhtonl
#define htons Xhtons
#define ntohs Xntohs
#define inet_ntoa Xinet_ntoa
#define inet_addr Xinet_addr
#define send Xsend
#define recv Xrecv
#define getpeername Xgetpeername
#define getsockname Xgetsockname
#define gethostbyname Xgethostbyname
#define gethostbyaddr Xgethostbyaddr
#define getservbyname Xgetservbyname
#define gethostname Xgethostname
#ifdef _WIN32
#define ioctlsocket Xioctlsocket
#else
#define fcntl Xfcntl
#endif

