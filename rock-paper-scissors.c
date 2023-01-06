#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() 
{    
    int player, ai; 
    time_t t;

    srand((unsigned) time((&t)));

// 0 == Rock
// 1 == Paper
// 2 == Scissors

    printf("0, 1 or 2? : ");
    scanf("%i", &player);

    ai = rand() %3;

    if(player == 0) {
        if(ai == 2) {
            printf("You won! Congratulations!");
            return 0;
        }
        if(ai == 1) {
            printf("You lost! LMFAO!");
            return 0;
        }            
    } 

    if(player == 1) {
        if(ai == 0) {
            printf("You won! Congratulations!");
            return 0;
        }
        if(ai == 2) {
            printf("You lost! LMFAO");
            return 0;
        }
    }

    if(player == 2) {
        if(ai == 1) {
            printf("You won! Congratulations!");
            return 0;
        }
        if(ai == 0) {
            printf("You lost! LMFAO!");
            return 0;
        }
    }

    if(player == ai) {
        printf("It's a draw, everybody wins!");
        return 0;
    }

    return 0;
}