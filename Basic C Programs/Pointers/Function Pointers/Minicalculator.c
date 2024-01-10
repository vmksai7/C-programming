/*******************************************************************************
C Program of a simple mini calculator of addition, subtraction, multiplication
                  and modulo using function pointer
*******************************************************************************/

#include<stdio.h>

void add(int a,int b)
{
    printf("Addition = %d\n",a+b);
}

void sub(int a,int b)
{
    printf("Subtraction = %d\n",a-b);
}

void mul(int a,int b)
{
    printf("Multiplication = %d\n",a*b);
}

void div(int a,int b)
{
    printf("Division = %d\n",a/b);
}

void mod(int a,int b)
{
    printf("Modulo = %d\n",a%b);
}

int main()
{
    int ch,a,b;
    void (*fptr[5])(int,int)={add,sub,mul,div,mod};

    printf("Enter your choice (0-Addition, 1-Subtraction, 2-Multiplication,"
      "3-Division 4-Modulo)\n");
    scanf("%d",&ch);

    printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);

    fptr[ch](a,b);
}
