//C program to print the numbers from 100 to 1 in reverse order using for loop

#include<stdio.h>
int main()
{
  int count;
  for(count=100;count>0;count--)
    printf("%d ",count);
}

//C program to print the numbers from 100 to 1 in reverse order using while loop

#include<stdio.h>
int main()
{
  int count=100;
  while(count>0)
  {
    printf("%d ",count);
    count--;
  }
}

//C program to print the numbers from 100 to 1 in reverse order using do while loop

#include<stdio.h>
int main()
{
  int count=100;
  do
  {
    printf("%d ",count);
    count--;
  }while(count>0);
}
