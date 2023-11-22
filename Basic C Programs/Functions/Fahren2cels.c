//C program to print Fahrenheit temperatures and their centigrade or Celsius equivalents using functions

#include<stdio.h>

//Print Fahrenheit Celsius table for fahr=0,20,....300

int fahr2cels(int n) //Defining a fahr2cels function with formal arguments
{
    int m = 5 * (n - 32) / 9; //Converting fahr value to cels
    return m;
}

main()
{
  int fahr,cels;
  for(fahr=0;fahr<=300;fahr=fahr+20)
  {
      cels=fahr2cels(fahr); //Calling fahr2cels function with actual arguments  to calculate celsius value
      printf("%d %d\n",fahr,cels);
  }
}
