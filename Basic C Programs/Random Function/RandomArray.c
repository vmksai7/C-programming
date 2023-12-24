/*******************************************************************************
Random Array:
Implement a function to shuffle an array randomly using the rand() function in c
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int shuffledArray(int arr[], int size)
{

  // Seed for random number generation
  srand(time(NULL));

  // Start from the last element and swap one by one
  for(int i = size-1 ; i > 0 ; i--)
  {
    // Generate a random index between 0 and i (inclusive)
    int random = rand() % (i + 1);

    // Swap arr[i] with the element at randomIndex
    int temp = arr[i];
    arr[i] = arr[random];
    arr[random] = temp;
  }
}
int main()
{
  // Example usage
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int i,size;
  size=sizeof(arr)/sizeof(arr[0]);

  // Display the original array
  printf("Original Array: ");
  for(i=0;i<size;i++)
    printf("%d ",arr[i]);

  // Shuffle the array
  shuffledArray(arr,size);

  // Display the shuffled array
  printf("\nShuffled Array: ");
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
}
