/*******************************************************************************
C program to exchange the first and last digit of a given number
*******************************************************************************/
#include<stdio.h>

int main()
{
    int num,first,last,original,i;
    int cnt=0,number=1,mul=0;

    //Input a number
    printf("Enter a number\n");
    scanf("%d",&num);

    printf("Before exchanging the first and last digit of a given number "
           "is: %d\n",num);

    //Storing num value in variable original
    original=num;

    //Storing last digit in variable last
    last=num%10;

    //Storing first digit in variable first
    while(num>9)
    {
        num/=10;
        cnt++;
    }
    first=num;

    //Exchanging the first and last digit
    original/=10;

    for(i=1;i<cnt;i++)
        number*=10;

    original=original%number;

    while(original)
    {
        mul=(mul*10)+(original%10);
        original/=10;

    }

    while(mul)
    {
        last=(last*10)+(mul%10);
        mul/=10;
    }
    last=(last*10)+first;

    printf("After exchanging the first and last digit of a given number "
           "is: %d\n",last);
}
