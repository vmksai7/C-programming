//C program to display enter position of given number is set or clear

#include<stdio.h>
int main()
{
    int num,bit,mask;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the position that bit is set or clear\n");
    scanf("%d",&bit);
    mask=1<<(bit-1); //1 is left shifted by bit position - 1 times and stores in mask
    if(num & mask) //num will be anded with mask times
        printf("Bit is set\n");
    else
        printf("Bit is clear\n");
}
