//C program to interchange the adjacent element of an array

#include<stdio.h>
#define START 0
#define END size

int main()
{
  int num[] = {12,34,56,7,87,5,3,89,54,3,45,89};
  int i,temp,size;
  size = sizeof(num)/sizeof(num[0]);
  for(i = START ; i < END ; i++)
    printf("%d ",num[i]);
  printf("\n");
  for(i = START ; i < END ; i+=2)
  {
    temp = num[i];
    num[i] = num[i+1];
    num[i+1] = temp;
  }
  for(i = START ; i < END ; i++)
    printf("%d ",num[i]);
}
