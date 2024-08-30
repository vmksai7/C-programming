#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Get the size of int in bits
    int bit_size = sizeof(int) * 8;

    // Shift the number's bits to the right by (bit_size - 1)
    // This will bring the sign bit to the least significant position
    int sign_bit = (num >> (bit_size - 1)) & 1;

    if (sign_bit == 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
