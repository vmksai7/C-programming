//C program for a simple calculator

#include<stdio.h>
int main()
{
  int n,a,b,sum,sub,mul,div;
  printf("Enter a value\n");
  scanf("%d",&a);
  printf("Enter b value\n");
  scanf("%d",&b);
  printf("1. Addition\t2. Subtraction\t3. Multiplication\t4. Division\n");
  printf("Enter your choice\n");
  scanf("%d",&n);
  switch(n)
  {
    case 1:
      sum=a+b;
      printf("Addition of a and b is: %d\n",sum);
      break;
    case 2:
      sub=a-b;
      printf("Subtraction of a and b is: %d\n",sub);
      break;
    case 3:
      mul=a*b;
      printf("Multiplication of a and b is: %d\n",mul);
      break;
    case 4:
      div=a/b;
      printf("Division of a and b is: %d\n",div);
      break;
    default:
      printf("Not a valid choice\n");
  }
}
