#include <stdio.h>

int main(void) {
  char msg[100];
  char *pos = &msg[0];

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
  for(pos--; pos >= &msg[0]; pos--) {
    printf("%c", *pos);
  }
  printf("\n");

  return 0;
}