#include <stdbool.h>
#include <stdio.h>
int main()
{
    int integer;
    printf("Enter a number between 1 and 3 --> ");
    scanf("%i", &integer);

    if(integer < 1) {
        printf("You suck! \n");
    }
    if(integer > 3) {
        printf("You suck! \n");
        return 0;
    }
    else {
        printf("Great job! \n");
    }
}