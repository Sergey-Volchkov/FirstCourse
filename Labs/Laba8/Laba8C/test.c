#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    int x[10];
    int i;
    for (i = 0; i < 10; ++i) {
        x[i] = rand() % 10 + 1;
        printf("%i\n", x[i]);
    }
    return 0;
}