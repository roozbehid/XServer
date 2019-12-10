
#include <assert.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>

typedef enum {
	MSG_READ,
	MSG_WRITE
} msg_state_t;

typedef struct {
	int fd;
} server_t;

typedef struct {
	int fd;
	struct sockaddr_in addr;
	msg_state_t state;
	int read;
	int wrote;
} client_t;

server_t server;
client_t client;

int main() {
	printf("hellooo2!\n");

	int res;


	int fd = socket(PF_INET, SOCK_STREAM, 0);
	if (fd < 0) {
		printf("socket create failed!\n");
		return 1;
	}

	fcntl(fd, F_SETFL, O_NONBLOCK);

	struct sockaddr_in sock_addr, client;
	memset(&sock_addr, 0, sizeof(sock_addr));
	sock_addr.sin_family = AF_INET;
	sock_addr.sin_port = htons(16931);
	if (inet_pton(AF_INET, "127.0.0.1", &sock_addr.sin_addr) != 1) {
		perror("inet_pton failed");
		exit(EXIT_FAILURE);
	}

	if (bind(fd, (struct sockaddr*) & sock_addr,sizeof(sock_addr)) < 0) {
		printf("Couldn't bind to local port\n");
		return 1;
	}

	if (listen(fd, 5) == -1) {
		printf("Couldn't listen to local port\n");
		//return 1;
	}

	int c = sizeof(struct sockaddr_in);
	int client_sock;
	client_sock = accept(fd, (struct sockaddr*) &client, (socklen_t*)&c);
	if (client_sock < 0)
	{
		printf("accept fails\n");
		return 1;
	}

	printf("bye!\n");
}
