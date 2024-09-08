/*******************************************************************************
C program to find the only non-repeated element in an array where every other 
element repeats twice in bitwise
*******************************************************************************/
#include <stdio.h>

int findNonRepeatedElement(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];  // XOR all elements
    }
    return result;  // The unique element
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    int uniqueElement = findNonRepeatedElement(arr, size);
    printf("The non-repeated element is %d\n", uniqueElement);

    return 0;
}
