/***********************************************************************************
Coin Flip:
C program to simulate a coin flip using the rand() function.
Display "Heads" or "Tails" based on the outcome.
************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Seed for generating different random numbers each time
    srand(time(NULL));

    //Random number generation between 1 and 100
    int random = rand() % 100;

    if(random % 2 == 0)
        //If random generate even number prints the Heads
        printf("Heads\n");
    else
        //If random generates odd number prints the Tails
        printf("Tails\n");
}
