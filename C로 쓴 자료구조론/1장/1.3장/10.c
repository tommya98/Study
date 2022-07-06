#include <stdio.h>

int func(int, int);

int main(void) {
  int m, n, ans;
  printf("m: ");
  scanf("%d", &m);
  printf("n: ");
  scanf("%d", &n);
  ans = func(m, n);
  printf("A(%d,%d): %d\n",m, n, ans);

  return 0;
}

int func(int m, int n) {
  if(!m)
    return n + 1;
  else if(!n)
    return func(m - 1, 1);
  else
    return func(m - 1, func(m, n - 1));
}