#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) {
  int size;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99\n");
  printf("Enter size of magic square: ");
  scanf("%d", &size);

  char arr[size][size];
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++) {
      arr[i][j] = 0;
    }
  }

  create_magic_square(size, arr);
  print_magic_square(size, arr);

  return 0;
}

void create_magic_square(int n, char magic_square[n][n]) {
  int x, y, nx, ny;

  x = nx = n / 2;
  y = ny = 0;

  for(int i = 1; i <= n * n; i++) {
    magic_square[y][x] = i;
    if(i == n * n) {
      break;
    }

    if(x + 1 == n) {
      nx = 0;
    }
    else {
      nx = x + 1;
    }

    if(y == 0) {
      ny = n - 1;
    }
    else {
      ny = y - 1;
    }

    if(magic_square[ny][nx] != 0) {
      nx = x;

      if(y == n - 1) {
        ny = 0;
      }
      else {
        ny = y + 1;
      }
    }

    y = ny;
    x = nx;
  }
}

void print_magic_square(int n, char magic_square[n][n]){
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      printf("%3d", magic_square[i][j]);
    }
    printf("\n");
  }
}