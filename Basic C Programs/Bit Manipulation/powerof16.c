//C program to check given number is power of 16 or not

#include<stdio.h>

int power(int num)
{
    if(num==0)
        return 0;
    while(num!=1)
    {
        if(num%16!=0)
            return 0;
        num=num/16;
    }
    return 1;
}

int main()
{
    int num,temp;
    printf("Enter the number to check if it power of 16\n");
    scanf("%d",&num);
    if(power(num))
        printf("%d is power of 16\n",num);
    else
        printf("%d is not power of 16\n",num);
}
