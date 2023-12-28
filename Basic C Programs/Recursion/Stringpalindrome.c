#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome recursively
int isPalindrome(char str[], int start, int end) {
    // Base case: If the string has 0 or 1 characters, it's a palindrome
    if (start >= end) {
        return 1;
    }

    // Check if the characters at the current positions are equal
    if (str[start] != str[end]) {
        return 0;  // Not a palindrome
    }

    // Recursively check the remaining substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char input[100];

    // Input a string
    printf("Enter a string: ");
    scanf("%s", input);

    // Check if the entered string is a palindrome
    if (isPalindrome(input, 0, strlen(input) - 1)) {
        printf("%s is a palindrome.\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
