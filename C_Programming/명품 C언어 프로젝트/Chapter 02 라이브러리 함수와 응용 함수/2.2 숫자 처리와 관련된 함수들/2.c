#include <stdio.h>

int main(void) {
  int year;
  char a[10][3] = {{"경"}, {"신"}, {"임"}, {"계"}, {"갑"}, {"을"}, {"병"}, {"정"}, {"무"}, {"기"}};
  char b[12][3] = {{"신"}, {"유"}, {"술"}, {"해"}, {"자"}, {"축"}, {"인"}, {"묘"}, {"진"}, {"사"}, {"오"}, {"미"}};

  printf("서기 년도를 입력하세요: ");
  scanf("%d", &year);

  printf("%c%c%c%c%c%c년", a[year % 10][0], a[year % 10][1], a[year % 10][2], b[year % 12][0], b[year % 12][1], b[year % 12][2]);

  return 0;
}