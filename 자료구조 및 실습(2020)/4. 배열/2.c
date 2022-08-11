#include <stdio.h>
#include <stdlib.h>

int switchab(int, int*, int);

int main(void) {
  int n, s, a, b, temp;
  int* arr;

  scanf("%d", &n);
  arr = (int*)malloc(n * sizeof(int));

  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &s);

  scanf("%d", &a);
  temp = arr[a];
  for(int i = 0; i < s - 1; i++) {
    scanf("%d", &b);
    temp = switchab(b, arr, temp);
    a = b;
  }

  for(int i = 0; i < n; i++) {
    printf(" %d", arr[i]);
  }
  printf("\n");

  return 0;
}

int switchab(int b, int* arr, int n) {
  int temp;

  temp = arr[b];
  arr[b] = n;

  return temp;
}