#include <stdio.h>
#include <string.h>

int main(void) {
  char arr[1000];

  printf("한글 문자열 입력: ");
  scanf("%s", arr);

  int len = strlen(arr);
  for(int i = 0; i < len; i++) {
    unsigned char code = arr[i];
    printf("%x ", code);
    if((i + 1) % 3 == 0) {
      printf("\n");
    }
  }
  printf("\n");

  return 0;
}