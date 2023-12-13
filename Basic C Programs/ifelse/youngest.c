//C program to take 3 members ages through keyboard and finding th yougest among three

#include<stdio.h>
int main()
{
  int first, second, third;
  printf("Enter the ages of first, second and third persons\n");
  scanf("%d %d %d",&first,&second,&third);
  if(first<second)
  {
    if(first<third)
      printf("First is smallest\n");
    else
      printf("Third is smallest\n");
  }
  else
    printf("Second is smallest\n");
}
