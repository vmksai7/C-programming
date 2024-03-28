/*******************************************************************************
C program to generate fibonacci series using recustion
*******************************************************************************/
#include<Stdio.h>
int fibonacci(int n)
{
  if(n<=1)
    return n;
  else
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
  int terms,i;
  printf("Enter number of terms in the fibonacci series\n");
  scanf("%d",&terms);
  printf("Fibonacci series\n");
  for(i=0;i<terms;i++)
    printf("%d ",fibonacci(i));
  return 0;
}
