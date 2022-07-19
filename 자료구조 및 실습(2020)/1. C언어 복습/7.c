#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;

  scanf("%d", &n);

  int *a = (int *)malloc(sizeof(int) * n);
  int *b = (int *)malloc(sizeof(int) * n);

  for(int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for(int i = 0; i < n; i++)
    scanf("%d", &b[i]);

  for(int i = 0; i < n; i++) 
    printf("%d ", a[i] + b[n - i - 1]);

  free(a);
  free(b);

  return 0;
}