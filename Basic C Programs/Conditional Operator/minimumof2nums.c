/*******************************************************************************
C program to find the minimum of two numbers
*******************************************************************************/
#include <stdio.h>

int main() {
    // Declare variables to store two numbers
    double num1, num2;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Find the minimum using the conditional operator
    double min = (num1 < num2) ? num1 : num2;

    // Display the result
    printf("The minimum of %.2lf and %.2lf is %.2lf\n", num1, num2, min);

    return 0;
}
