#include <stdio.h>

int main() {
    char ch;
    int inp;

    // Use a do-while loop for better control flow
    do {
        printf("Enter a character:\n");
        scanf(" %c", &ch); // Add a space before %c to consume any whitespace characters

        if ((ch >= 'a') && (ch <= 'z'))
            printf("Lower case\n");
        else if ((ch >= 'A') && (ch <= 'Z'))
            printf("Upper case\n");
        else if ((ch >= '0') && (ch <= '9'))
            printf("Digit\n");
        else
            printf("Special character\n");

        printf("\nEnter 1 to input again\nEnter 0 to exit\n");
        scanf("%d", &inp);

    } while (inp == 1);

    return 0;
}
