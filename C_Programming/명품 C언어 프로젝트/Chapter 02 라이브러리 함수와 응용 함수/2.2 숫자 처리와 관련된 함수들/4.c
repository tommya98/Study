#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int extraction(int num, int a, int b);

int main(void) {
  int num, a, b;

  printf("정수를 입력하세요: ");
  scanf("%d", &num);
  printf("출력을 시작할 숫자 번째수를 입력하세요: ");
  scanf("%d", &a);
  printf("출력할 숫자의 길이를 입력하세요: ");
  scanf("%d", &b);

  printf("결과: %d\n", extraction(num, a, b));

  return 0;
}

int extraction(int num, int a, int b) {
  char arr[100];

  sprintf(arr, "%d", num);
  arr[(a - 1) + b] = '\0';

  return atoi(&(arr[a - 1]));
}