/*******************************************************************************
C program to find the area of triangle, given its sides
*******************************************************************************/
#include<stdio.h>
#include<math.h> //To use sqrt()

int main()
{
  float a,b,c,sp,area;
  printf("Enter the sides of a triangle\n");
  scanf("%f %f %f",&a,&b,&c);
  sp=(a+b+c)/2;
  area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
  printf("Area of triangle= %f\n",area);
  return 0;
}
