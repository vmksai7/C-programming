/*******************************************************************************
C program to print the prime factors of a given number
*******************************************************************************/

#include<stdio.h>

void primefactor(int n)
{
    //Print the number of 2's that divide with n
    while(n%2==0)
    {
        printf("2 ");
        n=n/2;
    }

    // n must be odd at this point, so a skip of 2 ( i = i + 2) can be used
    for(int i=3;i<=n;i=i+2)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
    }
}

int main()
{
    int num;

    //Get an input from user
    printf("Enter a number\n");
    scanf("%d",&num);

    if(num<1)
    {
        printf("Enter a positive number\n");
        return 1;
    }

    printf("Prime factors of %d are: ",num);
    primefactor(num);
}
