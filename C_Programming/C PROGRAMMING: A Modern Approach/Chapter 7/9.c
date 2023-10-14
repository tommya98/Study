#include <stdio.h>

int main(void) {
  int h, m, time;
  char t;

  printf("Enter a 12-hour time: ");
  scanf("%d:%d", &h, &m);
  scanf("%c", &t);
  if(t == ' ') {
    scanf("%c", &t);
  }
  if(t == 'p' || t == 'P') {
    time = h * 60 + m + 12 * 60;
  }
  else if(t == 'a' || t == 'A') {
    time = h * 60 + m;
  }

  printf("Equivalent 24-hour time: %d:%d\n", time / 60, time % 60);

  return 0;
}