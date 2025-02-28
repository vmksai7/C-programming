/***************************************************************************************
Given a set of numbers where all elements occur an even number of times except 
one number, write a C program to find the odd occurring number.
***************************************************************************************/
#include<stdio.h>
int main()
{
        int arr[9] = {1,2,3,4,3,2,1,7,7};
        int i,res=0;
        int size = sizeof(arr)/sizeof(arr[0]);
        for(i=0;i<size;i++)
        {
                res = res ^ arr[i];
        }
        printf("Odd occurance in an array is: %d\n",res);
}