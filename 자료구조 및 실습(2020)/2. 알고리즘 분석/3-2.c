#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* prefixAverages1(int*, int);
int* prefixAverages2(int*, int);

int main(void) {
  int n;
  int *X, *A;
  struct timespec start, end;
  double run_time;
  
  scanf("%d", &n);
  X = (int*)malloc(sizeof(int) * n);
  for(int i = 0; i < n; i++) {
    srand(time(NULL));
    X[i] = (rand() % 10000) + 1;
  }

  clock_gettime(CLOCK_REALTIME, &start);
  A = prefixAverages1(X, n);
  clock_gettime(CLOCK_REALTIME, &end);
  run_time = (end.tv_sec - start.tv_sec) * 1000.0 + (end.tv_nsec - start.tv_nsec) / 1000000.0;
  printf("%fms", run_time);
  printf("\n");

  clock_gettime(CLOCK_REALTIME, &start);
  A = prefixAverages2(X, n);
  clock_gettime(CLOCK_REALTIME, &end);
  run_time = (end.tv_sec - start.tv_sec) * 1000.0 + (end.tv_nsec - start.tv_nsec) / 1000000.0;
  printf("%fms", run_time);
  printf("\n");

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