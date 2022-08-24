#include <stdio.h>
#include <string.h>

void printfunc(char[]);

int main(void) {
  char str[100];

  printf("문자열을 입력하세요: ");
  scanf("%s", str);

  printfunc(str);

  return 0;
}

void printfunc(char str[]) {
  int a = 0, b = 0, c = 0, len = strlen(str);

  for(int i = 0; i < len; i++) {
    if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
      a++;
    }
    else if(str[i] >= '0' && str[i] <= '9') {
      b++;
    }
    else {
      c++;
    }
  }

  printf("알파벳: %d개, 숫자: %d개, 특수기호: %d개\n", a, b, c);
}