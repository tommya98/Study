#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  char board[10][10];
  int x = 0, y = 0;

  srand((unsigned) time(NULL));

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      board[i][j] = '.';
    }
  }


  board[x][y] = 'A';
  for(int i = 1; i < 26; i++) {
    int dir = rand() % 4;
    if((x + 1 >= 10 || board[x + 1][y] != '.') && (x - 1 < 0 || board[x - 1][y] != '.') && (y + 1 >= 10 || board[x][y + 1] != '.') && (y - 1 < 0 || board[x][y - 1] != '.')) {
      break;
    }
    if(dir == 0) {
      if(x + 1 >= 10 || board[x + 1][y] != '.') {
        i--;
        continue;
      }
      x++;
      board[x][y] = 'A' + i;
    }
    else if(dir == 1) {
      if(x - 1 < 0 || board[x - 1][y] != '.') {
        i--;
        continue;
      }
      x--;
      board[x][y] = 'A' + i;
    }
    else if(dir == 2) {
      if(y + 1 >= 10 || board[x][y + 1] != '.') {
        i--;
        continue;
      }
      y++;
      board[x][y] = 'A' + i;
    }
    else {
      if(y - 1 < 0 || board[x][y - 1] != '.') {
        i--;
        continue;
      }
      y--;
      board[x][y] = 'A' + i;
    }
  }
  
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      printf("%c ", board[i][j]);
    }
    printf("\n");
  }

  return 0;
}