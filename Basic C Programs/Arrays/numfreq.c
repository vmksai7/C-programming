/*******************************************************************************
C program to find a number and its frequency in array
*******************************************************************************/
#include<stdio.h>

int main()
{
    int arr[] = {1,4,6,3,5,9,2,5,8,2,5,4,1,8};
    int i,n,size;
    size = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\nEnter an element to search:");
    scanf("%d",&n);
    int count =0;
    for(i=0;i<=size;i++)
    {
        if(arr[i] == n)
            count++;
    }
    printf("%d is found %d times",n,count);
    return 0;
}
