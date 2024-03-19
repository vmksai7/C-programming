/*******************************************************************************
C program to find the aggregate and percentage of a student of 5 subjects marks
*******************************************************************************/
#include<stdio.h>
int main()
{
  int m1,m2,m3,m4,m5,aggr;
  float perc;
  printf("Enter marks in 5 subjects\n");
  scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
  aggr=m1+m2+m3+m4+m5;
  perc=aggr/5;
  printf("Aggregate Marks = %d\n",aggr);
  printf("Percentage marks = %f\n",perc);
}
