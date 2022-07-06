#include <stdio.h>

int main(void) {
  int n, k, ans = 1;
  printf("n: ");
  scanf("%d", &n);
  printf("k: ");
  scanf("%d", &k);
  for(int i = 1; i <= n; i++)
    ans *= i;
  for(int i = 1; i <= k; i++)
    ans /= i;
  for(int i = 1; i <= n - k; i++)
    ans /= i;
  printf("%dC%d = %d\n",n,k,ans);

  return 0;
}