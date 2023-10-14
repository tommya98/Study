#include <stdio.h>
#include <stdlib.h>

int* prefixAverages1(int*, int);
int* prefixAverages2(int*, int);

int main(void) {
  int n;
  int *X, *A;
  
  scanf("%d", &n);
  X = (int*)malloc(sizeof(int) * n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &X[i]);
  }

  A = prefixAverages1(X, n);
  for(int i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");

  A = prefixAverages2(X, n);
  for(int i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }

  return 0;
}

int* prefixAverages1(int* X, int n) {
  int *A = (int*)malloc(sizeof(int) * n);

  for(int i = 0; i < n; i++) {
    int sum = 0;
    for(int j = 0; j <= i; j++) {
      sum += X[j];
    }
    A[i] = sum/(i + 1);
  }
  
  return A;
}

int* prefixAverages2(int* X, int n) {
  int sum = 0;
  int *A = (int*)malloc(sizeof(int) * n);

  for(int i = 0; i < n; i++) {
    sum += X[i];
    A[i] = sum/(i + 1);
  }

  return A;
}