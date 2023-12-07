//C program to take three numbers from user and displays the maximum of three numbers using if else

#include <stdio.h>

int main() {
    // Declare variables to store three numbers
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use if-else statements to find the maximum
    if (num1 >= num2 && num1 >= num3) {
        printf("The maximum number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The maximum number is: %d\n", num2);
    } else {
        printf("The maximum number is: %d\n", num3);
    }

    return 0;
}
