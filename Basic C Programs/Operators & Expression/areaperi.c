/*******************************************************************************
C program to calculate are and perimeter of a rectangle and area and 
circumference of a circle
*******************************************************************************/
#include<stdio.h>
int main()
{
  float len,wid,arec,rad,perec,acir,circir;
  float pi=3.14;
  printf("Enter the length and width of a rectangle\n");
  scanf("%f %f",&len,&wid);
  printf("Enter the radius of a circle\n");
  scanf("%f",&rad);
  arec= len * wid;
  perec= 2* (len+wid);
  acir= pi * rad * rad;
  circir= 2 * pi * rad;
  printf("Area of rectangle = %f\n",arec);
  printf("Perimeter of the rectangle = %f\n",perec);
  printf("Area of circle = %f\n",aci,r);
  printf("Circumference of circle = %f\n",circir);
}
