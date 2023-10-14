#include <stdio.h>

int mostOnes(int[101][101], int);

int main(void) {
  int arr[101][101] = {0, };
  int n;

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("%d\n", mostOnes(arr, n));

  return 0;
}

int mostOnes(int A[101][101], int n) {
  int res = 0, row = 0;

  for(int i = 0; i < n; i++) {
    if(A[row][i] == 1) {
      res = row;
    }
    else {
      if(row >= n){
        break;
      }
      row++;
      i--;
    }
  }

  return res;
}