/*******************************************************************************
C program to print Fahrenheit temperatures and their centigrade or 
Celsius equivalents
*******************************************************************************/
#include<stdio.h>

//Print Fahrenheit Celsius table for fahr=0,20,....300

main()
{
  int fahr,cels;
  int first,last,step;
  first=0; //lower limit of temperature scale
  last=300; //upper limit 
  step=20; //step size
  fahr=first;
  while(fahr<=last)
  {
    cels = 5 * (fahr - 32) / 9; //Convering fahr value to cels
    printf("%d\t %d\n",fahr,cels);
    fahr=fahr+step;
  }
}

//Same program printing values with decimals

#include<Stdio.h>

//Print Fahrenheit Celsius table for fahr=0,20,....300 in floating 
//point version

main()
{
  float fahr,cels;
  float first,last,step;
  first=0; //lower limit of temperature scale
  last=300; //upper limit
  step=20; //step size
  fahr=first;
  while(fahr<last)
  {
    cels = (5.0/9.0) * (fahr-32.0); 
    //Convering fahr value to cels in floating point numbers
    
    printf("%3.0f\t %6.1f\n",fahr,cels);
    fahr=fahr+step;
  }
}

//Same program by using for loop

#include<Stdio.h>
main()
{
  for(float fahr=0;fahr<=300;fahr+=20)
    printf("%3.0f %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
}

//Same program by using for loop in reverse order

#include<Stdio.h>
main()
{
  for(float fahr=300;fahr>=0;fahr-=20)
    printf("%3.0f %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
}
