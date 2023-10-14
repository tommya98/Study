#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool is_palindrom(const char *message);

int main(void) {
  char str[100];

  printf("Enter a message: ");
  for(int i = 0; ; i++) {
    char ch = getchar();

    if(ch == '\n') {
      str[i] = '\0';
      break;
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
      str[i] = tolower(ch);
    }
    else {
      i--;
    }
  }

  if(is_palindrom(str)) {
    printf("Palindrome\n");
  }
  else {
    printf("Not a palindrome\n");
  }

  return 0;
}

bool is_palindrom(const char *message) {
  int a = 0, b = strlen(message) - 1;

  while(a < b) {
    if(message[a++] != message[b--]) {
      return false;
    }
  }

  return true;
}