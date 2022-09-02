#include <stdio.h>

void phone_division(char*);

int main(void) {
  char arr[20];

  printf("전화번호를 입력하세요: ");
  scanf("%s", arr);

  phone_division(arr);

  return 0;
}

void phone_division(char* arr) {
  if(arr[1] == '2') {
    printf("서울시 %c%c%c국 %c%c%c%c번\n", arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8]);
    return;
  }
  else if(arr[1] == '5' && arr[2] == '1') {
    printf("부산광역시 ");
  }
  else if(arr[1] == '5' && arr[2] == '3') {
    printf("대구광역시 ");
  }
  else if(arr[1] == '3' && arr[2] == '2') {
    printf("인천광역시 ");
  }
  else if(arr[1] == '6' && arr[2] == '2') {
   printf("광주광역시 "); 
  }
  else if(arr[1] == '4' && arr[2] == '2') {
    printf("대전광역시 ");
  }
  else if(arr[1] == '5' && arr[2] == '2') {
    printf("울산광역시 ");
  }
  else if(arr[1] == '4' && arr[2] == '4') {
    printf("세종특별자치시 ");
  }
  else if(arr[1] == '3' && arr[2] == '1') {
    printf("경기도 ");
  }
  else if(arr[1] == '3' && arr[2] == '3') {
    printf("강원도 ");
  }
  else if(arr[1] == '4' && arr[2] == '3') {
    printf("충청북도 ");
  }
  else if(arr[1] == '4' && arr[2] == '1') {
    printf("충청남도 ");
  }
  else if(arr[1] == '6' && arr[2] == '3') {
    printf("전라북도 ");
  }
  else if(arr[1] == '6' && arr[2] == '1') {
    printf("전라남도 ");
  }
  else if(arr[1] == '5' && arr[2] == '4') {
    printf("경상북도 ");
  }
  else if(arr[1] == '5' && arr[2] == '5') {
    printf("경상남도 ");
  }
  else if(arr[1] == '6' && arr[2] == '4') {
    printf("제주특별자치도 ");
  }

  printf("%c%c%c국 %c%c%c%c번\n", arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
}