/***************************************************************************************
C program to print the all trigonometric ratios if a value is given input through 
                                  keyboard
***************************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
  double angle_degrees, angle_radians;

  printf("Enter the angle in degrees\n");
  scanf("%lf",&angle_degrees);

  angle_radians = angle_degrees * (M_PI / 180.0);

  //Calculate trigonometric ratios
  double sine_value = sin(angle_radians);
  double cosine_value = cos(angle_radians);
  double tangent_value = tan(angle_radians);
  double cotangent_value = 1.0 / tangent_value;
  double secant_value = 1.0 / cosine_value;
  double cosecant_value = 1.0 / sine_value;

  //Print trigonometric ratios
  printf("Trigonometric ratios for %.2f degrees\n",angle_degrees);
  printf("Sine: %.4f\n",sine_value);
  printf("Cosine: %.4f\n",cosine_value);
  printf("Tangent: %.4f\n",tangent_value);
  printf("Cotangent: %.4f\n",cotangent_value);
  printf("Secant: %.4f\n",secant_value);
  printf("Cosecant: %.4f\n",cosecant_value);
}
