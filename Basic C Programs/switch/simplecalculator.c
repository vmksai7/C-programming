//C program for a simple calculator to do addition, subtraction, division and modulo using 2 numbers

#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any whitespace characters

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Calculator logic using switch statement
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is undefined.\n");
                return 1;  // Exit the program with an error code
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            return 1;  // Exit the program with an error code
    }

    // Output
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;  // Exit the program successfully
}
