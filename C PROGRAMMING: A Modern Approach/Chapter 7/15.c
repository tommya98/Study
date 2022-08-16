#include <stdio.h>

int main(void) {
  int n;

  // short result = 1; largest value of n for program correctly : 7
  // int result = 1; largest value of n for program correctly : 13
  // long result = 1; largest value of n for program correctly : 20
  // long long result = 1; largest value of n for program correctly : 20
  // float result = 1; largest value of n for program correctly : 34
  // double result = 1; largest value of n for program correctly : 170
  long double result = 1; // largest value of n for program correctly : 1754


  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for(int i = 2; i <= n; i++) {
    result *= i;
  }

  printf("Factorial of %d: %Lf\n", n, result);

  return 0;
}