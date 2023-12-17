//C program to input 3 sides of triangle and check the triangle is valid or not.
//If sum of  2 sides of triangle is larger than the third side then triangle is valid

#include<stdio.h>
int main()
{
  int side1, side2, side3, largeside, sum;
  printf("Enter the sides of triangle\n");
  scanf("%d %d %d",&side1, &side2, &side3);
  if(side1>side2)
  {
    if(side1>side3)
    {
      sum = side2 + side3;
      largeside=side1;
    }
    else
    {
      sum = side1 + side2;
      largeside=side3;
    }
  }
  else
  {
    if(side2>side3)
    {
      sum = side1 + side3;
      largeside=side2;
    }
    else
    {
      sum = side1 + side2;
      largeside=side3;
    }
  }
  if(sum>largeside)
    printf("Triangle is valid\n");
  else
    printf("Triangle is invalid\n");
}
