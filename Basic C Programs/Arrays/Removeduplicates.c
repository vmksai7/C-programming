/*******************************************************************************
C program to remove duplicates from an array by giving inputs from user
*******************************************************************************/
#include<stdio.h>
#define N 10
int main()
{
  int arr[N],i,j,k,num;
  printf("Enter %d elements:\n",N);
  for(i=0;i<N;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<N;i++)
    printf("%d ",arr[i]);
  printf("\n");
  num=N;
  for(i=0;i<num;i++)
  {
    for(j=i+1;j<num;)
    {
      if(arr[i]==arr[j])
      {
        for(k=j;k<num;k++)
          arr[k]=arr[k+1];
        num--;
      }
      else
        j++;
    }
  }
  for(i=0;i<num;i++)
    printf("%d ",arr[i]);
}