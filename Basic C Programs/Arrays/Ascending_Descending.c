/*******************************************************************************
C Program to print ascending and descending order using Bubble sort technique
******************************************************************************/
#include<stdio.h>

int main()
{
    int arr[] = {23,43,21,14,56,78,54,12,11,34};
    
    int i,j,temp;
    int size = sizeof(arr)/sizeof(arr[0]);
    int flag = 0;
    
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    
    printf("Array in ascending order:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    
    printf("Array in descending order:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
