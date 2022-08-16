#include <stdio.h>

int main(void) {
  int count = 0;
  char c;

  printf("Enter a sentence: ");
  while((c = getchar()) != '\n') {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      count++;
    }
  }

  printf("Your sentence contains %d vowels.\n", count);

  return 0;
}