#include <stdio.h>
#include <string.h>

int main(void) {
  int len;
  char str[101];

  scanf("%s", str);

  len = strlen(str);

  for(int i = 0; i < len; i++) {
    char temp = str[0];
    printf("%s\n", str);
    for(int j = 0; j < len - 1; j++)
      str[j] = str[j + 1]; 
    str[len - 1] = temp;
  }

  return 0;
}