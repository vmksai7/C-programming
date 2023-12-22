//C program to sum of digits given by the user by using Recursion

#include<stdio.h>
int rsum(int);
int main()
{
  int num,sum;
  int n;
  printf("Enter number\n");
  scanf("%d",&num);
  sum=rsum(num);
  printf("Sum of digits is %d\n",sum);
  return 0;
}
int rsum (int n)
{
  int s,remainder;
  if(n!=0)
  {
    remainder = n % 10;
    s = remainder + rsum(n/10);
  }
  else
    return 0;
  return s;
}
