#include <stdio.h>

unsigned int swapNibbles(unsigned int num) {
    // Mask to extract the first and last nibbles
    unsigned int firstNibble = (num & 0xF0000000) >> 28;
    unsigned int lastNibble = (num & 0x0000000F);
    
    // Clear the first and last nibbles in the original number
    num &= 0x0FFFFFF0;
    
    // Swap the first and last nibbles
    num |= (lastNibble << 28);
    num |= firstNibble;
    
    return num;
}

int main() {
    unsigned int num = 0x12345678;  // Example number
    printf("Original number: 0x%X\n", num);
    
    num = swapNibbles(num);
    printf("Number after swapping nibbles: 0x%X\n", num);
    
    return 0;
}
