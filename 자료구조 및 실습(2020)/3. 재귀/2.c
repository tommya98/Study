#include <stdio.h>

void func(int);

int main(void) {
  int n;

  scanf("%d", &n);

  func(n);

  return 0;
}

void func(int n) {
  if(n / 10){
    func(n / 10);
  }
  printf("%d\n", n % 10);
}