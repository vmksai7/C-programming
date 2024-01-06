/*******************************************************************************
C Program to sum of digits of a given number
*******************************************************************************/

#include<stdio.h>

int main()
{
  int num,rem,sum=0;
  printf("Enter a number\n");
  scanf("%d",&num);
  while(num)
  {
    rem = num % 10;
    sum = sum + rem;
    num = num / 10;
  }
  printf("Sum of digits of a given number is: %d\n",sum);
}
