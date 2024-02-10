/*******************************************************************************
Finding the Last/Unit digit of a 2 digit number
*******************************************************************************/
#include<stdio.h>
int main()
{
  int a=25,res; //Initialising a value
  res=a%10;
  printf("Unit digit of %d is: %d",a,res);
}

#include<stdio.h>
int main()
{
  int a,res;
  scanf("%d:,&a); //Taking input a value from user
  res=a%10;
  printf("Last/Unit digit of a given number %d is: %d",a,res);
}

//Finding the tens digit of a 2 digit number

#include<stdio.h>
int main()
{
  int a=25,res; //Taking input a value from user
  res=a/10;
  printf("Tens digit of %d is %d",a,res);
}
