/*******************************************************************************
C Program to print the prime numbers fro 1 to 100
******************************************************************************/
#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    // Loop through numbers from 2 to 100
    for (i = 2; i <= 100; i++) {
        isPrime = 1; // Assume i is prime

        // Check for factors from 2 to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Set isPrime to 0 if a factor is found
                break; // Exit the loop since i is not prime
            }
        }

        // If isPrime is still 1, then i is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
