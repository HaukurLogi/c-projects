#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Starting random number generator
    srand((unsigned) time(NULL));

    // Displays random float
    printf("%f\n", ((float)rand() / (float)(RAND_MAX)));
}