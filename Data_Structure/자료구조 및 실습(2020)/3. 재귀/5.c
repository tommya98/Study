#include <stdio.h>

void func(int, int, int, int);

int main(void) {
  int n;

  scanf("%d", &n);

  func(n, 'A', 'B', 'C');

  return 0;
}

void func(int n, int a , int b, int c) {
  if(n == 1) {
    printf("%c %c\n", a, c);
  }
  else {
    func(n - 1, a, c, b);
    printf("%c %c\n", a, c);
    func(n - 1, b, a, c);
  }
}