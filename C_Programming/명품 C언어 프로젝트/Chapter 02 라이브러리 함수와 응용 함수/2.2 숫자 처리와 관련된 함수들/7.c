#include <stdio.h>

void birthday(int day);

int main(void) {
  int day;

  printf("생년월일을 입력하세요: ");
  scanf("%d", &day);

  birthday(day);

  return 0;
}

void birthday(int day) {
  char arr[6];
  sprintf(arr, "%06d", day);

  printf("19%c%c년 ", arr[0], arr[1]);
  if(arr[2] == '0') {
    printf("%c월 ", arr[3]);
  }
  else {
    printf("%c%c월 ", arr[2], arr[3]);
  }
  if(arr[4] == '0') {
    printf("%c일\n", arr[5]);
  }
  else {
    printf("%c%c일\n", arr[4], arr[5]);
  }
}