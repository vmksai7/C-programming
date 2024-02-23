/*******************************************************************************
C program to check if given number is power of 8 or not
*******************************************************************************/
#include<stdio.h>

int power(int num)
{
    if(num==0)
        return 0;
    while(num!=1)
    {
        if(num%8!=0)
            return 0;
        num=num/8;
    }
    return 1;
}

int main()
{
    int num,temp;
    printf("Enter the number to check if it power of 8\n");
    scanf("%d",&num);
    if(power(num))
        printf("%d is power of 8\n",num);
    else
        printf("%d is not power of 8\n",num);
}
