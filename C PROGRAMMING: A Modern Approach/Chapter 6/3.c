#include <stdio.h>

int main(void) {
  int a, b, m, n,gcd;

  printf("Enter a fraction: ");
  scanf("%d/%d", &a, &b);

  m = a;
  n = b;

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

  printf("In lowest terms: %d/%d\n", a / gcd, b / gcd);

  return 0;
}