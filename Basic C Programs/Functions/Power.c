/*******************************************************************************
C program to calculate power of two numbers if pow(2,3) -> 6
*******************************************************************************/
#include<stdio.h>

//Declaration of power function
int pow(int m,int n);

//test power function
int main()
{
  int i;
  for(i=0;i<=10;i++)
    //Enters to pow function for 10 times
    printf("%d %d %d\n",i,pow(2,i),pow(-3,i));
  return 0;
}

//Inside power function caluculating base power of n
int pow(int base,int n)
{
  int i,p;
  p=1;
  for(i=0;i<=n;i++)
    //Multiply p by bases -3 and 2 for n times
    p=p*base;
  return p; //returns the value of p to the calling function in the main
}
