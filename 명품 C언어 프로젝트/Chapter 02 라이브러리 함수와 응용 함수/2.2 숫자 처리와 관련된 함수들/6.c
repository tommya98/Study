#include <stdio.h>
#include <math.h>

int main(void) {
  double a;
  int i = 3;

  printf("실수를 입력하세요: ");
  scanf("%lf", &a);

  printf("지수함수 e^%.1lf = %lf\n", a, exp(a));
  printf("지수함수 %.1lf*2^%d = %.1lf\n", a, i, ldexp(a, i));
  printf("로그함수 log(%.1lf) = %lf\n", a, log(a));
  printf("로그함수 log10(%.1lf) = %lf\n", a, log10(a));
  printf("삼각함수 sin(%.1lf) = %lf\n", a, sin(a));
  printf("삼각함수 cos(%.1lf) = %lf\n", a, cos(a));
  printf("삼각함수 tan(%.1lf) = %lf\n", a, tan(a));
  printf("삼각함수 sinh(%.1lf) = %lf\n", a, sinh(a));
  printf("삼각함수 sinh(%.1lf) = %lf\n", a, cosh(a));
  printf("삼각함수 sinh(%.1lf) = %lf\n", a, tanh(a));

  return 0;
}