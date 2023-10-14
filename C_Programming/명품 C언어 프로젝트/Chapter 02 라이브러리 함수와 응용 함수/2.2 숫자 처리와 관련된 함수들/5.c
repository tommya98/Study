#include <stdio.h>

int main(void) {
  int a50000 = 0, a10000 = 0, a5000 = 0, a1000 = 0, a500 = 0, a100 = 0, a50 = 0, a10 = 0, a5 = 0, a1 = 0, money;

  printf("금액을 입력하세요: ");
  scanf("%d", &money);

  a50000 = money / 50000;
  money -= a50000 * 50000;
  a10000 = money / 10000;
  money -= a10000 * 10000;
  a5000 = money / 5000;
  money -= a5000 * 5000;
  a1000 = money / 1000;
  money -= a1000 * 1000;
  a500 = money / 500;
  money -= a500 * 500;
  a100 = money / 100;
  money -= a100 * 100;
  a50 = money / 50;
  money -= a50 * 50;
  a10 = money / 10;
  money -= a10 * 10;
  a5 = money / 5;
  money -= a5 * 5;
  a1 = money;

  printf("5만원권 1만원권 5천원권 1천원권 5백원권 1백원권 5십원권 1십원권 5원권 1원권\n");
  printf("%6d %7d %7d %7d %7d %7d %7d %7d %5d %5d\n", a50000, a10000, a5000, a1000, a500, a100, a50, a10, a5, a1);

  return 0;
}