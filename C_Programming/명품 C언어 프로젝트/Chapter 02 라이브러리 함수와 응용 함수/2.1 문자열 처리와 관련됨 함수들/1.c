#include <stdio.h>
#include <ctype.h>
#include <string.h>

void upper_lower(char[]);

int main(void) {
  char str[100];

  printf("영문 문자열을 입력하세요: ");
  scanf("%s", str);
  upper_lower(str);
  printf("결과: %s\n", str);

  return 0;
}

void upper_lower(char str[]) {
  int len = strlen(str);
  for(int i = 0; i < len; i++) {
    if(str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = tolower(str[i]);
    }
    else {
      str[i] = toupper(str[i]);
    }
  }
}