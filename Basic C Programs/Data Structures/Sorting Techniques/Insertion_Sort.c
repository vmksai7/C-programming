/*******************************************************************************
C program to for ascending order program using Insertion sorting technique
*******************************************************************************/
#include<stdio.h>

int main()
{
    int arr[] = {11,23,43,24,33,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int i,j,temp,min;
    
    for(i=0;i<=n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);
    }
}
