/*******************************************************************************
C program to enter array size and input elements and shifts right for n no. of 
bits as per the user
*******************************************************************************/
#include<stdio.h>
#define N 5

int main()
{
    int arr[N],i,j,m,temp,an;
    for(i=0;i<N;i++)
    {
        printf("Enter %d element: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
        printf("%d ",arr[i]);
    printf("\n");
    printf("Enter the number how many times array to be rotated\n");
    scanf("%d",&m);
    //an=N;
    for(i=0;i<m;i++)
    {
        temp=arr[N-1];
        for(j=N-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    for(i=0;i<N;i++)
        printf("%d ",arr[i]);
}
