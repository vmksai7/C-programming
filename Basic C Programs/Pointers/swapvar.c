//C program to swap 2 variables using pointers

#include<stdio.h>
int swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  int num1=5,num2=10;
  printf("Befrore swapping variables: a=%d b=%d\n",num1,num2);

  //Swap function to change variables
  swap(&num1,&num2);
  
  printf("After swapping variables: a=%d b=%d\n",num1,num2);
}
