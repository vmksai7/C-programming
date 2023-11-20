//C program to set a bit from a user given data
#include <stdio.h>

// Function to set the nth bit of x to 1
int setBit(int x, int n) {
    return x | (1 << n);
}

int main() {
    int num, bitPosition;

    // Input number and bit position
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position (0-based index): ");
    scanf("%d", &bitPosition);

    // Setting the bit
    int result = setBit(num, bitPosition);

    // Displaying the result
    printf("The number after setting the bit is: %d\n", result);

    return 0;
}
