#include <stdio.h>
#include <string.h>

void my_strcat(char*, char*);

int main(void) {
  char str1[100], str2[100];

  printf("문자열 1 입력: ");
  scanf("%s", str1);
  printf("문자열 2 입력: ");
  scanf("%s", str2);

  my_strcat(str1, str2);

  printf("결과: %s\n", str1);  

  return 0;
}

void my_strcat(char* d, char* s) {
  int len_d = strlen(d), len_s = strlen(s);

  for(int i = 0; i <= len_s; i++) {
    d[len_d + i] = s[i];
  }
}