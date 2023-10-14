#include <stdio.h>

int main(void) {
  int m, n, gcd;

  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);

  if(n > m) {
    int temp = m;
    m = n;
    n = temp;
  }

  while(n) {
    if(m == 0) {
      gcd = 0;
      break;
    }
    gcd = m % n;
    m = n;
    n = gcd;
  }
  gcd = m;

  printf("Greatest common divisor: %d\n", gcd);

  return 0;
}