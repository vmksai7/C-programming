//C program to print the random number from range 50 to 100

Method 1:

#include<stdio.h>
#include<stdlib.h>

int main()
{
    srand(time(NULL));
    while(1)
    {
        int random = rand() % 100 +1;
        if(random>50)
        {
            printf("%d\n",random);
            return 0;
        }
    }

}

Method 2:

#include<stdio.h>
#include<stdlib.h>

int main()
{
    srand(time(NULL));
    int random = rand() % 51 + 50;
    printf("%d\n",random);
}
