#include <stdio.h>

int main(void) {
  double ep, e = 1, p;

  printf("Enter the epsilon: ");
  scanf("%lf", &ep);

  for(int i = 1; ; i++) {
    p = 1;
    for(int j = 1; j <= i; j++) {
      p *= j;
    }
    if(1 / p < ep) {
      break;
    }
    e += 1 / p;
  }

  printf("%lf\n", e);

  return 0;
}