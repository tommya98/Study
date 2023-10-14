#include <stdio.h>

typedef struct Time {
  int hour, minute, second;
} Time;

int main(void) {
  Time a, b, c;
  int t;

  scanf("%d %d %d", &b.hour, &b.minute, &b.second);
  scanf("%d %d %d", &a.hour, &a.minute, &a.second);

  if(a.second >= b.second) {
    c.second = a.second - b.second;
    t = 0;
  }
  else {
    c.second = a.second - b.second + 60;
    t = 1;
  }

  if(a.minute >= b.minute) {
    c.minute = a.minute - b.minute - t;
    t = 0;
  }
  else {
    c.minute = a.minute - b.minute - t + 60;
    t = 1;
  }

  c.hour = a.hour - b.hour - t;

  printf("%d %d %d\n", c.hour, c.minute, c.second);

  return 0;
}