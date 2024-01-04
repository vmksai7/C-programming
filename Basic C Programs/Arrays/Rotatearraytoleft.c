//C program to enter array size and input elements and shifts left for n no. of bits as per the user

#include <stdio.h>

void leftRotateByOne(int arr[], int size) {
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

void leftRotate(int arr[], int size, int positions) {
    for (int i = 0; i < positions; i++) {
        leftRotateByOne(arr, size);
    }
}

int main() {
    int size, positions;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Get the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the number of positions to rotate
    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &positions);

    // Rotate the array to the left by the specified number of positions
    leftRotate(arr, size, positions);

    // Print the rotated array
    printf("Array after left rotation by %d positions:\n", positions);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
