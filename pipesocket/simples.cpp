#ifdef _WIN32
	#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
	#define INCL_WINSOCK_API_PROTOTYPES 0
	#include <winsock2.h>
#endif

#include <stdio.h>      
#include <stdlib.h>
#include <cstdint>
#ifndef _WIN32
#include <ctype.h>
#endif
#include "pipesocket.h"

static __inline uint16_t __bswap_16(uint16_t __x)
{
	return __x << 8 | __x >> 8;
}
static __inline uint32_t __bswap_32(uint32_t __x)
{
	return __x >> 24 | __x >> 8 & 0xff00 | __x << 8 & 0xff0000 | __x << 24;
}

static __inline uint64_t __bswap_64(uint64_t __x)
{
	return __bswap_32(__x) + 0ULL << 32 | __bswap_32(__x >> 32);
}

#define bswap_16(x) __bswap_16(x)
#define bswap_32(x) __bswap_32(x)
#define bswap_64(x) __bswap_64(x)

u_short Xntohs(u_short netshort) {
	union { int i; char c; } u = { 1 };
	return u.c ? bswap_16(netshort) : netshort;
}


int __inet_aton(const char* s0, struct in_addr* dest)
{
	const char* s = s0;
	unsigned char* d = (unsigned char*)dest;
	unsigned long a[4] = { 0 };
	char* z;
	int i;

	for (i = 0; i < 4; i++) {
		a[i] = strtoul(s, &z, 0);
		if (z == s || (*z && *z != '.') || !isdigit(*s))
			return 0;
		if (!*z) break;
		s = z + 1;
	}
	if (i == 4) return 0;
	switch (i) {
	case 0:
		a[1] = a[0] & 0xffffff;
		a[0] >>= 24;
	case 1:
		a[2] = a[1] & 0xffff;
		a[1] >>= 16;
	case 2:
		a[3] = a[2] & 0xff;
		a[2] >>= 8;
	}
	for (i = 0; i < 4; i++) {
		if (a[i] > 255) return 0;
		d[i] = a[i];
	}
	return 1;
}

unsigned long Xinet_addr(const char FAR* cp) {
	struct in_addr a;
	if (!__inet_aton(cp, &a)) return -1;
	return a.s_addr;
}

u_long Xhtonl(u_long hostlong) {
	union { int i; char c; } u = { 1 };
	return u.c ? bswap_32(hostlong) : hostlong;
}
u_short Xhtons(u_short hostshort) {
	union { int i; char c; } u = { 1 };
	return u.c ? bswap_16(hostshort) : hostshort;
}

char FAR* Xinet_ntoa(struct in_addr in) {
	static char buf[16];
	unsigned char* a = (unsigned char*)&in;
	snprintf(buf, sizeof buf, "%d.%d.%d.%d", a[0], a[1], a[2], a[3]);
	return buf;
}