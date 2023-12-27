//C program to convert tempertatur into centrigrade or fahrenheit.

#include <stdio.h>

int main() {
    int choice;
    float temperature, convertedTemperature;

    // Display menu
    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Take temperature input
    printf("Enter the temperature value: ");
    scanf("%f", &temperature);

    // Perform temperature conversion based on user choice
    switch (choice) {
        case 1:
            // Celsius to Fahrenheit conversion
            convertedTemperature = (temperature * 9 / 5) + 32;
            printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, convertedTemperature);
            break;
        case 2:
            // Fahrenheit to Celsius conversion
            convertedTemperature = (temperature - 32) * 5 / 9;
            printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, convertedTemperature);
            break;
        default:
            // Invalid choice
            printf("Invalid choice. Please enter 1 or 2.\n");
            return 1; // Exit the program with an error code
    }

    return 0; // Exit the program successfully
}
