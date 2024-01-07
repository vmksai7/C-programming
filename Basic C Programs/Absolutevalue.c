/*******************************************************************************
C Program to find the Asbolute value of an entered number
*******************************************************************************/

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d",&num);

    if(num<0)
        num=-num;

    printf("Absolute value of an entered number is %d\n",num);
}
