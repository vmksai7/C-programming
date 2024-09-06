/*******************************************************************************
C program to compute the absolute value of an integer using bitwise operators.
*******************************************************************************/
#include <stdio.h>

int absoluteValue(int n) {
    int mask = n >> (sizeof(int) * 8 - 1);  
    // Create a mask of all 1s if n is negative, all 0s if n is positive
  
    return (n + mask) ^ mask;               
    // Add the mask to n and XOR with the mask to compute the absolute value
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int absValue = absoluteValue(number);
    printf("Absolute value: %d\n", absValue);

    return 0;
}
