//C program to display the salary of the Graduates and Post Graduates with <,<=,>,>= 10 years of experience for male and female

#include<stdio.h>
int main()
{
  char g; //Gender
  int yos,qual,sal=0; //yos = years of service, qual = Qualification, sal = salary
  printf("Enter Gender,Years of service and Qualification (0=Graduate, 1=Post Graduate): ");
  scanf("%c %d %d",&g,&yos,&qual);
  if((g=='m' || g=='M') && yos>=10 && qual==1)
    sal=11000;
  else if((g=='m' || g=='M') && yos>=10 && qual==0)
    sal=10000;
  else if((g=='m' || g=='M') && yos<10 && qual==1)
    sal=10000;
  else if((g=='m' || g=='M') && yos<10 && qual==0)
    sal=7000;
  else if((g=='f' || g=='F') && yos>=10 && qual==1)
    sal=12000;
  else if((g=='f' || g=='F') && yos>=10 && qual==0)
    sal=9000;
  else if((g=='f' || g=='F') && yos<10 && qual==1)
    sal=10000;
  else if((g=='f' || g=='F') && yos<10 && qual==0)
    sal=6000;
  printf("Salary of Employees = %d\n",sal);
  return 0;
}