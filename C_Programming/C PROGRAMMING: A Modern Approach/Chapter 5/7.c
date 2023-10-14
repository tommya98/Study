#include <stdio.h>

int main(void) {
  int a, b, c, d, max, min;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  if(a > b) {
    max = a;
    min = b;
  }
  else {
    max = b;
    min = a;
  }
  if(max < c) {
    max = c;
  }
  else if(min > c) {
    min = c;
  }
  if(max < d) {
    max = d;
  }
  else if(min > d) {
    min = d;
  }

  printf("Largest: %d\n", max);
  printf("Smallest: %d\n", min);
  
  return 0;
}