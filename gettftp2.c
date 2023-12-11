#include <stdio.h>
#include <netdb.h>
#include <string.h>

int main(int argc, char *argv[]) {

struct addrinfo hints, *res, *p;
int status;

  memset(&hints, 0, sizeof hints);
  hints.ai_family = AF_UNSPEC; // IPv4 ou IPv6
  hints.ai_socktype = SOCK_STREAM; // Une seule famille de socket

  if ((status = getaddrinfo(argv[1], NULL, &hints, &res)) != 0) {
    fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(status)5);
    return 2;
  }

    return 0;
}
