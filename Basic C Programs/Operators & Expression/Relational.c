/*******************************************************************************
C program to understand the relational operators
*******************************************************************************/
#include<Stdio.h>
int main()
{
  int a=5,b=-2,c;
  c=a>b;
  printf("%d\n",c); //1 (True)
  c=a<b;
  printf("%d\n",c); //0 (False)
  c=a>=b;
  printf("%d\n",c); //1
  c=a<=b;
  printf("%d\n",c); //0
  c=a==b;
  printf("%d\n",c); //0
  c=a!=b;
  printf("%d\n",c); //1
}
