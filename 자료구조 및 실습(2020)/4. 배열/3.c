#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int** arr;

  scanf("%d", &n);
  arr = (int**)malloc(sizeof(int*) * n);
  for(int i = 0; i < n; i++) {
    arr[i] = (int*)malloc(sizeof(int) * n);
  }

  int a = 1;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i % 2 == 0) {
        arr[i][j] = a;
      }
      else {
        arr[i][n - j - 1] = a;
      }
      a++;
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      printf(" %d", arr[i][j]);
    }
    printf("\n");
  }


  return 0;
}