/*******************************************************************************
C program to reverse the given number
*******************************************************************************/
#include<stdio.h>
int main()
{
  int num,temp,res=0;
  printf("Enter the number =");
  scanf("%d",&num);
  while(num!=0)
  {
    temp=num%10;
    res=res*10+temp;
    num=num/10;
  }
  printf("Reversed number is = %d\n",res);
}
