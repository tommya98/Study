#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
  int b[N], big, small;

  printf("Enter %d numbers: ", N);
  for(int i = 0; i < N; i++) {
    scanf("%d", &b[i]);
  }

  max_min(b, N, &big, &small);

  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);

  return 0;
}

void max_min(int a[], int n, int *max, int *min) {
  *max = *min = a[0];

  for(int *temp = a + 1; temp < a + n; temp++) {
    if(*temp > *max) {
      *max = *temp;
    }
    else if(*temp < *min) {
      *min = *temp;
    }
  }
}