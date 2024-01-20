/*******************************************************************************
C Program to copy the string into another string using pointers
*******************************************************************************/
#include<stdio.h>

void Stringcopy(char *dest, const char *src)
{
    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}

int main()
{
    char src[]="Manikanta";
    char dest[20];

    Stringcopy(dest,src);

    printf("Original string: %s\n",src);
    printf("Copied String: %s\n",dest);
}
