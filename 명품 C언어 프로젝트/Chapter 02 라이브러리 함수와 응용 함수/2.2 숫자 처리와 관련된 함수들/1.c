#include <stdio.h>

int main(void) {
  double num = 0.11111111111111111111111111111111;
  
  printf("%.16lf\n", num); // 0.1111111111111111 : 16자리까지 유효하다.
  printf("%.17lf\n", num); // 0.11111111111111110 : 17자리는 유효하지 않다.

  return 0;
}