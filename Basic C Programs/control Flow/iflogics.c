//C program to write logics on if condition

#include<stdio.h>

int main()
{
  int x,y=1,z;
  
  if(y!=0)
    x=5;
  printf("x= %d\n",x); //x=5

  if(y==0)
    x=3;
  else
    x=5;
  printf("x= %d\n",x); //x=5

  x=1;
  if(y<0)
    if(y>0)
      x=3;
    else
      x=5;
  printf("x= %d\n",x); //x=1

  if(z=y<0)
    x=3;
  else if(y==0)
    x=5;
  else
    x=7;
  printf("x= %d z=%d\n",x,z); //x=7 z=0

  if(z=(y==0))
    x=5;
  x=3;
  printf("x= %d,z= %d\n",x,z); //x=3 z=0

  if(x=y=z); 
  x=3;
  printf("x= %d,z= %d\n",x,z); //x=3 z=0
}
