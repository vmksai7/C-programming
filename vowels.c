/*******************************************************************************
C Program to check the user provided character is vowel or not using 
conditional operator
*******************************************************************************/
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leading whitespace

    // Using the conditional operator to check if the character is a vowel
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        ? printf("%c is a vowel.\n", ch)
        : printf("%c is not a vowel.\n");

    return 0;
}

/*******************************************************************************
C Program to check the user provided character is vowel or not using 
switch case
*******************************************************************************/
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leading whitespace

    // Using switch case to check if the character is a vowel
    switch (ch) {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u':
        case 'A': 
        case 'E': 
        case 'I': 
        case 'O': 
        case 'U': printf("%c is a vowel.\n", ch);
                  break;
        default:  printf("%c is not a vowel.\n", ch);
    }

    return 0;
}

Output:

Enter a character: e
e is a vowel.

Enter a character: w
w is not a vowel.
