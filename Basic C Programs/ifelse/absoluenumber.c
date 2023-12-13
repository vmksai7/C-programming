//C program to print the absolue number from a given number

#include <stdio.h>

int main() {
    double number;

    // Input a number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate the absolute value
    if (number < 0) {
        number = -number;
    }

    // Display the absolute value
    printf("The absolute value is: %.2f\n", number);

    return 0;
}
