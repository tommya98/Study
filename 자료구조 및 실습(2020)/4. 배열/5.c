#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, m;
  int** arr;

  scanf("%d %d", &n, &m);
  arr = (int**)malloc(sizeof(int*) * n);
  for(int i = 0; i < m; i++) {
    arr[i] = (int*)malloc(sizeof(int) * m);
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      arr[i][j] = 0;
    }
  } 

  for(int a = 1, i = 0, j = 0, ti = 0, tj = 0; a <= n * m; a++) {
    arr[i][j] = a;
    if(j - 1 < 0 || i + 1 >= n || arr[i + 1][j - 1] != 0) {
      if(tj != m - 1) {
        i = 0;
        j = ++tj;
      }
      else {
        j = m - 1;
        i = ++ti;
      }
    }
    else {
      i++;
      j--;
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      printf(" %d", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}