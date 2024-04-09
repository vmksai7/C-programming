/*******************************************************************************
C program to find the gross salary of an employee
His basic sal is less than Rs.1500, then HRA=10% of basic sal
And DA=90% of basic salary. If his sal equal to or above Rs.1500,
then HRA=Rs.500 and DA=98% of basic sal. If employees sal is input through 
keyboard.
*******************************************************************************/
#include<stdio.h>
int main()
{
  float bs,gs,da,hra;
  printf("Enter basic salary\n");
  scanf("%f",&bs);
  if(bs<1500)
  {
    hra=bs * 10 / 100;
    da= bs * 90 / 100;
  }
  else
  {
    hra=500;
    da= bs * 98 /100;
  }
  gs=bs + hra + da;
  printf("Gross Salary = Rs.%f\n",gs);
  return 0;
}
