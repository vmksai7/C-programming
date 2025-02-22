/*******************************************************************************
C program to check if given number is even or odd usinf conditional operator
*******************************************************************************/
#include <stdio.h>

int main() {
    int number;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Determine even or odd using the conditional operator
    (number % 2 == 0) ? printf("%d is even.\n", number) : printf("%d is odd.\n", number);

    return 0;
}