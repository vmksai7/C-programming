/*******************************************************************************
C program to find given year is leap year or not using conditional operator
*******************************************************************************/
#include <stdio.h>

int main() {
    int year;

    // Input: Asking the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking if the entered year is a leap year using the ternary operator
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("%d is "
      "a leap year.\n", year) : printf("%d is not a leap year.\n", year);

    return 0;
}