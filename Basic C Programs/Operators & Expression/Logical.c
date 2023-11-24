#include<stdio.h>
int main()
{
  int a=2,b=0,c=-3,d;
  d=(a=b) || (b=c);
  printf("%d %d %d %d\n",a,b,c,d); //0 -3 -3 1
}

#include<stdio.h>
int main()
{
  int a=2,b=0,c=-3,d;
  d = (c=b) || (b=a) || (a=c);
  printf("%d %d %d %d\n",a,b,c,d); //2 2 0 1
}

#include<Stdio.h>
int main()
{
  int a=2,b=0,c=-3,d;
  d = (a=b) && (b=c) && (c=a);
  printf("%d %d %d %d\n",a,b,c,d); //0 0 -3 0
}

#include<Stdio.h>
int main()
{
  int a=2,b=0,c=-3,d;
  d = (a=b) && (b=c) || (c=a);
  printf("%d %d %d %d\n",a,b,c,d); //0 0 0 0
}

#include<Stdio.h>
int main()
{
  int a=2,b=0,c=-3,d;
  d = (a=b) || (b=c) || (c=a);
  printf("%d %d %d %d\n",a,b,c,d); //0 -3 -3 1
}
