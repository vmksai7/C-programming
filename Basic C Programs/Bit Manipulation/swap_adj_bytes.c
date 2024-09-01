#include <stdio.h>

unsigned int swapAdjacentBytes(unsigned int num) {
    // Mask and shift bytes
    unsigned int swapped = ((num & 0x00FF00FF) << 8) | ((num & 0xFF00FF00) >> 8);
    return swapped;
}

int main() {
    unsigned int num = 0x12345678;  // Example hexadecimal number
    unsigned int swapped = swapAdjacentBytes(num);

    printf("Original number: 0x%08X\n", num);
    printf("Swapped number : 0x%08X\n", swapped);

    return 0;
}
