/*******************************************************************************
C program to copy 1 array into another in reverse order
*******************************************************************************/
#include<stdio.h>
#define N 5

int main()
{
    int arr1[N],arr2[N],i,j;
    printf("Enter %d elements of an array\n",N);
    for(i=0;i<=4;i++)
        scanf("%d",&arr1[i]);
    for(i=0,j=4;i<=4;i++,j--)
        arr2[j]=arr1[i];
    printf("Elements in reverse order\n");
    for(i=0;i<=4;i++)
        printf("%d ",arr2[i]);
    return 0;
}
