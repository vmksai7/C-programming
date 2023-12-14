//C program for a company insures its drivers in the following cases:
//If the driver is married
//If the driver is unmarried, male and above 30 years of age
//If the driver is unmarried, female and above 25 of age

#include<stdio.h>
int main()
{
  char sex,ms;
  int age;
  printf("Enter age, sex and marital status\n");
  scanf("%d %c %c",&age,&sex,&ms);
  if((ms=='M') || (ms=='U' && sex=='M' && age>30) || (ms=='U' && sex=='F' && age>25))
    printf("Driver should be insured\n");
  else
    printf("Driver should not be insured\n");
}
