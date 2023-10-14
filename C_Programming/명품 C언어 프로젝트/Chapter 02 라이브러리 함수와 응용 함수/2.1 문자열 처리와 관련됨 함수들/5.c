#include <stdio.h>
#include <string.h>

int location(char[], char);

int main(void) {
  char str[100], c;
  int pos;

  printf("문자열을 입력하세요: ");
  scanf("%s", str);
  getchar();
  printf("문자를 입력하세요: ");
  scanf("%c", &c);

  pos = location(str, c);

  printf("위치는 %d이다.\n", pos);

  return 0;
}

int location(char str[], char c) {
  int len = strlen(str), a = -1;

  for(int i = 0; i < len; i++) {
    if(str[i] == c) {
      a = i;
      break;
    }
  }

  return a + 1;
}