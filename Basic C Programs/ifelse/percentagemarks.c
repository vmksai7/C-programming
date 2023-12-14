//C program to take input of 5 subject marks of a student through keyboard and gets division as per following:
//percentage above or equal to 60 - First Division
//percentage between 50 and 59 - Second Division
//percentage between 40 and 49 - Third Division
//percentage below 40 - Fail

#include<stdio.h>
int main()
{
  int m1,m2,m3,m4,m5,per;
  printf("Enter five subjects marks\n");
  scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
  per = (m1+m2+m3+m4+m5) * 100 / 500;
  if(per>=60)
    printf("First Division\n");
  else if(per>=50)
    printf("Second Division\n");
  else if(per>=40)
    printf("Third Division\n");
  else
    printf("Fail\n");
  return 0;
}
