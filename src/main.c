#include "mylib.h"
#include "stdio.h"
#include "unistd.h"

int loop() {
    char c;
    printf("Press 'q' to quit the infinite loop.\n");

     while(1) {
	c = getc(stdin);
	if (c == 'q') {
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
    hello();

    return 0;
}
