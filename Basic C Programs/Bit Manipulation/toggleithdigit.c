/*******************************************************************************
C program to toggle ith digit of a given number
*******************************************************************************/
#include<stdio.h>

int Toggle(int num,int bit)
{
    int temp=1<<(bit-1);
    return (num^temp);
}

int main()
{
    int num,bit,res;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the bit position that need to toggle\n");
    scanf("%d",&bit);
    res=Toggle(num,bit);
    printf("%d\n",res);
}
