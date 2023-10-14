#include <stdio.h>
#include <string.h>

int func(char*, char);

int main(void) {
  char s[101];
  char c;

  scanf("%s %c", s, &c);

  printf("%d\n", func(s, c));

  return 0;
}

int func(char* s, char c) {
  int len = strlen(s);
  if(len == 0) {
    return 0;
  }
  else if(len == 1) {
    if(s[0] == c) {
      return 1;
    }
    else {
      return 0;
    }
  }
  else if(s[0] == c) {
    return 1 + func(s + 1, c);
  }
  else {
    return func(s + 1, c);
  }
}