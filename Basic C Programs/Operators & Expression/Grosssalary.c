/*******************************************************************************
C Program to calculate Employee's Gross salary
*******************************************************************************/
#include<stdio.h>
int main()
{
  float sal,da,hra,grpay;
  printf("Enter Employee's basic salary\n");
  scanf("%f",&sal);
  da=0.4*sal;
  hra=0.2*sal;
  grpay=sal+da+hra;
  printf("Basic salary of Employee = %f\n",sal);
  printf("Dearness Allowances = %f\n",da);
  printf("House rent Allowances = %f\n",hra);
  printf("Gross salary = %f\n",grpay);
  return 0;
}
