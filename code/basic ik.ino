#include <math.h>
#define PI 3.14159
#include <stdio.h>

int main ()
{
float x = x; // Input X coordinate of the end effector
float z = z; // Input Z coordinate of the end effector
float y = y; // Input Y coordinate of the end effector

float zprime = sqrt(x*x + z*z); // Distance projected onto the Y-Z plane
float theta_abd = atan2(x,-z) * 180/PI; // Abduction/Adduction joint angle
printf("Theta A = %f\n",theta_abd);

float L1 = 18.2; // Upper leg length (replace with your value)
float L2 = 18.5; // Lower leg length (replace with your value)
float d = sqrt(y*y + zprime*zprime); // Distance from hip joint to foot

float alpha = atan2(-zprime, -y) * 180/PI; // Angle from hip to foot
float value = (L1*L1 + L2*L2 - d*d) / (2*L1*L2); // Cosine law term (must stay between -1 and 1)
float beta = acos(value) * 180/PI; // Knee angle from cosine law

float theta_knee = beta; // Final knee joint angle
float theta_hip = alpha - beta; // Final hip joint angle

printf("Theta H = %f\n", theta_hip);
printf("alpha = %.2f\n", alpha);