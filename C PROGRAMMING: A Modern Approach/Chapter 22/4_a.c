#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  char c;
  int num = 0;

  fp = fopen(argv[1], "r");
  if(fp == NULL) {
    fprintf(stderr, "file open error\n");
    return 0;
  }
  while((c = fgetc(fp)) != EOF) {
    num++;
  }
  fclose(fp);
  printf("%d\n", num);

  return 0;
}