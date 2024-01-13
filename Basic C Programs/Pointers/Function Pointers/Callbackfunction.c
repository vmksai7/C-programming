/*******************************************************************************
C program to display sum and sub of given two integers using callback function
*******************************************************************************/

#include<stdio.h>

int sum(int a, int b)
{
    printf("Sum = %d\n",a+b);
}

int sub(int a, int b)
{
    printf("Sub = %d\n",a-b);
}

int display(int(*ptr)(int,int))
{
    ptr(5,6);
}

int main()
{
    display(sum);
}
