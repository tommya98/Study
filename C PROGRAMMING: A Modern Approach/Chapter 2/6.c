#include <stdio.h>

int main(void) {
  float x, ret;

  printf("enter a value of x : ");
  scanf("%f", &x);
  ret = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("answer : %f", ret);

  return 0;
}