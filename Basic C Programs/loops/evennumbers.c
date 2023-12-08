//C program to print the all even numbers from 20 and 40 using for loop

#include<stdio.h>
int main()
{
  int even;
  for(even=20;even<=40;even++)
  {
    if(even%2==0)
      printf("%d ",even);
  }
}

//C program to print the all even numbers from 20 and 40 using while loop

#include<stdio.h>
int main()
{
  int even=20;
  while(even<=40)
  {
    if(even%2==0)
      printf("%d ",even);
    even++;
  }
}

//C program to print the all even numbers from 20 and 40 using do while loop

#include<stdio.h>
int main()
{
  int even=20;
  do
  {
    if(even%2==0)
      printf("%d ",even);
    even++;
  }while(even<=40);
}
