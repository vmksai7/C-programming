/*******************************************************************************
C program to copy one string to another string using functions 
*******************************************************************************/
#include <stdio.h>

void copyString(char source[], char destination[]) {
    int i = 0;

    // Copy characters until the null character is encountered
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    // Add null character to the end of the destination string
    destination[i] = '\0';
}

int main() {
    // Example usage
    char source[] = "Hello, World!";
    char destination[50]; // Make sure the destination array is large enough

    // Call the function to copy the string
    copyString(source, destination);

    // Display the copied string
    printf("Original String: %s\n", source);
    printf("Copied String  : %s\n", destination);

    return 0;
}
