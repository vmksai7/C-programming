#include<stdio.h>
#define N 10

int main()
{
  int arr1[N],i,m,found;
  for(i=0;i<N;i++)
  {
      printf("Enter the %d element: ",i);
      scanf("%d",&arr1[i]);
  }
  printf("\n");
  for(i=0;i<N;i++)
    printf("%d ",arr1[i]);
  printf("\n");
  printf("Enter the number to be searched in an array: ");
  scanf("%d",&m);
  found=0;
  for(i=0;i<N;i++)
  {
      if(arr1[i]==m)
      {
          found=1;
      }
  }
  if(found==1)
    printf("Number found\n");
  else
    printf("Number not found\n");
}
