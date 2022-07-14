#include <stdio.h>

void swap(int*, int*);

int main(void) {
  int n, a, b;
  int arr[50];

  scanf("%d", &n);

  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  scanf("%d %d", &a, &b);

  swap(&arr[a], &arr[b]);

  for(int i = 0; i < n; i++)
    printf(" %d", arr[i]);

  return 0;
}

void swap(int* a, int* b) {
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}