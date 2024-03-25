/*******************************************************************************
C program to find the string length using pointers
*******************************************************************************/
#include<stdio.h>
int length(const char *str)
{
    const char *ptr = str;
    while(*ptr!='\0')
    {
        ptr++;
    }
    return ptr-str;
}
int main()
{
    const char *str = "Manikanta Sai";
    int len = length(str);
    printf("Length of string is %d\n",len);
}
