#include <stdio.h>
#include <math.h>

double roundoff(double num, double n);

int main(void) {
  double num;
  double n;

  printf("숫자를 입력하세요: ");
  scanf("%lf", &num);
  printf("반올림 할 자릿수를 입력하세요: ");
  scanf("%lf", &n);

  printf("반올림 결과: %lf\n", roundoff(num, n));

  return 0;
}

double roundoff(double num, double n) {
  int temp = num / n;

  if(temp % 10 >= 5) {
    return (temp / 10 + 1) * n * 10;
  }
  else {
    return (temp / 10 - 1) * n * 10;
  }
}