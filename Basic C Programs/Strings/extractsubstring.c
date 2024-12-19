/*******************************************************************************
C Program to extract a substring from a given string using indices
******************************************************************************/
#include<stdio.h>
#include<string.h>

void fun(char src[], char word[], int num1, int num2)
{
    int i,j=0;
    
    for(i=num1;i<=num2 && src[i] != '\0';i++)
    {
        word[j++] = src[i];
    }
    word[j] = '\0';
    
}

int main()
{
    char str[50],str1[50];
    int p1,p2;
    
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    
    getchar();
    
    printf("Enter first index: ");
    scanf("%d",&p1);
    printf("Enter second index: ");
    scanf("%d",&p2);
    
    fun(str,str1,p1,p2);
    
    printf("%s\n",str1);
}
