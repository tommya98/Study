#include <stdio.h>
#include <stdlib.h>

void reverse(int, int, int*);

int main(void) {
  int n, r, a, b;
  int* arr;

  scanf("%d", &n);
  arr = (int*)malloc(n * sizeof(int));

  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &r);

  for(int i = 0; i < r; i++) {
    scanf("%d %d", &a, &b);
    reverse(a, b, arr);
  }

  for(int i = 0; i < n; i++) {
    printf(" %d", arr[i]);
  }
  printf("\n");

  return 0;
}

void reverse(int a, int b, int* arr) {
  int* tarr = (int*)malloc((b - a + 1) * sizeof(int));

  for(int i = 0; i <= b - a; i++) {
    tarr[i] = arr[i + a];
  }

  for(int i = b; i >= a; i--) {
    arr[i] = tarr[b - i];
  }
}