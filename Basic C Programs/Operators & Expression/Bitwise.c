#include<Stdio.h>
int main()
{
  int a=20,b=10,c;
  c = a & b;
  printf("%d\n",c); //0
  c = a | b;
  printf("%d\n",c); //30
  a = a ^ b;
  printf("%d\n",c); //30
}

#include<stdio.h>
int main()
{
  int a=10,b=20,c;
  c = a>>1;
  printf("%d\n",c); //5
  c = a<<1;
  printf("%d\n",c); //20
  c = a<<1 & a>>1;
  printf("%d\n",c); //4
  c = a<<1 | a>>1;
  printf("%d\n",c); //21
  c = ~(a<<1 | a>>1);
  printf("%d\n",c); //-22
}
