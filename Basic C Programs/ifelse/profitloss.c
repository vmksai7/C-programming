//C program to calculate profit or loss by giving cost price and selling price by the user

#include<stdio.h>
int main()
{
  float cp,sp,p,l;
  printf("Enter the cost price and selling price\n");
  scanf("%f %f",&cp,&sp);
  p=sp-cp;
  l=cp-sp;
  if(p>0)
    printf("Seller made a profit of Rs.%f\n",p);
  if(l>0)
    printf("Seller incurred loss of Rs.%f\n",l);
  if(p==0)
    printf("No profit, no loss\n");
  return 0;
}
