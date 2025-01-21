/*******************************************************************************
C program to for ascending order program using bubble sorting technique
*******************************************************************************/
#include<stdio.h>

int main()
{
    int arr[] = {11,23,43,24,33,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int i,j,temp;
    
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);
    }
}
