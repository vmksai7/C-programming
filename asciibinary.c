#include<stdio.h>
int main()
{
  int data=0,bit;
  printf("Charatcer\t ASCII\t Binary\n");
  LOOP:
  printf("%c\t %d\t",data,data);
  bit=7;
  BIN:
  if((data>>bit)&1)
    printf("1");
  else
    printf("0");
  bit--;
  if(bit>=0)
    goto BIN;
  printf("\n");
  data++;
  if(data<128)
    goto LOOP;
}
