/*******************************************************************************
C program to reverse a string which is given by the user through keyboard
*******************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  int i,cnt,temp;
  scanf("%s",str);
  for(i=0;str[i];i++);
  cnt=i;
  for(i=0;i<cnt/2;i++)
  {
    temp=str[i];
    str[i]=str[cnt-i-1];
    str[cnt-i-1]=temp;
  }
  printf("%s",str);
}
