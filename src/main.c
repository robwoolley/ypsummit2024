#include "mylib.h"
#include "stdio.h"
#include <fcntl.h>
#include <termios.h>
#include "unistd.h"

int loop() {
    int fd, bytes;
    char c[8];

    printf("Press ENTER to continue.\n");

    fcntl(STDIN_FILENO, F_SETFL, fcntl(STDIN_FILENO, F_GETFL) | O_NONBLOCK);
    while(1) {
        bytes = read(STDIN_FILENO, &c, sizeof(c));
        if (bytes > 0) {
            break;
        }

        hello();
        sleep(1);
    }

    int n = 3; // Number of disks
    hanoi(n, 'A', 'C', 'B');

    return 0;
}

int main() {
    loop();

    return 0;
}
