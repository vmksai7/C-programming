#include<stdio.h>
int main()
{
  int x=10;
  int y=20;
  int z=30;
  int p=40;
  int t=50;
  int w=60;
  printf("Before changes: x=%d y=%d z=%d p=%d t=%d w=%d\n",x,y,z,p,t,w);
  x+=5; //Similar to x=x+5
  y-=5; //Similar to y=y-5
  z*=5; //Similar to z=z*5
  p%=5; //Similar to p=p%5
  t/=5; //Similar to t=t/5
  w&=5; //Similar to w=w&5
  printf("After changes: x=%d y=%d z=%d p=%d t=%d w=%d\n",x,y,z,p,t,w);
}
