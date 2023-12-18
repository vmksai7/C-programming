//C program to find the triangle is isosceles/equilateral/scalene or right angled triangle

#include<stdio.h>
int main()
{
  float side1,side2,side3;
  float angle1,angl2,angle3;
  printf("Enter three sides of a triangle\n");
  scanf("%f %f %f",&side1,&side2,&side3);
  if((side1==side2) && (side2==side3))
    printf("Triangle is equilateral triangle\n");
  else if((side1==side2) || (side2==side3) || (side3==side1))
    printf("Triangle is isosceles triangle\n");
  else if(side1*side1 + side2*side2 == side3*side3 || side1*side1 + side3*side3 == side2*side2 ||side2*side2 + side3*side3 == side1*side1)
    printf("Triangle is right angled triangle\n");
  else
    printf("Triangle is scalene triangle\n");
}
