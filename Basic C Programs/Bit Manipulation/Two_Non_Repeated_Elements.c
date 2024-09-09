/*******************************************************************************
C program to find the two non-repeated elements in an array where every other 
element repeats twice in bitwise
******************************************************************************/
#include <stdio.h>

void findNonRepeatedElements(int arr[], int n) {
    int xor_result = 0;
    int num1 = 0, num2 = 0;
    int set_bit;

    // Step 1: XOR all elements to get xor_result (which is num1 ^ num2)
    for (int i = 0; i < n; i++) {
        xor_result ^= arr[i];
    }

    // Step 2: Find rightmost set bit in xor_result
    set_bit = xor_result & -xor_result;

    // Step 3: Divide elements into two groups and XOR them separately
    for (int i = 0; i < n; i++) {
        if (arr[i] & set_bit) {
            num1 ^= arr[i];
        } else {
            num2 ^= arr[i];
        }
    }

    printf("The two non-repeated elements are: %d and %d\n", num1, num2);
}

int main() {
    int arr[] = {2, 4, 7, 9, 2, 4, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    findNonRepeatedElements(arr, n);

    return 0;
}
