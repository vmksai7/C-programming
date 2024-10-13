#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // If the user enters a negative number, display an error message.
    if (number < 0) {
        printf("Error! Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}

