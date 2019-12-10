// pipesocket.cpp : Defines the functions for the static library.
//


#include <stdio.h>      
#include <stdlib.h>
#include <cstdint>
#include "pipesocket.h"
#include <unordered_map>
#include "pipe.h"
#include "internal_mutex.h"


int last_socket = 10;
static mutex_t socket_operation;

#ifdef _WIN32
thread_local static int LastError;
#else
__thread static int LastError;
#define strcpy_s(a,b,c) strcpy(a,c)
#endif

struct socket_struct {
	int server_client;//0 means client, 1 means server
	int af;
	int type;
	int protocol;
	//1 means it is non-blocking, 0 means it is blocking
	int blocking_mode;
	union {
		SOCKET matched;
		sockaddr binded;
	};

	union {

	};

	pipe_t* stream_pipe;
	pipe_producer_t* stream_p;
	pipe_consumer_t* stream_c;

	pipe_t* connections_pipe;
	pipe_producer_t* connections_p;
	pipe_consumer_t* connections_c;

	// 1 = listen mode
	int state;
};

std::unordered_map<SOCKET, socket_struct*> sock_handles;


int Xshutdown(SOCKET s, int how) {
	XWSASetLastError(0);
	return 0;
}


int Xgetservbyname_r(const char* name, const char* prots,
	struct servent* se, char* buf, size_t buflen, struct servent** res)
{
	XWSASetLastError(0);
	return 0;
}

struct servent FAR* Xgetservbyname(const char FAR* name, const char FAR* proto) {
	static struct servent se;
	static char* buf[2];
	struct servent* res;
	XWSASetLastError(0);
	if (Xgetservbyname_r(name, proto, &se, (char*)buf, sizeof buf, &res))
		return 0;
	return &se;
}


int XWSACleanup(void) {
	XWSASetLastError(0);
	return 1;
}

int Xgetpeername(int s, struct sockaddr FAR* name, socklen_t FAR* namelen) {
	
	return 1;
}
int Xgetsockname(SOCKET s, struct sockaddr FAR* name, int FAR* namelen) {
	XWSASetLastError(0);
	return 1;
}
 

int Xsetsockopt(SOCKET s, int level, int optname, const char FAR* optval, int optlen) {
	//optname:LINGER	= 128 Lingers on close if unsent data is present.
	XWSASetLastError(0);
	return 1;
}


int Xgethostname(char FAR * name, int namelen) {
	strcpy_s(name,namelen, "127.0.0.1");
	return 1;
}

struct hostent FAR* Xgethostbyname(const char FAR* name) {
	hostent* p = new hostent();
	p->h_name = new char[strlen("localhost")+1];
	strcpy_s(p->h_name, strlen("localhost") + 1, "localhost");
	p->h_addr_list = new char*[2];
	p->h_addr_list[0] = new char[strlen("127.0.0.1") + 1];
	strcpy_s(p->h_addr_list[0], strlen("127.0.0.1") + 1, "127.0.0.1");

	XWSASetLastError(0);
	return p;
}

int Xclosesocket(SOCKET s) {
	XWSASetLastError(0);
	return 1;
}



int Xbind(SOCKET s, const struct sockaddr FAR* name, int namelen) {
	printf("bind-ing %d....\n", s);
	mutex_lock(&socket_operation);
	//memcpy_s(&sock_handles[s]->binded, namelen,name,min(sizeof(sockaddr),namelen));
	sock_handles[s]->binded = *name;

	sock_handles[s]->server_client = 1;

	sock_handles[s]->connections_pipe = pipe_new(sizeof(SOCKET), 0);
	sock_handles[s]->connections_p = pipe_producer_new(sock_handles[s]->connections_pipe);
	sock_handles[s]->connections_c = pipe_consumer_new(sock_handles[s]->connections_pipe);

	mutex_unlock(&socket_operation);

	XWSASetLastError(0);
	return 0;
}

