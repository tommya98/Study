#include <stdio.h>

void reverse_name(char *name);

int main(void) {
  char name[100];

  printf("Enter a first and last name: ");
  for(int i = 0; ; i++) {
    char ch = getchar();

    if(ch == '\n') {
      name[i] = '\0';
      break;
    }

    name[i] = ch;
  }

  reverse_name(name);

  return 0;
}

void reverse_name(char *name) {
  char first[100], last[100];
  int i = 0, j;

  while(name[i] == ' ') {
    i++;
  }

  j = 0;
  while(name[i] != ' ') {
    first[j++] = name[i++];
  }
  first[j] = '\0';

  while(name[i] == ' ') {
    i++;
  }

  j = 0;
  while(name[i] != ' ' && name[i] != '\n' && name[i] != '\0') {
    last[j++] = name[i++];
  }
  last[j] = '\0';

  printf("%s, %c\n", last, first[0]);
}