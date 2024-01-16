/*******************************************************************************
C Program to clear the Nth bit of the given number by given number of positions
*******************************************************************************/
#include <stdio.h>

// Function to clear the Nth bit of a given number
int clearNthBit(int num, int n) {
    // Left-shift 1 by n positions to create a mask with the Nth bit clear
    int mask = (1 << n);

    // Use bitwise OR to clear the Nth bit
    num = num & ~mask;

    return num;
}

int main() {
    // Example usage
    int number, position;

    // Input: Number and position of the bit to be clear
    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the position (0-based) of the bit to clear: ");
    scanf("%d", &position);

    // Set the Nth bit and display the result
    int result = clearNthBit(number, position);

    printf("Number after setting the %dth bit: %d\n", position, result);

    return 0;
}
