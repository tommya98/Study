#include <stdio.h>

int func(int, int);

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);

  printf("%d\n", func(a, b));

  return 0;
}

int func(int a, int b) {
  if(a == 0) {
    return b;
  }
  else if(b == 0) {
    return a;
  }
  else {
    if(a > b) {
      return func(b, a);
    }
    else {
      return func(a, b % a);
    }
  }
}