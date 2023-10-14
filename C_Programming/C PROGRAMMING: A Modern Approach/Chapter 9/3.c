#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char[10][10]);
void print_array(char[10][10]);

int main(void) {
  char walk[10][10];

  generate_random_walk(walk);
  print_array(walk);

  return 0;
}

void generate_random_walk(char walk[10][10]) {
  int x = 0, y = 0;

  srand((unsigned) time(NULL));

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      walk[i][j] = '.';
    }
  }

  walk[x][y] = 'A';
  for(int i = 1; i < 26; i++) {
    int dir = rand() % 4;
    if((x + 1 >= 10 || walk[x + 1][y] != '.') && (x - 1 < 0 || walk[x - 1][y] != '.') && (y + 1 >= 10 || walk[x][y + 1] != '.') && (y - 1 < 0 || walk[x][y - 1] != '.')) {
      break;
    }
    if(dir == 0) {
      if(x + 1 >= 10 || walk[x + 1][y] != '.') {
        i--;
        continue;
      }
      x++;
      walk[x][y] = 'A' + i;
    }
    else if(dir == 1) {
      if(x - 1 < 0 || walk[x - 1][y] != '.') {
        i--;
        continue;
      }
      x--;
      walk[x][y] = 'A' + i;
    }
    else if(dir == 2) {
      if(y + 1 >= 10 || walk[x][y + 1] != '.') {
        i--;
        continue;
      }
      y++;
      walk[x][y] = 'A' + i;
    }
    else {
      if(y - 1 < 0 || walk[x][y - 1] != '.') {
        i--;
        continue;
      }
      y--;
      walk[x][y] = 'A' + i;
    }
  }
}

void print_array(char walk[10][10]) {
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      printf("%c ", walk[i][j]);
    }
    printf("\n");
  }
}