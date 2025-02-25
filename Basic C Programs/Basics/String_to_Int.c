/*******************************************************************************
C Program to convert string to integer without using standard library
******************************************************************************/
#include <stdio.h>

int stringToInt(const char *str) {
    int result = 0;
    int i = 0;

    // Check for optional negative sign
    int isNegative = 0;
    if (str[0] == '-') {
        isNegative = 1;
        i++;
    }

    // Iterate through each character of the string
    for (; str[i] != '\0'; i++) {
        // Ensure the character is a digit
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            // Handle invalid input (non-numeric characters)
            printf("Invalid input: %s\n", str);
            return 0;
        }
    }

    // Apply the negative sign if applicable
    if (isNegative) {
        result = -result;
    }

    return result;
}

int main() {
    char str[] = "123";
    int number = stringToInt(str);
    printf("The converted number is: %d\n", number);

    char strNegative[] = "-456";
    int negativeNumber = stringToInt(strNegative);
    printf("The converted negative number is: %d\n", negativeNumber);

    char strInvalid[] = "12a3";
    int invalidNumber = stringToInt(strInvalid);
    printf("The result for invalid input is: %d\n", invalidNumber);

    return 0;
}