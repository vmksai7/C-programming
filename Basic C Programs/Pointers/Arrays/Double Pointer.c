/*******************************************************************************
C Program to check the given number is present in an array or not
*******************************************************************************/
#include<stdlib.h>

enum
{
    N=2,
    M
};

int main()
{
    int **arr,i,j,val=1;
    
    arr = (int**)malloc(N*sizeof(int*));
    
    for(i=0;i<M;i++)
    {
        arr[i] = (int*)malloc(M*sizeof(int));
    }
    
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            arr[i][j] = val++;
        }
    }
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%d\n",arr[i][j]);
        }
    }
    free(arr);
}
