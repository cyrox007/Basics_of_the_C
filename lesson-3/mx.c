#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int main() {
    int i, r;
    unsigned int seed = 300;
 
    srand(seed);
 
    while (1) {
        r = 33 + rand() % 93;
        putchar(r);
        if (i % 79 == 0) {
            printf("\n");
            usleep(100000);
        }
    }
 
    return 0;
}