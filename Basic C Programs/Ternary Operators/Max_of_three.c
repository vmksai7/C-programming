/*******************************************************************************
C Program to print the maximum of three numbers using ternary operator
******************************************************************************/
Method 1:

#include<stdio.h>

int main()
{
    int a=210, b=100, c=214;
    
    int max = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    
    printf("Max of three numbers is %d\n",max);
}

Methos 2:

#include<stdio.h>

int main()
{
    int a=210, b=100, c=24;
    
    int max = (((a > b) ? a : b) > c) ? ((a > b) ? a : b) : c;
    
    printf("Max of three numbers is %d\n",max);
}
