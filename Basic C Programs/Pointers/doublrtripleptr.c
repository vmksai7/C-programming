//C program to unnderstand pointer, double pointer and triple pointer

#include<stdio.h>
int main()
{
  int a=10;
  int *p,**q,***r;
  p=&a;
  q=&p;
  r=&q;
  printf("%d %d %d %d\n",a,*p,**q,***r);
  *p=20;
  printf("%d %d %d %d\n",a,*p,**q,***r);
  **q=30;
  printf("%d %d %d %d\n",a,*p,**q,***r);
  ***r=40;
  printf("%d %d %d %d\n",a,*p,**q,***r);
}

Output:
10 10 10 10
20 20 20 20
30 30 30 30
40 40 40 40