int Xlisten(SOCKET s, int backlog) {
	printf("listen-ing  on %d....\n", s);
	mutex_lock(&socket_operation);
	sock_handles[s]->server_client = 1;
	sock_handles[s]->state = 1;
	
	mutex_unlock(&socket_operation);
	return 1;//???
}
//connecting to a remote server. this only makes sense if there is a server running somewhere locally!
int Xconnect(SOCKET s, const struct sockaddr FAR* name, int namelen) {
	printf("connect-ing from %d....\n", s);
	mutex_lock(&socket_operation);
	for (auto sock : sock_handles) {
		if (sock.second->server_client == 1 
			/*&& memcmp(&sock.second->binded, name, min(sizeof(sockaddr), namelen) == 0) */) {
			sock_handles[s]->server_client = 0;
			int blk = sock_handles[s]->blocking_mode;
			mutex_unlock(&socket_operation);
			pipe_push(sock.second->connections_p, &s, 1);
			printf("connect-ing from %d to %d (block=%d)....\n", s, sock.first, blk);
			//wait until it connects
			if (blk == 0) {
				while (true) {
					mutex_lock(&socket_operation);
					int matched = sock_handles[s]->matched;
					mutex_unlock(&socket_operation);
					if (matched != 0) {
						break;
					}
#ifndef _WIN32
					usleep(50);
#endif
				}
				
			}
			mutex_lock(&socket_operation);
			// you are not creating streams here as this connection is not yet ready as remote should accept it

			break;
		}
	}
	mutex_unlock(&socket_operation);
	printf("connect to %d was successfull.\n", s);
	XWSASetLastError(0);
	return 1;
}

SOCKET Xaccept(SOCKET s, struct sockaddr FAR* addr, int FAR* addrlen) {
	mutex_lock(&socket_operation);

	if (sock_handles.count(s) == 0)
	{
		printf("accept failed as sock_handles==0\n");
		mutex_unlock(&socket_operation);
		XWSASetLastError(WSAENOTSOCK);
		return INVALID_SOCKET;
	}

	if (sock_handles[s]->server_client != 1 || sock_handles[s]->state != 1) {
		printf("accept failed as it is not flaged as server or not in listen mode!\n");
		mutex_unlock(&socket_operation);
		XWSASetLastError(WSAEINVAL);
		return INVALID_SOCKET;
	}

	if (sock_handles[s]->blocking_mode != 0) {

		//this is non blocking
		auto snap = pipe_make_snapshot(sock_handles[s]->connections_pipe);
		if (pipe_size(snap) == 0)
		{
			printf("accept failed as it was non-blocking and no incoming connections!\n");
			mutex_unlock(&socket_operation);
			XWSASetLastError(WSAEWOULDBLOCK);
			return INVALID_SOCKET;
		}
	}
	
	mutex_unlock(&socket_operation);
	SOCKET incoming;
	printf("accept poping out a connection....\n");
	pipe_pop(sock_handles[s]->connections_c, &incoming, 1);
	
	mutex_lock(&socket_operation);
	if (addr != nullptr && addrlen != nullptr && *addrlen == sizeof(sockaddr))
		*addr = sock_handles[s]->binded;
	socket_struct incoming_struct = *sock_handles[incoming];

	mutex_unlock(&socket_operation);
	SOCKET fd = Xsocket(incoming_struct.af, incoming_struct.type, incoming_struct.protocol);

	mutex_lock(&socket_operation);
	sock_handles[fd]->server_client = 0;
	
	sock_handles[fd]->stream_pipe = pipe_new(sizeof(char), 0);
	sock_handles[fd]->stream_c = pipe_consumer_new(sock_handles[fd]->stream_pipe);
	sock_handles[fd]->stream_p = pipe_producer_new(sock_handles[fd]->stream_pipe);
	
	sock_handles[incoming]->stream_pipe = pipe_new(sizeof(char), 0);
	sock_handles[incoming]->stream_c = pipe_consumer_new(sock_handles[incoming]->stream_pipe);
	sock_handles[incoming]->stream_p = pipe_producer_new(sock_handles[incoming]->stream_pipe);

	sock_handles[fd]->matched = incoming;
	sock_handles[incoming]->matched = fd;

	printf("accept accepted an incoming connection %d\n",fd);

	mutex_unlock(&socket_operation);
	XWSASetLastError(0);
	return fd;
}


