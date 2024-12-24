#include <stdio.h>

// Function to delete specified number of bits from a given position
unsigned int deleteBits(unsigned int num, int position, int count) {
    // Step 1: Create a mask with 'count' bits set to 1 starting from 'position'
    unsigned int mask = ((1 << count) - 1) << position;

    // Step 2: Invert the mask to have 0s in the position of bits to delete
    mask = ~mask;

    // Step 3: Clear the bits at the specified position by performing AND with the inverted mask
    num = num & mask;

    return num;
}

int main() {
    unsigned int num = 0xFFFF; // Example number (0b1111111111111111)
    int position = 4;          // Starting position to delete bits
    int count = 4;             // Number of bits to delete

    // Before deletion
    printf("Original number: 0x%X\n", num);

    // After deletion
    num = deleteBits(num, position, count);
    printf("Modified number after deleting %d bits from position %d: 0x%X\n", count, position, num);

    return 0;
}
