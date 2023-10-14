#include <stdio.h>

int func(int, int*);

int main(void) {
  int n, max = 0;;
  int arr[20] = {0, };

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("%d\n", func(n, arr));

  return 0;
}

int func(int n, int* arr) {
  if(n == 1) {
    return arr[0];
  }

  int t = func(n - 1, arr);

  if(arr[n - 1] > t) {
    return arr[n - 1];
  }
  else {
    return t;
  }
}