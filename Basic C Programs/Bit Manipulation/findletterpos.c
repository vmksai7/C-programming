/*******************************************************************************
C program to find the letter position of the alphabet using bitwise operator
*******************************************************************************/
#include<stdio.h>
int main()
{
  char letter;
  int pos;
  printf("Enter the letter\n");
  scanf("%c",&letter);
  pos=letter&0x1F;
  printf("Position of %c is %d\n",letter,pos);
}
