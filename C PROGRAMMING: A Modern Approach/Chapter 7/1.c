#include <stdio.h>

int main(void) {
  int i, n;
  //short n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  //scanf("%hd", &n);

  for(i = 1; i <= n; i++)
    printf("%10d%10d\n", i, i * i);
    //printf("%10hd%10hd\n", i, i * i);

  // short is stored in 16bit. It overflow when n = 182.
  // int, long is stored in 32bit. It overflow when n = 46341.

  return 0;
}