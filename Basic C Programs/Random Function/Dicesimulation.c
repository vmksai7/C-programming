/***********************************************************************************
Dice Simulation:
Simulate the rolling of a six-sided die using the rand() function. Print the result.
************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Seed for generating different random numbers each time
    srand(time(NULL));

    //Random number generation between 1 and 6
    int random = rand() % 7;

    //Prints the random number like a rolling of a six-sided die
    printf("%d\n",random);
}
