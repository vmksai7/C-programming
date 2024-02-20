/*******************************************************************************
C program to add the digits of an array
*******************************************************************************/
#include<stdio.h>
#define N 5
int main()
{
  int arr[N];
  int i,n,sum=0;
  printf("Enter %d elements\n",N);
  for(i=0;i<N;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<N;i++)
    printf("%d ",arr[i]);
  printf("\n");
  for(i=0;i<N;i++)
    sum=sum+arr[i];
  printf("Sum of an array is: %d",sum);
}
