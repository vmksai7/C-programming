/*******************************************************************************
C Program to merge 2 individual arrays into a single array
******************************************************************************/

#include<stdio.h>

#define N 5
#define M 10

int main()
{
    int arr1[N],arr2[N],arr3[M];
    int num,num1;

    //Input the elements of 1st array
    printf("Enter %d elements of 1st array\n",N);
    for(num=0;num<N;num++)
        scanf("%d",&arr1[num]);
    for(num=0;num<N;num++)
        printf("%d ",arr1[num]);

    //Input the elements of 2nd array
    printf("\nEnter %d elements of 2nd array\n",N);
    for(num=0;num<N;num++)
        scanf("%d",&arr2[num]);
    for(num=0;num<N;num++)
        printf("%d ",arr2[num]);

    //Merge two arrays in 3rd array
    for(num=0;num<M;num++)
        arr3[num]=arr1[num];
    for(num=N,num1=0;num<M;num++,num1++)
        arr3[num]=arr2[num1];
    printf("\n");

    //Print the merged array
    for(num=0;num<M;num++)
        printf("%d ",arr3[num]);
}
