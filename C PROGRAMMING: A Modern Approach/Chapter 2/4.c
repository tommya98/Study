#include <stdio.h>

int main(void) {
  float a, b;

  printf("Enter an amount : ");
  scanf("%f", &a);
  b = a * 1.05;
  printf("With tax Added : $%.2f\n",b);

  return 0;
}