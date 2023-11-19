//C program to take input how many numbers and to ask for Ascending or Descending of data and print the result using a single function with Recursion

#include<stdio.h>

typedef enum{
  Ascending,
  Descending
}order;

//This is a AscDes function which gives you output in the form of Ascending format or Descending format as per the given input
void AscDes(int num,order input)
{
  //If input is 0 the data will be displayed in Ascending order and checks for if num is greater than 0
  if(input==0 && num>0) 
  {
    //Again goes to AscDes function with Ascending number
    AscDes(num-1,input); 
    printf("%d ",num);
  }
  //If input is 1 the data will be displayed in Descending order and checks for if num is greater than 0
  else if(input==1 && num>0)
  {
    printf("%d ",num); 
    //Again goes to AscDes function with Decreasing number
    AscDes(num-1,input); 
  }
}


int main()
{
  int num,input;
  printf("Enter how many numbers to be displayed\n");
  scanf("%d",&num);
  printf("Enter 0 for Ascending or 1 for Descending the given data\n");
  loop:
  scanf("%d",&input);
  if((input!=0) && (input!=1))
  {
    printf("Wrong input is entered, please enter 0 for Ascending or 1 for Descending\n");
    goto loop;
  }
  AscDes(num,input); //It goes to AscDes function to operate and give back the data
}
