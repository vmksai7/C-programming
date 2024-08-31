#include <stdio.h>

int compare(int a, int b) {
    // XOR operation: If a == b, result will be 0
    return !(a ^ b);
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (compare(num1, num2)) {
        printf("The numbers are equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }

    return 0;
}
