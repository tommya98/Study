#include <stdio.h>
#include <string.h>

void func1(char[]);
void func2(char[]);

int main(void) {
  char text[]="program을 실행하기 전에 compile을 해야 한다.";

  func1(text);
  func2(text);
  func1(text);

  return 0;
}

void func1(char text[]) {
  int len = strlen(text);
  char temp[len + 1];
  temp[len] = '\0';

  for(int i = len - 1; i >= 0;) {
    if(text[i] < 0) {
      temp[len - i - 1] = text[i - 2];
      temp[len - i] = text[i - 1];
      temp[len - i + 1] = text[i];
      i -= 3;
    }
    else {
      temp[len - i - 1] = text[i];
      i--;
    }
  }

  printf("%s\n", temp);
}

void func2(char text[]) {
  char *temp = strstr(text, "compile");
  int len1 = strlen("compile");
  int len2 = strlen("컴파일");

  strncpy(temp, "컴파1", 7);
}