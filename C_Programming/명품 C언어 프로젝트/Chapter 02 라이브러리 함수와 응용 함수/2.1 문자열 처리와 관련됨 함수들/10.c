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

  if(len == 10) {
    for(int i = 0; i < 10; i++) {
      printf("%c", arr[i]);
      if(i == 2 || i == 5) {
        printf("-");
      }
    }
    printf("\n");
  }
  else {
    for(int i = 0; i < 11; i++) {
      printf("%c", arr[i]);
      if(i == 2 || i == 6) {
        printf("-");
      }
    }
    printf("\n");
  }
}