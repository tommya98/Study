#include <stdio.h>
#include <string.h>

int main(void) {
  char str[31][21], temp;
  int i, j;

  printf("Enter a sentence: ");
  for(i = 0; ; i++) {
    for(j = 0; ;j++) {
      char ch = getchar();

      if(ch == ' ' || ch == '\n') {
        str[i][j] = '\0';
        break;
      }

      str[i][j] = ch;
    }
    if(str[i][j - 1] == '.' || str[i][j - 1] == '!' || str[i][j - 1] == '?') {
      break;
    }
  }

  temp = str[i][j - 1];
  str[i][j - 1] = '\0';

  printf("Reversal of sentence: ");
  for(int k = i; k >= 0; k--) {
    if(k == 0) {
      printf("%s%c\n", str[k], temp);
    }
    else {
      printf("%s ", str[k]);
    }
  }

  return 0;
}