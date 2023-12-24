/****************************************************************************
Guess Number game:
Implement a program that generates a random number and asks the user to guess
it. Provide hints such as "too high" or "too low" after each guess.
*****************************************************************************/

#include<stdio.h>
#include<Stdlib.h>

int main()
{
    int randinput,userinput,attempt=1;

    // Seed for generating random numbers
    srand(time(NULL));

    // Generate a random number between 1 and 500
    int randomNumber = rand() % 500 + 1;
    randinput=randomNumber;

    while(1)
    {
        printf("Guess the number from 1 to 500\n");

        // Get user input
        scanf("%d",&userinput);

        // Check if the guess is correct, too high, or too low
        if(userinput==randinput)
        {
            printf("Congratulation!!! %d is correct answer\n",randinput);
            printf("You guessed the answer in %d attempt\n",attempt);
            return 0;
        }
        else if(userinput>randinput)
        {
            printf("Too High! Try again\n");
            // Increment the attempts count
            attempt++;
        }
        else
        {
            printf("Too Low! Try again\n");
            // Increment the attempts count
            attempt++;
        }
    }
}
