//C program to sumof digits of a given number using for loop

#include<stdio.h>
int main()
{
  int num,temp,res=0;
  printf("Enter the number: ");
  scanf("%d",&num);
  for(;num!=0;num/=10)
  {
    temp=num%10;
    res=res+temp;
  }
  printf("Sum of digits of a given number is: %d\n",res);
}
