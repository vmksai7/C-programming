/*******************************************************************************
C program to count number of lines from a given input
*******************************************************************************/
#include<stdio.h>
int main()
{
  int line=0,c;

  //Checks if given character is not EOF and if its true enters while loop
  while((c=getchar())!=EOF) 
    if(c=='\n') //Checking if the given statement contains new lines
      line++; //If found new line increments line value
  printf("Number of lines in a given input is: %d\n",line); //prints number of lines present in the given input
}

//C program to count number of character and number of lines from a given input

#include<stdio.h>
int main()
{
  int ch=0,line=0,c;

  //Checks if given character is not EOF and if its true enters while loop
  while((c=getchar())!=EOF)
  {
      ch++; //Increments character value
      if(c=='\n') //Checking if the given statement contains new lines
        line++; //If found new line increments line value
  }
  printf("%d\n",ch); //prints number of characters present in the given input
  printf("%d\n",line); //prints number of lines present in the given input
}

//C program to count blanks, tabs and new lines

#include<stdio.h>
int main()
{
  int space=0,tab=0,line=0,c;

  //Checks if given character is not EOF and if its true enters while loop
  while((c=getchar())!=EOF) 
  {
    if(c==' ') //Checking if the given statement contains spaces
      space++; //Increments space value
    else if(c=='\t') //Checking if the given statement contains tabs
      tab++; //Increments tab value
    else if(c=='\n') //Checking if the given statement contains new lines
      line++; //Increments line value
  }
  printf("Number of spaces in a given input is %d\n",space); //prints number of spaces present in the given input
  printf("Number of tabs in a given input is %d\n",tab); //prints number of tabs present in the given input
  printf("Number of lines in a given input is %d\n",line); //prints number of lines present in the given input
}
