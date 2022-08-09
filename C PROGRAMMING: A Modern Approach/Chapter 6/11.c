#include <stdio.h>

int main(void) {
  int n;
  double e = 1;

  printf("Enter the number: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    double p = 1;
    for(int j = 1; j <= i; j++) {
      p *= j;
    }
    e += 1 / p;
  }

  printf("%lf\n", e);

  return 0;
}