#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  char c;

  for(int i = 1; i < argc; i++) {
    fp = fopen(argv[i], "r");
    if(fp == NULL) {
      fprintf(stderr, "file open error\n");
      return 0;
    }
    while((c = fgetc(fp)) != EOF) {
      printf("%c", c);
    }
    fclose(fp);
  }

  return 0;
}