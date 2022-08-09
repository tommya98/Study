#include <stdio.h>

int main(void) {
  int m1 = 0, d1 = 0, y1 = 0, m2 = 0, d2 = 0, y2 = 0, temp;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);
  
  while(1) {
    if(m1 == 0 && d1 == 0 && y1 == 0) {
      break;
    }
    if(m2 == 0 && d2 == 0 && y2 == 0) {
      m2 = m1;
      d2 = d1;
      y2 = y1;
      continue;
    }
    if(y1 < y2) {
      temp = y1;
      y1 = y2;
      y2 = temp;
      temp = m1;
      m1 = m2;
      m2 = temp;
      temp = d1;
      d1 = d2;
      d2 = temp;
    }
    else if(y1 == y2) {
      if(m1 < m2) {
        temp = y1;
        y1 = y2;
        y2 = temp;
        temp = m1;
        m1 = m2;
        m2 = temp;
        temp = d1;
        d1 = d2;
        d2 = temp;
      }
      else if(m1 == m2) {
        if(d1 < d2) {
          temp = y1;
          y1 = y2;
          y2 = temp;
          temp = m1;
          m1 = m2;
          m2 = temp;
          temp = d1;
          d1 = d2;
          d2 = temp;
        }
      }
    }

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
  }

  printf("%d/%d/%02d is earliest date\n", m2, d2, y2);
  
  return 0;
}