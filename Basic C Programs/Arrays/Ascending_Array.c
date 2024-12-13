/*******************************************************************************
C Program to initialize an array with random elements and make it as 
ascending order and print ascending order array
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10  // Define the size of the array

// Function to find the smallest element and its index in an array
void find_smallest_and_swap(int arr[], int size, int sorted[]) {
    for (int i = 0; i < size; i++) {
        int min = arr[0];
        int min_index = 0;

        for (int j = 1; j < size; j++) {
            if (arr[j] < min) {
                min = arr[j];
                min_index = j;
            }
        }

        // Add the smallest element to the sorted array
        sorted[i] = min;

        // Replace the smallest element with a large number to "remove" it from the array
        arr[min_index] = RAND_MAX;
    }
}

int main() {
    int arr[SIZE];
    int sorted[SIZE];

    // Seed the random number generator
    srand(time(NULL));

    // Initialize the array with random elements
    printf("Original array:\n");
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;  // Generate random numbers between 0 and 99
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Arrange the elements in ascending order without sorting algorithms
    find_smallest_and_swap(arr, SIZE, sorted);

    // Print the sorted array
    printf("\nArray in ascending order:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", sorted[i]);
    }

    return 0;
}
