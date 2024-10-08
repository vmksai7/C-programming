//C program to print binary equivalent of double using char pointer

#include<stdio.h>
int main()
{
  double d;
  int i,j;
  printf("Enter the data\n");
  scanf("%lf",&d); //Reading data from user using %lf(double) value
  char *p=&d,cp;
  for(i=7;i>=0;i--)
  {
    cp=*(p+i);
    for(j=7;j>=0;j--)
      printf("%d",(cp>>j)&1);
  }
}

