/*C program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers 
and by direct computation. Harder if you compute them: determine the ranges of the various 
floating-point types.*/
  
#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
  //using standard headers
  printf("Ranges using standard headers:\n");
  printf("CHAR_MIN: %d\n",CHAR_MIN);
  printf("CHAR_MAX: %d\n",CHAR_MAX);
  printf("SCHAR_MIN: %d\n",SCHAR_MIN);
  printf("SCHAR_MAX: %d\n",SCHAR_MAX);
  printf("UCHAR_MAX: %d\n",UCHAR_MAX);

  printf("SHRT_MIN: %d\n",SHRT_MIN);
  printf("SHORT_MAX: %d\n",SHRT_MAX);
  printf("USHORT_MAX: %d\n",USHRT_MAX);

  printf("INT_MIN: %d\n",INT_MIN);
  printf("INT_MAX: %d\n",INT_MAX);
  printf("UINT_MAX: %d\n",UINT_MAX);

  printf("LONG_MIN: %d\n",LONG_MIN);
  printf("LONG_MAX: %d\n",LONG_MAX);
  printf("ULONG_MAX: %d\n",ULONG_MAX);

  //Direct computation
  printf("Ranges using direct computation\n");
  printf("Char:\n");
  printf("Signed char: %d to %d\n",-(char)((unsigned char)~0>>1)-1,(char)((unsigned char)~0>>1));
  printf("Unsigned char: 0 to %u\n",(unsigned char)~0);
    
  printf("Short:\n");
  printf("Signed short: %d to %d\n",-(short)((unsigned short)~0>>1)-1,(short)((unsigned short)~0>>1));
  printf("Unsigned short: 0 to %u\n",(unsigned short)~0);
  
  printf("Int:\n");
  printf("Signed Int: %d to %d\n",-(int)((unsigned int)~0>>1)-1,(int)((unsigned int)~0>>1));
  printf("Unsigned Int: 0 to %u\n",(int)(unsigned int)~0);
  
  printf("Long:\n");
  printf("Signed Long: %d to %d\n",-(long)((unsigned long)~0>>1)-1,(long)((unsigned long)~0>>1));
  printf("Unsigned Long: 0 to %u\n",(long)(unsigned long)~0);

  //Floating point types
  printf("Floating point types:\n");
  printf("Float: %E to %E\n",FLT_MIN,FLT_MAX);
  printf("Doouble: %E to %E\n",DBL_MIN,DBL_MAX);
  printf("Long Double: %LE to %LE\n",LDBL_MIN,LDBL_MAX);
}