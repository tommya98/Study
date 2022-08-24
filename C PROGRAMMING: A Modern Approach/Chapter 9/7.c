#include <stdio.h>

int power(int, int);

int main(void) {
  int x, n;

  printf("Enter the value for x: ");
  scanf("%d", &x);
  printf("Enter the value for n: ");
  scanf("%d", &n);

  printf("%d^%d: %d\n", x, n, power(x, n));

  return 0;
}

int power(int x, int n) {
  if(n == 0) {
    return 1;
  }
  else if(n % 2 == 0) {
    int temp = power(x, n / 2);
    return temp * temp;
  }
  else {
    return x * power(x, n - 1);
  }
}