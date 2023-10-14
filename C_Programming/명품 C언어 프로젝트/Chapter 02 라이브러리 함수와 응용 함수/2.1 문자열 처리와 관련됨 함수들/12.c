#include <stdio.h>
#include <string.h>

void car_division(char*);

int main(void) {
  char arr[20];

  printf("자동차번호를 입력하세요: ");
  scanf("%s", arr);

  car_division(arr);

  return 0;
}

void car_division(char* arr) {
  int len = strlen(arr);
  char temp[4];

  if(len == 9) {
    memmove(temp, &arr[2], 3);
    if(arr[0] <= '6') {
      printf("일반사업용 승용차\n");
    }
    else if(arr[0] <= '7') {
      if((strcmp(temp, "바") == 0) || (strcmp(temp, "사") == 0) || (strcmp(temp, "아") == 0) || (strcmp(temp, "자") == 0) || (strcmp(temp, "배") == 0)) {
        printf("사업용 승합자동차\n");
      }
      else {
        printf("개인용 승합자동차\n");
      }
    }
    else if(arr[0] == '9' && (arr[1] == '8' || arr[1] == '9')) {
      if((strcmp(temp, "바") == 0) || (strcmp(temp, "사") == 0) || (strcmp(temp, "아") == 0) || (strcmp(temp, "자") == 0) || (strcmp(temp, "배") == 0)) {
        printf("사업용 특수자동차\n");
      }
      else {
        printf("개인용 특수자동차\n");
      }
    }
    else {
      if((strcmp(temp, "바") == 0) || (strcmp(temp, "사") == 0) || (strcmp(temp, "아") == 0) || (strcmp(temp, "자") == 0) || (strcmp(temp, "배") == 0)) {
        printf("사업용 화물자동차\n");
      }
      else {
        printf("개인용 화물자동차\n");
      }
    }
  }
  else {
    memmove(temp, &arr[3], 3);
    if((strcmp(temp, "하") == 0) || (strcmp(temp, "허") == 0) || (strcmp(temp, "호") == 0)) {
      printf("대여사업용 승용자동차\n");
    }
    else {
      printf("개인용 승용자동차\n");
    }    
  }
}