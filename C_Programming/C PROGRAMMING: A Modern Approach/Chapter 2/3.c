#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main(void) {
  float r, v;
  printf("radius : ");
  scanf("%f",&r);
  v = 4.0f/3.0f * M_PI * r * r * r;
  printf("volume of a sphere with a 10-meter radius : %f\n",v);

  return 0;
}