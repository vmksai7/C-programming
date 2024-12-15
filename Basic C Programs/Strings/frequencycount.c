/*******************************************************************************
C Program that takes an input string from the user and prints the frequency of
characters in alphabetical order:
******************************************************************************/
#include<stdio.h>

int main()
{
    char str[50];
    char visited[50]={0};
    
    int i,j;
    printf("Enter a string:\n");
    scanf("%s",str);
    
    for(i=0;str[i]!='\0';i++)
    {
        if(visited[i])
        {
            continue;
        }
        int cnt=1;
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i] == str[j])
            {
                cnt++;
                visited[j]=1;
            }
        }
        printf("str[%d]%c = %d\n",i,str[i],cnt);
    }
}
