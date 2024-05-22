/*******************************************************************************
C Program to remove the last set bit of a given number from the user
*******************************************************************************/
#include<stdio.h>
int main()
{
        int num;
        scanf("%d",&num);

        printf("Before removing last set bit: %d\n",num);
  
        //Logic
        int res = num & (num-1);
  
        printf("After removing last set bit: %d\n",res);
        return 0;
}
