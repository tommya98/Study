#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp1, *fp2;
  char *file_name;
  char c1 = '\0', c2 = '\0';
  int fp1_len, count = 0, flag = 0;

  fp1 = fopen(argv[1], "rb");
  fp1_len = strlen(argv[1]);
  file_name = malloc(fp1_len + 5);
  strcpy(file_name, argv[1]);
  strcat(file_name, ".rle");
  fp2 = fopen(file_name, "wb");

  while(1) {
    int n;

    n = fscanf(fp1, "%c", &c1);
    if(n == -1) {
      fprintf(fp2, "%c%c", count, c2);
      break;
    }

    if(c1 != c2) {
      if(flag == 1) {
        fprintf(fp2, "%c%c", count, c2);
      }
      flag = 1;
      count = 1;
      c2 = c1;
    }
    else {
      count++;
    }
  }
  

  free(file_name);
  fclose(fp1);
  fclose(fp2);

  return 0;
}