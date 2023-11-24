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
