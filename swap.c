//C program to swap two numbers using third variable

#include<stdio.h>
int main()
{
  int a,b,temp;
  a=10;
  b=20;
  printf("Before swapping: a=%d b=%d\n",a,b);
  temp=b;
  b=a;
  a=temp;
  printf("After swapping: a=%d b=%d\n",a,b);
}

//C program to swap two numbers without using third variable

#include<stdio.h>
int main()
{
  int a,b;
  a=10;
  b=20;
  printf("Before swapping: a=%d b=%d\n",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("After swapping: a=%d b=%d\n",a,b);
}
