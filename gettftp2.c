#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char *argv[]) {

struct addrinfo hints, *res, *p;
int status;

  memset(&hints, 0, sizeof hints);
  hints.ai_family = AF_UNSPEC; // IPv4 ou IPv6
  hints.ai_socktype = SOCK_STREAM; // Une seule famille de socket

  if ((status = getaddrinfo(argv[1], NULL, &hints, &res)) != 0) {
    fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(status));
    return 2;
  }

    return 0;
}
