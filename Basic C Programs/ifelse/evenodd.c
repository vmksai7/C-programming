//C program to find entered number is even or odd using if else

#include <stdio.h>

int main() {
    // Declare a variable to store the user's input
    int number;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    
    // Read the input from the user
    scanf("%d", &number);

    // Check if the number is even or odd using the modulo operator
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
