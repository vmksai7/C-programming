/*******************************************************************************
C program to write a function that accepts a function pointer as a parameter. 
Using this to pass a function that multiplies two integers.
*******************************************************************************/
#include <stdio.h>

// Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Function that accepts a function pointer as a parameter
// The function pointer takes two integers and returns an integer
void operate(int x, int y, int (*func_ptr)(int, int)) {
    int result = func_ptr(x, y);  // Call the function using the pointer
    printf("The result is: %d\n", result);
}

int main() {
    // Declare a function pointer and assign it to the multiply function
    int (*f_ptr)(int, int) = &multiply;

    // Call the operate function, passing two integers and the function pointer
    operate(5, 6, f_ptr);  // 5 * 6 = 30

    return 0;
}