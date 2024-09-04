#include <stdio.h>

int findRightmostSetBitPosition(unsigned int num) {
    // If the number is 0, there are no set bits
    if (num == 0) {
        return -1; // Indicating no set bits
    }

    int position = 1; // Position starts at 1 (1-based indexing)

    // Loop until we find the rightmost set bit
    while ((num & 1) == 0) {
        num >>= 1;  // Right shift the number
        position++; // Increment the position
    }

    return position;
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    int position = findRightmostSetBitPosition(num);

    if (position == -1) {
        printf("The number has no set bits.\n");
    } else {
        printf("The position of the rightmost set bit is: %d\n", position);
    }

    return 0;
}
