#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct node {
  char word[100];
  struct node *next;
};

struct node *line = NULL;
int line_len = 0;
int num_words = 0;

void clear_line(void) {
  struct node *temp;

  while(line != NULL) {
    temp = line;
    line = line->next;
    free(temp);
  }
  line_len = 0;
  num_words = 0;
}

void add_word(const char *word) {
  struct node *new_word, **temp;
  new_word = malloc(sizeof(struct node) + strlen(word) + 1);
  strcpy(new_word->word, word);
  new_word->next = NULL;

  temp = &line;
  while(*temp != NULL) {
    temp = &(*temp)->next;
  }
  *temp = new_word;

  line_len += strlen(word);
  if(num_words > 0) {
    line_len++;
  }
  num_words++;
}

int space_remaining(void) {
  return MAX_LINE_LEN - line_len;
}

void write_line(void) {
  int extra_spaces, spaces_to_insert, num = 0;
  struct node *temp = line;

  extra_spaces = space_remaining();
  while(num < line_len && temp != NULL) {
    printf("%s", temp->word);
    if(num_words > 1) {
      spaces_to_insert = extra_spaces / (num_words - 1);
      for(int i = 1; i <= spaces_to_insert + 1; i++) {
        putchar(' ');
      }
      extra_spaces -= spaces_to_insert;
    }
    num += strlen(temp->word) + 1;
    num_words--;
    temp = temp->next;
  }
  putchar('\n');
}

void flush_line(void) {
  struct node *temp = line;

  if(line_len > 0) {
    for(int i = 0; temp != NULL; i++, temp = temp->next) {
      if(i > 0 && temp->next != NULL) {
        putchar(' ');
      }
      printf("%s ", temp->word);
    }
  }
  printf("\n");
  clear_line();
}
