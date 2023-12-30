//C program to rotate the bits of an integer left or right by a specified number of positions.

#include<stdio.h>

unsigned int rotatebits(unsigned int num, int position, char direction)
{
  int bits = sizeof(num) * 8; // Total bits in an integer

  //Ensure that position is within the valid range
  position = position % bits;

  if(direction == 'L')
  {
    //Rotate bits left
    return (num<<position) | (num>>(bits-position));
  }
  else if(direction == 'R')
  {
    //Rotate bits right
    return (num>>position) | (num<<(bits-position));
  }
  else
  {
    //Invalid direction
    printf("Invalid direction\n");

    return num;
  }
}
int main()
{
  unsigned int num;
  int position;
  char direction;

  //Input integer, position and rotation direction
  printf("Enter an integer: ");
  scanf("%d",&num);

  printf("Enter number of positions to rotate: ");
  scanf("%d",&position);

  printf("Enter the position direction (L for Left, R for Right): ");
  scanf(" %c",&direction);

  //Perform rotation and display the result
  unsigned int rotatednum = rotatebits(num, position, direction);
  printf("Original number: %u",num);
  printf("Rotated Number: %u",rotatednum);

  return 0;
}
