/*******************************************************************************
C program to find the smallest number in an array using pointers
*******************************************************************************/
#include <stdio.h>

int findSmallestElement(int *arr, int size) {
    // Initialize the pointer to the first element of the array
    int *ptr = arr;

    // Initialize the smallest element with the first element of the array
    int smallest = *ptr;

    // Iterate through the array using pointers
    for (int i = 1; i < size; ++i) {
        // Move the pointer to the next element
        ++ptr;

        // Check if the current element is smaller than the smallest
        if (*ptr < smallest) {
            smallest = *ptr;
        }
    }

    return smallest;
}

int main() {
    int arr[15] = {1, 4, 2, 7, 3, 9, 5, 3, 45, 66, 32, 22, 34, 55, 32};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find the smallest element using the function
    int smallestElement = findSmallestElement(arr, size);

    // Print the result
    printf("The smallest element in the array is: %d\n", smallestElement);

    return 0;
}
