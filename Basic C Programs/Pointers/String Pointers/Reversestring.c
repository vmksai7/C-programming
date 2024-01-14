/*******************************************************************************
C program to reverse the string using pointers
*******************************************************************************/

#include <stdio.h>

void reverseString(char *str) {
    // Find the length of the string
    int length = 0;
    char *temp = str;
    while (*temp != '\0') {
        length++;
        temp++;
    }

    // Use two pointers to reverse the string
    char *start = str;
    char *end = str + length - 1;

    while (start < end) {
        // Swap characters at start and end pointers
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers towards each other
        start++;
        end--;
    }
}

int main() {
    // Input string
    char str[100];

    // Prompt user for input
    printf("Enter a string: ");

    // Read input without using fgets
    scanf("%s", str);

    // Reverse the string
    reverseString(str);

    // Display the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
