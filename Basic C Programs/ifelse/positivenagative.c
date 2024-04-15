/**********************************************************************
C program to check given number is positive or negaative or zero
**********************************************************************/
#include <stdio.h>

int main() {
    // Declare a variable to store the user input
    int number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The entered number is positive.\n");
    } else if (number < 0) {
        printf("The entered number is negative.\n");
    } else {
        printf("The entered number is zero.\n");
    }

    return 0;
}
