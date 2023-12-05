//C program to convert upper to lower case and lower to upper case using bitwise xor operator

#include<stdio.h>

int main()
{
    char upper;
    printf("Enter the character\n");
    scanf("%c",&upper);
    char lower=upper^32;
    printf("%c",lower);
}


#include<stdio.h>

int main()
{
    char lower;
    printf("Enter the character\n");
    scanf("%c",&lower);
    char upper=lower^32;
    printf("%c",upper);
}
