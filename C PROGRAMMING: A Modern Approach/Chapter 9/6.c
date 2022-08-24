#include <stdio.h>

int poly(int);

int main(void) {
  int x;
  
  printf("Enter a value for x: ");
  scanf("%d", &x);

  printf("Result: %d\n", poly(x));

  return 0;
}

int poly(int x) {
  int x2, x3, x4, x5;

  x2 = x * x;
  x3 = x2 * x;
  x4 = x3 * x;
  x5 = x4 * x;

  return 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6;
}