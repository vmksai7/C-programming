/*******************************************************************************
C program to check if two numbers have opposite signs using bitwise operations.
*******************************************************************************/
#include <stdio.h>

// Function to check if two numbers have opposite signs
int haveOppositeSigns(int x, int y) {
    // XOR the numbers and check the sign bit
    return (x ^ y) < 0;
}

int main() {
    int num1 = -5;
    int num2 = 10;

    if (haveOppositeSigns(num1, num2)) {
        printf("The numbers %d and %d have opposite signs.\n", num1, num2);
    } else {
        printf("The numbers %d and %d have the same sign.\n", num1, num2);
    }

    return 0;
}
