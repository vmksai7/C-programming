//C program to print the sum of natural numbers from 1 to 50 using for loop

#include<stdio.h>
int main()
{
  int count,sum=0;
  for(count=1;count<=50;count++)
  {
    sum=sum+count;
  }
  printf("Sum of natural numbers from 1 to 50 is: %d",sum);
}

//C program to print the sum of natural numbers from 1 to 50 using while loop

#include<stdio.h>
int main()
{
  int count=1,sum=0;
  while(count<=50)
  {
    sum=sum+count;
    count++;
  }
  printf("Sum of natural numbers from 1 to 50 is: %d",sum);
}

//C program to print the sum of natural numbers from 1 to 50 using do while loop

#include<stdio.h>
int main()
{
  int count=1,sum=0;
  do
  {
    sum=sum+count;
    count++;
  }while(count<=50);
  printf("Sum of natural numbers from 1 to 50 is: %d",sum);
}
