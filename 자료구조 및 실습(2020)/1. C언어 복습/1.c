#include <stdio.h>

int sum(int);

int main(void) {
  int x, ans = 0;

  scanf("%d", &x);

  for(int i = 1; i <= x; i++) 
    ans += sum(i);

  printf("%d\n", ans);

  return 0;
}

int sum(int n) {
  int sum = 0;

  for(int i = 1; i <= n; i++) 
    sum += i;

  return sum;
}