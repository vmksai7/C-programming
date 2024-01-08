/*******************************************************************************
C Program to shift the array elements to left or right by N number of times
by taking input from the user through keyboard
*******************************************************************************/

#include<stdio.h>

#define N 5

int main()
{
    int arr[N],m,i,j,temp;
    int ch;

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Enter %d elements\n",N);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);

    printf("Enter the position the array to be shifted (0-Left, 1-Right)\n");
    scanf(" %d",&ch);

    if(ch==0)
    {
        printf("Enter how many times array to be shifted left\n");
        scanf("%d",&m);

        for(i=0;i<m;i++)
        {
            temp = arr[0];
            for(j=0;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[size-1] = temp;
        }
    }

    else if(ch==1)
    {
        printf("Enter how many times array to be shifted right\n");
        scanf("%d",&m);

        for(i=0;i<m;i++)
        {
            temp = arr[size-1];
            for(j=size-1;j>=0;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[0] = temp;
        }
    }

    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}
