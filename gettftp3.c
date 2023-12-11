#include <stdio.h>
#include <netdb.h>
#include <sys/socket.h>

int main(int argc, char *argv[]) {
    // ... (Code des deux premières étapes)

    int sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    if (sockfd == -1) {
        perror("socket");
        return 1;
    }

    // Reste du code pour la troisième étape...

    return 0;
}
