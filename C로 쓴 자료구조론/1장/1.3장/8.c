#include <stdio.h>

int func(int);

int main(void) {
  int n, a, b0 = 0, b1 = 1, b2 = 0;
  printf("i: ");
  scanf("%d", &n);
  a = func(n);
  for(int i = 0; i < n; i++) {
    if(n == 2){
      b2 = 1;
      break;
    }
    b2 = b0 + b1;
    if(i == 1)
      continue;
    b0 = b1;
    b1 = b2;
  }

  printf("순환 함수로 구한 f(%d): %d\n", n, a);
  printf("반복 함수로 구한 f(%d): %d\n", n, b2);

  return 0;
}

int func(int n) {
  if(n == 0)
    return 0;
  else if(n == 1)
    return 1;
  else 
    return func(n - 1) + func(n - 2);
}