#ifdef _WIN32
//somehow in webassembly you should handle fcntl instead of ioctlsocket
int Xioctlsocket(SOCKET s, long cmd, u_long FAR* argp) {
	mutex_lock(&socket_operation);

	switch (cmd) {
	case FIONBIO:
		sock_handles[s]->blocking_mode = *argp;
		break;
	default:
		break;
	}

	mutex_unlock(&socket_operation);
	XWSASetLastError(0);
	return 0;
}
#else
#define F_DUPFD  0
#define F_GETFD  1
#define F_SETFD  2
#define F_GETFL  3
#define F_SETFL  4
//TODO: add fcntl
int Xfcntl(SOCKET s, long cmd, u_long arg) {
	int ret = 0;
	mutex_lock(&socket_operation);

	switch (cmd) {
	case F_SETFL:
		sock_handles[s]->blocking_mode = arg;
		break;
	case F_GETFL:
		ret = sock_handles[s]->blocking_mode;
		break;
	default:
		break;
	}

	mutex_unlock(&socket_operation);
	XWSASetLastError(0);
	return ret;
}
#endif

int  Xselect(int nfds, fd_set FAR* readfds, fd_set FAR* writefds, fd_set FAR* exceptfds, const struct timeval FAR* timeout) {
	
	mutex_lock(&socket_operation);

	fd_set new_readfds, new_writefds, new_exceptfds;
	FD_ZERO(&new_readfds);
	FD_ZERO(&new_writefds);
	FD_ZERO(&new_exceptfds);

	int c = 0;
	for (int i = 10; i <= last_socket - 1; i++) {
		if (readfds && FD_ISSET(i, readfds)) {
			if (sock_handles[i]->state == 1)//listen state
			{
				if (sock_handles[i]->connections_pipe) {
					auto snap = pipe_make_snapshot(sock_handles[i]->connections_pipe);
					if (pipe_size(snap) != 0)
					{
						//printf("select %d ready for read.\n", i);
						FD_SET(i, &new_readfds);
						c++;
					}
					else
						;// printf("select %d NOT ready for read. connections_pipe is empty!\n", i);
				}
				else
					printf("select %d NOT ready for read. connections_pipe == null\n", i);
			}
			else {
				if (sock_handles[i]->stream_pipe) {
					auto snap = pipe_make_snapshot(sock_handles[i]->stream_pipe);
					if (pipe_size(snap) != 0)
					{
						FD_SET(i, &new_readfds);
						c++;
					}
					else
						;// printf("select %d NOT ready for read. stream_pipe is empty!\n", i);
				}
				else
					printf("select %d NOT ready for read. stream_pipe == null\n", i);

			}
		}
		if (writefds && FD_ISSET(i, writefds)) {
			
			if (sock_handles[i]->matched && sock_handles[sock_handles[i]->matched]->stream_p)
			{
				//printf("select %d ready for write.\n",i);
				FD_SET(i, &new_writefds);
				c++;
			}
			else
				printf("select %d NOT ready for write.\n",i);
		}
		if (exceptfds && FD_ISSET(i, exceptfds)) {

		}
	}

	mutex_unlock(&socket_operation);
	if (c!=0 && readfds)
		*readfds = new_readfds;
	if (c != 0 && writefds)
		*writefds = new_writefds;
	if (c != 0 && exceptfds)
		*exceptfds = new_exceptfds;

	XWSASetLastError(0);
	return c;
}

/*
IPPROTO_HOPOPTS = 0,  // IPv6 Hop-by-Hop options
IPPROTO_ICMP = 1,
IPPROTO_IGMP = 2,
IPPROTO_GGP = 3,
IPPROTO_IPV4 = 4,
IPPROTO_ST = 5,
IPPROTO_TCP = 6,
IPPROTO_CBT = 7,
IPPROTO_EGP = 8,
IPPROTO_IGP = 9,
IPPROTO_PUP = 12,
IPPROTO_UDP = 17,
*/

