#include <stdio.h>
#include <string.h>

int main(void) {
  char s[16];

  printf("Enter phone number: ");
  scanf("%s", s);

  printf("In numeric form: ");
  int len = strlen(s);
  for(int i = 0; i < len; i++) {
    if('A' <= s[i] && s[i]<= 'C') {
      s[i] = '2';
    }
    if('D' <= s[i] && s[i]<= 'F') {
      s[i] = '3';
    }
    if('G' <= s[i] && s[i]<= 'I') {
      s[i] = '4';
    }
    if('J' <= s[i] && s[i]<= 'L') {
      s[i] = '5';
    }
    if('M' <= s[i] && s[i]<= 'O') {
      s[i] = '6';
    }
    if('P' <= s[i] && s[i]<= 'S' && s[i] != 'Q') {
      s[i] = '7';
    }
    if('T' <= s[i] && s[i]<= 'V') {
      s[i] = '8';
    }
    if('X' <= s[i] && s[i]<= 'Y') {
      s[i] = '9';
    }
  }
  printf("%s\n", s);

  return 0;
}