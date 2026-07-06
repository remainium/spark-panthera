#include <math.h>
#define PI 3.14159
#include <stdio.h>
int main ()
{
float x = x; // input your end effector coordinates
float z = z;
float y = y;
float zprime = sqrt(x*x + z*z);
float theta_abd = atan2(x,-z) *  180/PI;
printf("Theta A = %f\n",theta_abd);

float L1 = 18.2; // replace with your two leg lengths
float L2 = 18.5;
float d = sqrt(y*y + zprime*zprime);


 
 float alpha = atan2(-zprime, -y) * 180/PI;
 float value = (L1*L1 + L2*L2 - d*d) / (2*L1*L2);
 float beta = acos(value) * 180/PI;
 float  theta_knee = beta;
 float theta_hip = alpha - beta;
 printf("Theta H = %f\n", theta_hip);
 printf("alpha = %.2f\n", alpha);
 printf("beta = %.2f\n", beta);
 printf("acos input = %f\n", value);
 printf("d = %f\n", d);
 printf("Theta K = %f\n",theta_knee);
  return 0;
}
