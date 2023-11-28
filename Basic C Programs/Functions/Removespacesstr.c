#include <stdio.h>
#include <string.h>

void RemoveSpaces(char *str) {
    int i, j;
    for (i = 0, j = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string with spaces: ");
    gets(str);
    
    RemoveSpaces(str);
    
    printf("String after removing spaces: %s\n", str);
    
    return 0;
}
