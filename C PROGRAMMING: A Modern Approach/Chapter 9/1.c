#include <stdio.h>

void selection_sort(int[], int n);

int main(void) {
  int arr[10] = {0};
  int n = 10;

  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  selection_sort(arr, n);

  printf("Result: ");
  for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

void selection_sort(int arr[], int n) {
  int max = arr[0], max_pos = 0, temp;

  printf("n: %d\n", n);

  for(int i = 0; i < n; i++) {
    if(max < arr[i]) {
      max = arr[i];
      max_pos = i;
    }
  }

  temp = arr[n - 1];
  arr[n - 1] = max;
  arr[max_pos] = temp;

  if(n > 1) {
    selection_sort(arr, n - 1);
  }
}