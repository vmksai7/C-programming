//C program for a basic traffic light system where the user inputs a color, and the program prints the action associated with that color 
//(e.g., "Stop" for red, "Go" for green) using a switch-case.

#include <stdio.h>

int main() {
    char color;

    // Prompt user for input
    printf("Enter the color of the traffic light (R, Y, or G): ");
    scanf(" %c", &color);

    // Switch-case to determine the action based on the color
    switch (color) {
        case 'R':
        case 'r':
            printf("Action: Stop! The light is red.\n");
            break;
        case 'Y':
        case 'y':
            printf("Action: Slow down! The light is yellow.\n");
            break;
        case 'G':
        case 'g':
            printf("Action: Go! The light is green.\n");
            break;
        default:
            printf("Invalid input. Please enter R, Y, or G.\n");
    }

    return 0;
}
