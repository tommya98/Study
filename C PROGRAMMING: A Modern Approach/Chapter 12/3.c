#include <stdio.h>

int main(void) {
  char msg[100], *pos = msg;

  printf("Enter a message: ");
  while(1) {
    char temp = getchar();
    if(temp == '\n') {
      break;
    }
    *pos = temp;
    pos++;
  }

  printf("Reversal is: ");
  for(pos--; pos >= msg; pos--) {
    printf("%c", *pos);
  }
  printf("\n");

  return 0;
}