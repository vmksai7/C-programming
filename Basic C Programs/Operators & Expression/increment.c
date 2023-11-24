#include<stdio.h>
int main()
{
  int x,y,z,w,res;
  x=y=z=w=1;
  printf("Before changes: %d %d %d %d\n",x,y,z,w); //1 1 1 1 
  res=++w;
  printf("After ++w result is: %d\n",res); //2
  res=x++;
  printf("After x++ result is: %d\n",res); //1
  res=--y;
  printf("After --y result is: %d\n",res); //0
  res=z--;
  printf("After z-- result is: %d\n",res); //1
}

#include<stdio.h>
int main()
{
  int a,b,c;
  a=b=1;
  c = a++ + b++;
  printf("%d %d %d\n",a,b,c); //a=2 b=2 c=2
  b = ++a + ++c;
  printf("%d %d %d\n",a,b,c); //a=3 b=6 c=3
  a= b-- - --c;
  printf("%d %d %d\n",a,b,c); //a=4 b=5 c=2
}

#include<stdio.h>
int main()
{
  int a=1,b=1;
  a = b++ + b++ + b++ + b++;
  printf("%d %d\n",a,b); //a=10 b=5
}

#include<stdio.h>
int main()
{
  int a=1,b=1;
  a = ++b + ++b + ++b + ++b;
  printf("%d %d\n",a,b); //a=10 b=5
}
