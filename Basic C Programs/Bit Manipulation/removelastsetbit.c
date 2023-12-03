//C program to remove the last set bit of a given number

#include<stdio.h>
int main()
{
    int num,res;
    printf("Enter the number\n");
    scanf("%d",&num);
    res = num & (num-1);
        printf("Result is: %d\n", res);
}
