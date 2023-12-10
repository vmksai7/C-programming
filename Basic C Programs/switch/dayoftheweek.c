// C program that takes an integer input representing a day of the week (1 for Monday, 2 for Tuesday, etc.) 
// and prints the corresponding day using a switch statement.

#include <stdio.h>

int main() {
    int day;

    // Prompt user for input
    printf("Enter a number representing a day of the week (1-7): ");
    scanf("%d", &day);

    // Use switch statement to determine the day
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day. Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}
