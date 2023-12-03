//C program to find given number is even or odd using bitwise and operator

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num & 1)
        printf("Number is odd\n");
    else
        printf("Number is even\n");
}
