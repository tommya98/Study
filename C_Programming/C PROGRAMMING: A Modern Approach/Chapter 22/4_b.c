#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  char c, flag = 0;
  int num = 0;

  fp = fopen(argv[1], "r");
  if(fp == NULL) {
    fprintf(stderr, "file open error\n");
    return 0;
  }
  while((c = fgetc(fp)) != EOF) {
    if(flag == 0) {
      num++;
      flag = 1;
    }
    if(c == ' ') {
      flag = 0;
    }
  }
  fclose(fp);
  printf("%d\n", num);

  return 0;
}