/*******************************************************************************
C Program to reverse a complete string using recursion
******************************************************************************/
#include<stdio.h>
#include<string.h>

static char str[] = "Welcome to the World";

void reverse(int pos)
{
    if(pos<strlen(str)/2)
    {
        char temp;
        
        temp = str[pos];
        str[pos] = str[strlen(str)-pos-1];
        str[strlen(str)-pos-1] = temp;
        
        reverse(pos+1);
    }
}

int main()
{
    printf("Orioginal string: %s\n",str);
    reverse(0);
    
    printf("Reversed string: %s\n",str);
}
