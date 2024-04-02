/*******************************************************************************
C program to concatenate two strings using pointers
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char str1[100],str2[100];
  char *result; //Declaring a character pointer
  int len1,len2;
  printf("Enter the first string\n");
  fgets(str1,sizeof(str1),stdin);
  printf("Enter the second string\n");
  fgets(str2,sizeof(str1),stdin);
  
  //Calculate the length of the input strings
  len1=strlen(str1);
  len2=strlen(str2);

  //Allocate memory for the result string
  result=(char *)malloc(len1+len2-1);
  if(result==NULL)
  {
    printf("Memory allocation failes\n");
    return 1;
  }

  //copying the str1 to result
  strcpy(result,str1);

  // Use pointer arithmetic to append the second string
  strcpy(result+len1-1,str2);

  //Print the concatenation string
  printf("Concatinating string: %s\n",result);

  //Free the allocated memory
  free(result);
  return 0;
}
