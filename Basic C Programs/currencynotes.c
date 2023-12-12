//C program to find the smallest number of notes that will combine to given Rs. N
//Sum of Rs. N is entered and having notes of six denominations Rs.1, Rs.2, Rs.5, Rs.10, Rs.50, Rs.100

#include<stdio.h>
int main()
{
  int amount, nohun, nofifty, notens, nofive, notwo, noone, total;
  printf("Enter the amount\n");
  scanf("%d",&amount);
  nohun=amount/100;
  amount=amount%100;
  nofifty=amount/50;
  amount=amount%50;
  notens=amount/10;
  amount=amount%10;
  nofive=amount/5;
  amount=amount%5;
  notwo=amount/2;
  amount=amount%2;
  noone=amount/1;
  amount=amount%1;
  total=nohun+nofifty+notens+notwo+noone;
  printf("Smallest number of notes = %d\n",total);
}
