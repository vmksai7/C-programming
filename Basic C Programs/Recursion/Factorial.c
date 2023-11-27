//C program to print the factorial a number
#include<stdio.h>

//Function to calculate factorial using recursion
int factorial(int n)
{
  if(n==0 || n==1)
    return 1;
  else
    return n * factorial(n-1);
}

int main()
{
  int num;
  printf("Enter a number\n"); //Enter a number to calculate factorial
  scanf("%d",&num);
  
  //Prints the number entered from user and returns factorial number from factorial function
  printf("Factorial of %d is %d\n",num,factorial(num)); 
  return 0;
}
