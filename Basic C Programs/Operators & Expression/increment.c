#include<stdio.h>
int main()
{
  int x,y,z,w,res;
  x=y=z=w=1;
  printf("Before changes: %d %d %d %d\n",x,y,z,w);
  res=++w;
  printf("After ++w result is: %d\n",res);
  res=x++;
  printf("After x++ result is: %d\n",res);
  res=--y;
  printf("After --y result is: %d\n",res);
  res=z--;
  printf("After z-- result is: %d\n",res);
}
