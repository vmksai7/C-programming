//C program to count number of set bits present in a given number

#include<stdio.h>

int setbit(int num)
{
    int cnt=0;
    while(num!=0)
    {
        if(num & 1 == 1)
            cnt++;
        num>>=1;
    }
    return cnt;
}

int main()
{
    int num,res;
    printf("Enter the number\n");
    scanf("%d",&num);
    res=setbit(num);
    printf("Total number of set bits in %d is %d\n",num,res);
}
