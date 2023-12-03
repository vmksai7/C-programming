//C program to remove the last set bit of a given number

#include<stdio.h>
int main()
{
    int num,res;
    printf("Enter the number\n");
    scanf("%d",&num);
    res = num & (num-1);
        printf("Result is: %d\n", res);
}

//C program to find the rightmost set bit position

#include<stdio.h>
int main()
{
    int num,bit,mask,res;
    printf("Enter the number\n");
    scanf("%d",&num);
    //printf("Enter the position bit is  to be set\n");
    //scanf("%d",&bit);
    //mask=~(1<<(bit-1));
    res = num & ~(num-1);
        printf("Result is: %d\n", res);
}
