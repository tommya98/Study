#include <stdio.h>
#include <string.h>

void reverse(char *message);

int main(void) {
  char str[100];

  printf("Enter a message: ");
  for(int i = 0; ; i++) {
    char ch = getchar();

    if(ch == '\n') {
      str[i] = '\0';
      break;
    }

    str[i] = ch;
  }

  reverse(str);

  printf("Reversal is: ");
  printf("%s\n", str);

  return 0;
}

void reverse(char *message) {
  int a = 0, b = strlen(message) - 1;
  char temp;

  while(a < b) {
    temp = message[a];
    message[a++] = message[b];
    message[b--] = temp;
  }
}