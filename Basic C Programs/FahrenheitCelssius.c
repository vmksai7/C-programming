//C program to print Fahrenheit temperatures and their centigrade or Celsius equivalents

#include<stdio.h>

//Print Fahrenheit Celsius table for fahr=0,20,....300

int main()
{
  int fahr,cels;
  int first,last,step;
  first=0; //lower limit of temperature scale
  last=300; //upper limit 
  step=20; //step size
  fahr=first;
  while(fahr<=last)
  {
    cels = 5 * (fahr - 32) / 9;
    printf("%d\t %d\n",fahr,cels);
    fahr=fahr+step;
  }
}
