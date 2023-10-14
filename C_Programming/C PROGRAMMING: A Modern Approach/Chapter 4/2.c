#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a three-digit number: ");
  scanf("%d", &n);

  printf("The reversal is: %d\n", (n % 10) * 100 + (n / 10) % 10 * 10 + n / 100);

  return 0;
}