#include <stdio.h>

int modulo(int, int);

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);

  printf("%d\n", modulo(a, b));

  return 0;
}

int modulo(int a, int b) {
  return a % b;
}