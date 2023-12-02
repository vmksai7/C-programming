//C program to count digits, white spaces and others

#include<stdio.h>
int main()
{
  int i,c,nwhite,nother,ndigit[10];
  nwhite=nother=0;
  for(i=0;i<10;i++)
    ndigit[i]=0;
  while((c=getchar())!=EOF) //Enter a single line statement to count digits, white spaces and others accurately
  {
    switch(c)
    {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9': ndigit[c-'0']++; //Increments the count of digits by 1
                break;
      case ' ':
      case '\n':
      case '\t': nwhite++; //Increments the count of while space/new line/tab by 1
                 break;
      default: nother++; //Increments the count of characters and special chars by 1
               break;
    }
  }
  printf("\n");
  printf("Digits=");
  for(i=0;i<10;i++)
    printf(" %d",ndigit[i]);
  printf(" white space = %d,other = %d\n",nwhite,nother);
} 
