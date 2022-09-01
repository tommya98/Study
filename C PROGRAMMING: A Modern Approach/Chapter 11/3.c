#include <stdio.h>

void reduce(int, int, int*, int*);

int main(void) {
  int a, b, gcd;
  int m, n;

  printf("Enter a fraction: ");
  scanf("%d/%d", &a, &b);

  reduce(a, b, &m, &n);

  printf("In lowest terms: %d/%d\n", m, n);

  return 0;
}

void reduce(int numerator, int denominator,int *reduced_numerator, int *reduced_denominator) {
  int gcd;

  *reduced_numerator = numerator;
  *reduced_denominator = denominator;

  if(*reduced_denominator > *reduced_numerator) {
      int temp = *reduced_numerator;
      *reduced_numerator = *reduced_denominator;
      *reduced_denominator = temp;
  }

  while(*reduced_denominator) {
    if(*reduced_numerator == 0) {
      gcd = 0;
      break;
    }
    gcd = *reduced_numerator % *reduced_denominator;
    *reduced_numerator = *reduced_denominator;
    *reduced_denominator = gcd;
  }
  gcd = *reduced_numerator;

  *reduced_numerator = numerator / gcd;
  *reduced_denominator = denominator / gcd;
}