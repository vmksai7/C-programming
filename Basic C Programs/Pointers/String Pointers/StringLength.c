/*******************************************************************************
C program to find the length of the string using pointers
*******************************************************************************/

#include <stdio.h>

// Function to find the length of a string using a pointer
int stringLength(const char *str) {
    const char *ptr = str; // Initialize a pointer to the beginning of the string

    // Iterate through the string until the null character '\0' is encountered
    while (*ptr != '\0') {
        ptr++; // Move the pointer to the next character
    }

    // Calculate the length by subtracting the initial address of the string
    // from the address of the null character
    return ptr - str;
}

int main() {
    // Example usage
    const char *myString = "Manikanta";
    int length = stringLength(myString);

    // Display the result
    printf("Length of the string: %d\n", length);

    return 0;
}
