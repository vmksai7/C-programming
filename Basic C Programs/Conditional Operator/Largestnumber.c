/*******************************************************************************
Implement a c program that takes three numbers as input and uses nested 
conditional operators to find and print the largest number.
*******************************************************************************/

#include <stdio.h>

int main() {
    // Input three numbers
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Nested conditional operators to find the largest number
    int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Display the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
