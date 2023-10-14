#include <stdio.h>

int main(void) {
  char arr[100], *p;

  printf("Enter a sentence: ");
  arr[0] = ' ';
  for(p = arr + 1; ; p++) {
    *p = getchar();
    if(*p == '?' || *p == '!' || *p == '.') {
      break;
    }
  }

  printf("Reversal of sentence:");
  for(char *temp = p - 1 ; temp >= arr; temp--) {
    char *end = temp;
    char *start;

    for(char *temp2 = end; temp2 >= arr; temp2--) {
      start = temp2;
      if(*start == ' ' || start <= arr) {
        break;
      }
    }

    for(char *temp2 = start; temp2 <= end; temp2++) {
      printf("%c", *temp2);
    }
    temp = start;
  }
  printf("%c\n", *p);

  return 0;
}