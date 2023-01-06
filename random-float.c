#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned) time(NULL));

    printf("%f\n", ((float)rand() / (float)(RAND_MAX)));
}