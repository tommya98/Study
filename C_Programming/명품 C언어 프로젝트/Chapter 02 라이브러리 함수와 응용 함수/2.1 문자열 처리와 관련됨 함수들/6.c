#include <stdio.h>
#include <string.h>

char* mid(int, int, char[]);

int main(void) {
  char str[100];
  int a, b;

  printf("문자열을 입력하세요: ");
  scanf("%s", str);
  getchar();
  printf("처음과 길이를 입력하세요: ");
  scanf("%d %d", &a, &b);

  printf("중간의 문자열: %s\n", mid(a, b, str));

  return 0;
}

char* mid(int a, int b, char str[]) {
  for(int i = 0; i < b; i++) {
    str[i] = str[a + i - 1];
  }
  str[b] = '\0';

  return str;
}