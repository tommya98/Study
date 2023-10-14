#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  FILE *fp1, *fp2;
  char *file_name;
  char c, n, t;
  int fp2_len, flag = 0;

  fp1 = fopen(argv[1], "rb");
  fp2_len = strlen(argv[1]) - 4;
  file_name = malloc(fp2_len + 1);
  strncpy(file_name, argv[1], fp2_len);
  fp2 = fopen(file_name, "wb");

  while(1) {
    t = fscanf(fp1, "%c", &c);
    if(t == -1) {
      break;
    }
    if(flag == 0) {
      n = c;
      flag = 1;
    }
    else {
      flag = 0;
      for(int i = 0; i < n; i++) {
        fprintf(fp2, "%c", c);
      }
    }
  }

  free(file_name);
  fclose(fp1);
  fclose(fp2);

  return 0;
}