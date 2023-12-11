#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <hostname> <filename>\n", argv[0]);
        return 1;
    }

    char *hostname = argv[1];
    char *filename = argv[2];

    return 0;
}
