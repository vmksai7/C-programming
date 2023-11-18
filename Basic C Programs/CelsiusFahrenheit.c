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
