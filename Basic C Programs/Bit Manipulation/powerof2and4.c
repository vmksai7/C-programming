/*******************************************************************************
C program to check the given number is power of 2 or not
*******************************************************************************/
#include<stdio.h>

int main()
{
    int num,temp;
    printf("Enter the number to check if it power of 2\n");
    scanf("%d",&num);
    temp=num-1;
    if(num & temp)
        printf("%d is not power of 2\n",num);
    else
        printf("%d is power of 2\n",num);
}

//C program to check the given number is power of 4 or not

#include<stdio.h>

int power(int num)
{
    if(num==0)
        return 0;
    while(num!=1)
    {
        if(num%4!=0)
            return 0;
        num=num/4;
    }
    return 1;
}

int main()
{
    int num,temp;
    printf("Enter the number to check if it power of 4\n");
    scanf("%d",&num);
    if(power(num))
        printf("%d is power of 4\n",num);
    else
        printf("%d is not power of 4\n",num);
}
