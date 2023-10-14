#include <stdio.h>
#include <string.h>

int main(void) {
  char smallest_word[21], largest_word[21], input_word[21];
  int a = 0;

  while(1) {
    printf("Enter word: ");
    scanf("%s", input_word);

    if(a == 0) {
      strcpy(smallest_word, input_word);
      strcpy(largest_word, input_word);
      a = 1;
    }
    else {
      if(strcmp(smallest_word, input_word) > 0) {
        strcpy(smallest_word, input_word);
      }
      if(strcmp(largest_word, input_word) < 0) {
        strcpy(largest_word, input_word);
      }
    }

    if(strlen(input_word) == 4) {
      break;
    }
  }

  printf("\nSmallest word: %s\n", smallest_word);
  printf("Largest word: %s\n", largest_word);

  return 0;
}