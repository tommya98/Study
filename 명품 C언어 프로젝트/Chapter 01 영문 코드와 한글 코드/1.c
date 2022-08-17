#include <stdio.h>

int main(void) {
  char c;

  scanf("%c", &c);

  if(c >= 'A' && c <= 'z') {
    printf("영문\n");
  }
  else {
    printf("한글\n");
  }
  
  return 0;
}