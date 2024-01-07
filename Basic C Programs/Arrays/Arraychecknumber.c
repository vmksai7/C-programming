/*******************************************************************************
C Program to check the given number is present in an array or not
******************************************************************************/

#include<stdio.h>

#define N 5

int main()
{
    int arr1[N];
    int num,num1,found=0;

    printf("Enter %d elements of 1st array\n",N);
    for(num=0;num<N;num++)
        scanf("%d",&arr1[num]);
    for(num=0;num<N;num++)
        printf("%d ",arr1[num]);

    printf("\nEnter the number to be searched in an array\n");
    scanf("%d",&num1);
    for(num=0;num<N;num++)
    {
        if(arr1[num]==num1)
            found=1;
    }
    if(found==1)
        printf("%d is found in an array\n",num1);
    else
        printf("%d is not found in an array\n",num1);
}
