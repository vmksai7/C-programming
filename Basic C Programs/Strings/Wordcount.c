/*******************************************************************************
C program to count the number of words in a string
*******************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int word=0,i;

    printf("Enter a string\n");
    gets(str);

    //Finding the length of a string
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        if((str[i]==' ') || (str[i]=='\n') || (str[i]=='\t'))
        {
            word++;
        }
    }
    printf("Words in a given string is %d\n",word+1);
}

