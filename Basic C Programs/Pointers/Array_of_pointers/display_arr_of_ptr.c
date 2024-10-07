/*******************************************************************************
C program to create an array of n integer pointers and use it to store the 
address of n integer variables. Display the values of the integers 
using pointers.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    
    // Get the number of integers from the user
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Create an array of integer pointers
    int *arr[n];

    // Allocate memory and input values for each integer
    for(i = 0; i < n; i++) {
        // Allocate memory for each integer
        arr[i] = (int *)malloc(sizeof(int));
        
        if(arr[i] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        // Input the value for each integer
        printf("Enter value for integer %d: ", i + 1);
        scanf("%d", arr[i]);
    }

    // Display the values using the pointers
    printf("\nThe values you entered are:\n");
    for(i = 0; i < n; i++) {
        printf("Value at arr[%d]: %d\n", i, *arr[i]);
    }

    // Free allocated memory
    for(i = 0; i < n; i++) {
        free(arr[i]);
    }

    return 0;
}
