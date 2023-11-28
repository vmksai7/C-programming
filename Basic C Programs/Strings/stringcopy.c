//C program to copy one string to another string without using strcpy

#include <stdio.h>

int main() {
    // Example usage
    char source[] = "Hello, World!";
    char destination[50]; // Make sure the destination array is large enough

    int i = 0;

    // Copy characters until the null character is encountered
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    // Add null character to the end of the destination string
    destination[i] = '\0';

    // Display the copied string
    printf("Original String: %s\n", source);
    printf("Copied String  : %s\n", destination);

    return 0;
}

