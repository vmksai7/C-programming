/*******************************************************************************
C program to check entered charcter is Lower case / Upper case / Number / 
Special Character
*******************************************************************************/
#include<stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
        printf("Lower case\n");
    else if(ch>=65 && ch<=90)
        printf("Upper case\n");
    else if(ch>=48 && ch<=57)
        printf("Number\n");
    else
        printf("Special character\n");
}
