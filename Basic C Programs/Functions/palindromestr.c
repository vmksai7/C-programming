/*******************************************************************************
C program to check given string is palindrome or not using functions
*******************************************************************************/
#include<stdio.h>
#include<string.h>
int ispalindrome(char str[])
{
  int len=strlen(str);
  int i,j;
  for(i=0,j=len-1;i<j;++i,--j)
  {
    if(str[i]!=str[j])
      return 0;
  }
}
int main()
{
  char str[100];//Defining character string
  int i;
  scanf("%s",str);
  if(ispalindrome(str))
    printf("String is palindrome\n");//If ispalindrome returns non zero
  else
    printf("String is not palindrome\n");//If ispalindrome returns zero
}