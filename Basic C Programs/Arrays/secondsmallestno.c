/*******************************************************************************
C program to find the second smallest number in a given array
*******************************************************************************/
#include <stdio.h>
#define N 5

int main() {
    int arr[N];
    int i,min1,min2,temp;
    printf("Enter %d integers\n",N);
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<N;i++)
        printf("%d ",arr[i]);
    printf("\n");
    min1=arr[0];
    min2=arr[1];
    if(min2<min1)
    {
        temp=min2;
        min2=min1;
        min1=temp;
    }
    for(i=2;i<N;i++)
    {
        if(arr[i]<min1)
        {
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2)
            min2=arr[i];
    }
    printf("Second smallest number in an array is: %d\n",min2);
}
