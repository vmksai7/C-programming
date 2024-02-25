/*******************************************************************************
C program to set the ith bit position of a given number
*******************************************************************************/
#include<stdio.h>
int main()
{
    int num,bit,mask,res;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the position bit is  to be set\n");
    scanf("%d",&bit);
    mask=1<<(bit-1);
    res = num | mask;
        printf("Result is: %d\n", res);
}
