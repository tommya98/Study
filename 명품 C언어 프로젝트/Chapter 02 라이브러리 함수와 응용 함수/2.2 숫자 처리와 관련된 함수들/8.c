#include <stdio.h>

void number(int num);

int main(void) {
  int num;

  printf("수험번호를 입력하세요: ");
  scanf("%d", &num);

  number(num);

  return 0;
}

void number(int num) {
  char arr[8];

  sprintf(arr, "%08d", num);

  printf("제 %c%c시험지구\n", arr[0], arr[1]);
  printf("제 %c%c고사장\n", arr[2], arr[3]);
  printf("%c%c번 자리\n", arr[4], arr[5]);
  if((arr[7] - '0') % 2 == 0) {
    printf("짝수형 문제지\n");
  }
  else {
    printf("홀수형 문제지n");
  }
}