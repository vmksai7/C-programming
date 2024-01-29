/*******************************************************************************
C program to count number of character from a given input
*******************************************************************************/
//Method 1
#include<stdio.h>
int main()
{
  double sum=0; //Declarae and intialize sum value to 0

  //Checking is input character is EOF if not enters the while loop statemnets
  while(getchar()!=EOF) 
    sum++; //Increment the sum value -> sum=sum+1

  //print the sum value in float type with zero decimal number
  printf("%.0f",sum); 
}

//Method 2
#include<stdio.h>
int main()
{
  int sum; //Declarae and intialize sum value to 0

  //Checking is input character is EOF if not for loop is being rotated till EOF occur or presee cntr+c to exit
  for(sum=0;getchar()!=EOF;++sum);
  printf("%d",sum);
}
