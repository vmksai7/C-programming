/********************************************************************************
//Calculation on simple Interest
********************************************************************************/
#include<stdio.h>
int main()
{
  int princ,noy;
  float roi,si;
  princ=1000;
  noy=3;
  roi=8.5;
  //Formula for simple Interest
  si=princ*noy*roi/100;
  printf("%f\n",si);
  return 0;
}
