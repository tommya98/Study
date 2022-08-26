#include <stdio.h>
#include <string.h>

char* right(int, char[]);

int main(void) {
  char str[100];
  int a;

  printf("문자열을 입력하세요: ");
  scanf("%[^\n]s", str);
  printf("길이를 입력하세요: ");
  scanf("%d", &a);

  printf("결과: %s\n", right(a, str));

  return 0;
}

char* right(int a, char str[]) {
  int len = strlen(str);

  memmove(str, str + len - a, a);
  str[a] = '\0';

  return str;
}