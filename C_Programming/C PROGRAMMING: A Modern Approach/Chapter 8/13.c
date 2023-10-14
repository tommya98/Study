#include <stdio.h>

int main(void) {
  char first, last[20];

  printf("Enter a first and last name: ");
  scanf("%c", &first);
  while(1) {
    char temp = getchar();
    if(temp == ' ') {
      break;
    }
  }
  scanf("%s", last);

  printf("%s, %c.\n", last, first);

  return 0;
}