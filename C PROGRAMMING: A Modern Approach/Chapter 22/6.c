#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  unsigned char buffer[10];

  fp = fopen(argv[1], "rb");

  printf("Offset              Bytes              Characters\n");
  printf("------  -----------------------------  ----------\n");

  for(int offset = 0; ; offset += 10) {
    int i, n;
    n = fread(buffer, 1, 10, fp);
    if(n == 0) {
      break;
    }

    printf("%6d  ", offset);
    for(i = 0; i < n; i++) {
      printf("%.2X ", buffer[i]);
    }
    for(; i < 10; i++) {
      printf("   ");
    }
    printf(" ");
    for(i = 0; i < n; i++) {
      if(!isprint(buffer[i]))
        buffer[i] = '.';
      printf("%c", buffer[i]);
    }
    printf("\n");
  }

  fclose(fp);

  return 0;
}