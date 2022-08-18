#include <stdio.h>

int main(void) {
  int size, x, y, nx, ny;
  int arr[99][99] = {0};

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99\n");
  printf("Enter size of magic square: ");
  scanf("%d", &size);

  x = nx = size / 2;
  y = ny = 0;

  for(int i = 1; i <= size * size; i++) {
    arr[y][x] = i;
    if(i == size * size) {
      break;
    }

    if(x + 1 == size) {
      nx = 0;
    }
    else {
      nx = x + 1;
    }

    if(y == 0) {
      ny = size - 1;
    }
    else {
      ny = y - 1;
    }

    if(arr[ny][nx] != 0) {
      nx = x;

      if(y == size - 1) {
        ny = 0;
      }
      else {
        ny = y + 1;
      }
    }

    y = ny;
    x = nx;
  }

  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++) {
      printf("%3d", arr[i][j]);
    }
    printf("\n");
  }


  return 0;
}