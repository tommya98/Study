#include <stdio.h>

int main(void) {
  int arr[5][5];
  int row_sum[5] = {0};
  int col_sum[5] = {0};

  for(int i = 0; i < 5; i++) {
    printf("Enter row %d: ", i + 1);
    for(int j = 0; j < 5; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      row_sum[i] += arr[i][j];
      col_sum[j] += arr[i][j];
    }
  }

  printf("Row totals: ");
  for(int i = 0; i < 5; i++) {
    printf("%d ", row_sum[i]);
  }
  printf("\n");

  printf("Column totals: ");
  for(int i = 0; i < 5; i++) {
    printf("%d ", col_sum[i]);
  }
  printf("\n");

  return 0;
}