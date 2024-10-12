//Printing even and odd numbers using if else

#include<stdio.h>
int main()
{
  int x=0;
  INC: 
  if((x % 2) == 0)
  {
    printf("Even number: %d\n",x);
    x++;
    if(x<=10)
      goto INC;
  }
  else
  {
    printf("Odd number: %d\n",x);
    x++;
    if(x<=10)
      goto INC;
  }
}

//Printing even and odd numbers using for loop

#include<stdio.h>
int main()
{
  int i;
  for(i=0;i<=10;i++)
  {
    if(i % 2 == 0)
      printf("Even number is: %d\n",i);
    else
      printf("Odd number is: %d\n",i);
  }
}
//Printing even and odd numbers using while loop

#include<stdio.h>
int main()
{
  int i=0;
  while(i<=10)
  {
    if(i % 2 == 0)
    {
      printf("Even number is: %d\n",i);
      i++;
    }
    else
    {
      printf("Odd number is: %d\n",i);
      i++;
    }
  }
}