SOCKET Xsocket(int af, int type, int protocol) {
	
	if (last_socket == 10) {
		mutex_init(&socket_operation);
	}
	mutex_lock(&socket_operation);

	socket_struct* sock = new socket_struct();
	sock->af = af;
	sock->type = type;
	sock->protocol = protocol;


	int fd = last_socket++;
	sock_handles[fd] = sock;
	
	mutex_unlock(&socket_operation);

	printf("socket %d created.\n",fd);
	XWSASetLastError(0);
	return (SOCKET)fd;
}


void XWSASetLastError(int iError) {
	LastError = iError;
	errno = iError;
}

int XWSAGetLastError(void) {
	return LastError;
}

#ifdef _WIN32
int  XWSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData) {
	return 0;
}
#endif


int Xrecv(SOCKET s, char FAR* buf, int len, int flags) {
	//printf("recieve in %d - len:%d ....\n", s, len);
	mutex_lock(&socket_operation);
	if (sock_handles.count(s) == 0)
	{
		mutex_unlock(&socket_operation);
		printf("recieve in %d - bad socket!\n", s);

		XWSASetLastError(WSAENOTSOCK);
		return SOCKET_ERROR;
	}

	if (sock_handles[s]->stream_c == nullptr || sock_handles[s]->stream_p == nullptr) {
		mutex_unlock(&socket_operation);
		printf("recieve in %d - streams are null!\n", s);

		XWSASetLastError(WSAENOTCONN);
		return SOCKET_ERROR;
	}

	if (sock_handles[s]->blocking_mode != 0) {

		if (!sock_handles[s]->stream_pipe) {
			mutex_unlock(&socket_operation);
			printf("recieve in %d - stream_pipe is null in non blocking!\n", s);

			XWSASetLastError(WSAEWOULDBLOCK);
			return INVALID_SOCKET;
		}
		//this is non blocking
		auto snap = pipe_make_snapshot(sock_handles[s]->stream_pipe);
		if (pipe_size(snap) == 0)
		{
			mutex_unlock(&socket_operation);
			//printf("recieve in %d - stream_pipe is empty in non blocking!\n", s);

			XWSASetLastError(WSAEWOULDBLOCK);
			return INVALID_SOCKET;
		}
	}

	mutex_unlock(&socket_operation);
	XWSASetLastError(0);
	int result =  pipe_pop_eager(sock_handles[s]->stream_c, buf, len);
#ifndef _WIN32
	usleep(50);
#endif
	//printf("recieve in %d - len:%d\n", s, result);
	return result;
}


int  Xsend(SOCKET s, const char FAR * buf, int len, int flags) {
	//printf("send from %d is called...\n", s);
	mutex_lock(&socket_operation);
	if (sock_handles.count(s) == 0)
	{
		mutex_unlock(&socket_operation);
		printf("send from %d failed as bad socket.\n", s);
		XWSASetLastError(WSAENOTSOCK);
		return SOCKET_ERROR;
	}

	if (sock_handles[s]->matched == 0 || sock_handles[sock_handles[s]->matched]->stream_c == nullptr || sock_handles[sock_handles[s]->matched]->stream_p == nullptr) {
		mutex_unlock(&socket_operation);
		printf("send from %d failed as matched=%d or steams are null.\n", s, sock_handles[s]->matched);
		XWSASetLastError(WSAENOTCONN);
		return SOCKET_ERROR;
	}

	mutex_unlock(&socket_operation);
	//printf("send from %d to %d- len:%d\n", s, sock_handles[s]->matched, len);
	pipe_push(sock_handles[sock_handles[s]->matched]->stream_p, buf, len);
#ifndef _WIN32
	usleep(50);
#endif
	XWSASetLastError(0);
	return len;
}

struct hostent FAR * Xgethostbyaddr(const char FAR * addr, int len, int type) {
	return nullptr;
}





