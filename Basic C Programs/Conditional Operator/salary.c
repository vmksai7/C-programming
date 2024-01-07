/*******************************************************************************
C program to input salary of an employee through keyboard and prints the 
designation of the employee based on the salary using conditional operator
*******************************************************************************/

#include<stdio.h>

int main()
{
    float sal;
  printf("Enter the salary of an employee\n");
    scanf("%f",&sal);
    (sal>=25000 && sal<=40000) ? printf("Manager\n") : ((sal>=15000 && sal<25000)\
      ? printf("Accountant\n") : printf("Clerk\n"));
}
