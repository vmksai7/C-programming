#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter integers for a and b\n");
  scanf("%d %d",&a,&b);
  (a==b) ? printf("Equal\n") : printf("Not Equal\n");
}

#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter integers for a and b\n");
  scanf("%d %d",&a,&b);
  c=(a>b) ? a : b;
  printf("c=%d\n",c);
}

#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter integers for a and b\n");
  scanf("%d %d",&a,&b);
  (a==b) ? printf("Equal\n") : (a>b) ? printf("%d\n",a) : printf("%d\n",b);
}
