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

  for(int a = 1, i = 0, j = 0, d = 0; a <= m * n; a++) {
    if(d == 0) {
      arr[i][j] = a;
      if(j + 1 >= m || arr[i][j + 1] != 0) {
        d = 1;
        i++;
      }
      else {
        j++;
      }
    }
    else if(d == 1) {
      arr[i][j] = a;
      if(i + 1 >= n || arr[i + 1][j] != 0) {
        d = 2;
        j--;
      }
      else {
        i++;
      }  
    }
    else if(d == 2) {
      arr[i][j] = a;
      if(j - 1 < 0 || arr[i][j - 1] != 0) {
        d = 3;
        i--;
      }
      else {
        j--;
      }
    }
    else if(d == 3) {
      arr[i][j] = a;
      if(i - 1 < 0 || arr[i - 1][j] != 0) {
        d = 0;
        j++;
      }
      else {
        i--;
      }
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