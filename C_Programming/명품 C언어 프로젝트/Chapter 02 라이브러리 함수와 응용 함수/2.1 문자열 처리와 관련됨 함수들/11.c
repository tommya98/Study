#include <stdio.h>
#include <string.h>

void phone_division(char*);

int main(void) {
  char arr[20];

  printf("휴대전화번호를 입력하세요: ");
  scanf("%s", arr);

  phone_division(arr);

  return 0;
}

void phone_division(char* arr) {
  int len = strlen(arr);

  for(int i = 0; i < len; i++) {
    if(arr[i] >= '0' && arr[i] <= '9') {
      printf("%c", arr[i]);
    }
  }
  printf("\n");
}