#include <stdio.h>
#include <math.h>

int main(void) {
  int n;
  double ny, y = 1;

  printf("Enter a positive number: ");
  scanf("%d", &n);

  while(1) {
    ny = ((n / y) + y) / 2;
    if(fabs(ny - y) < 0.00001) {
      y = ny;
      break;
    }
    y = ny;
  }

  printf("Square root: %.5lf\n", y);

  return 0;
}