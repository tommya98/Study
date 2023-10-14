#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void time_division(char[]);

int main(void) {
  char str[100];

  printf("시간을 입력하세요: ");
  scanf("%s", str);

  time_division(str);

  return 0;
}

void time_division(char str[]) {
  int h, m, s, t1 = 0, t2 = 0, len = strlen(str);
  char temp1[2], temp2[2], temp3[2];

  for(int i = 0; i < len; i++) {
    if(str[i] == ':') {
      if(t1 == 0) {
        t1 = i;
      }
      else {
        t2 = i;
      }
    }
  }

  if(t1 == 0) {
    for(int i = 0; i < 6; i += 2) {
      memmove(temp1, str + i, 2);
      if(i == 0) {
        h = atoi(temp1);
      }
      else if(i == 2) {
        m = atoi(temp1);
      }
      else {
        s = atoi(temp1);
      }
    }
  }
  else {
    memmove(temp1, str, t1);
    h = atoi(temp1);

    memmove(temp2, str + t1 + 1, t2 - t1 - 1);
    m = atoi(temp2);

    memmove(temp3, str + t2 + 1, len - t2 - 1);
    s = atoi(temp3);
  }

  if(h <= 11) {
    printf("오전 %d시 %d분 %d초\n", h, m, s);
  }
  else if(h == 12) {
    printf("오후 %d시 %d분 %d초\n", h, m, s);
  }
  else if(h <= 23) {
    printf("오후 %d시 %d분 %d초\n", h - 12, m, s);
  }
  else if(h == 24) {
    printf("오전 %d시 %d분 %d초\n", 0, m, s);
  }

}