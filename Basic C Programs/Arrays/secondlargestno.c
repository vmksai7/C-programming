/*******************************************************************************
C program to find the second largest number by taking input from the user
*******************************************************************************/
#include<stdio.h>
#define N 5

int main()
{
  int arr[N],i,sum=0,temp,max1,max2;
  for(i=0;i<N;i++)
  {
      printf("Enter the %d element: ",i);
      scanf("%d",&arr[i]);
  }
  printf("\n");
  for(i=0;i<N;i++)
    printf("%d ",arr[i]);
  printf("\n");
  max1=arr[0];
  max2=arr[1];
  if(max2>max1)
  {
      temp=max2;
      max2=max1;
      max1=temp;
  }
  for(i=2;i<N;i++)
  {
      if(arr[i]>max1)
      {
          max2=max1;
          max1=arr[i];
      }
      else if(arr[i]>max2)
      {
          max2=arr[i];
      }
  }
  printf("Largest number is %d\n",max1);
  printf("Second largest number is %d\n",max2);
}
