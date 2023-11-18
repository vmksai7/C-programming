//C program to convert Celsius to Fahrenheit table from 0 to 300

#include<Stdio.h>

main()
{
  int fahr,cels;
  int first,last,step;
  first=0; //lower limit of temp scale
  last=300; //upper limit
  step=20; //step value
  cels=first;
  while(cels<=last)
  {
    fahr=(cels*1.8)+32; //Converting formula of celsius to fahrenheit
    printf("%d\t %d\n",fahr,cels);
    cels=cels+step; //Incrementing celsius with step value
  }
}

//Same program by using for loop and #define statements

#include<stdio.h>

#define FIRST 0
#define LAST 300
#define STEP 20

main()
{
  for(int cels=FIRST;cels<=LAST;cels+=STEP)
    printf("%d\t %f\n",cels,((cels*1.8)+32));
}
