//C program to display numbers from 1 to 100 using for loop

#include<stdio.h>
int main()
{
  int count;
  for(count=0;count<=100;count++)
    printf("%d ",count);
}

//C program to display numbers from 1 to 100 using while loop

#include<stdio.h>
int main()
{
  int count=0;
  while(count<=100)
  {
    printf("%d ",count);
    count++;
  }
}

//C program to display numbers from 1 to 100 using do while loop

#include<stdio.h>
int main()
{
  int count=0;
  do
  {
    printf("%d ",count);
    count++;
  }while(count<=100);
}
