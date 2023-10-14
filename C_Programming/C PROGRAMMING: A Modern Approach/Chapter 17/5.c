#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD 50
#define WORD_LEN 20

int compare_words(const void *w1, const void *w2);

int main(void) {
  char *words[MAX_WORD];
  int num_word = 0;

  for(int i = 0; ; i++) {
    char *temp = malloc(sizeof(WORD_LEN + 1));
    if(num_word == MAX_WORD) {
      printf("No space left\n");
      break;
    }

    printf("Enter word: ");
    for(int j = 0; j < WORD_LEN; j++) {
      scanf("%c", &temp[j]);
      if(temp[j] == '\n') {
        temp[j] = '\0';
        break;
      }
    }
    if(temp[0] == '\0') {
      break;
    }

    words[i] = temp;
    num_word++;
  }

  qsort(words, num_word, sizeof(char *), compare_words);

  for(int i = 0; i < num_word; i++) {
    printf("%s ", words[i]);
  }
  printf("\n");

  return 0;
}

int compare_words(const void *w1, const void *w2) {
  return strcmp(*(char **)w1, *(char **)w2);
}