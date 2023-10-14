#include <stdio.h>
#include <ncurses.h>

struct position
{
  int x;
  int y;
};

void printBoardXY(int x, int y);

int main(void)
{
  struct position block2[17] = {
      {0, 0},
      {2, 0},
      {4, 0},
      {6, 0},
      {8, 0},
      {8, 2},
      {0, 4},
      {2, 4},
      {4, 4},
      {6, 4},
      {8, 4},
      {0, 6},
      {0, 8},
      {2, 8},
      {4, 8},
      {6, 8},
      {8, 8},
  };
  // SKIP
  struct position block3[10];
  struct position block4[10];
  struct position block5[10];
  struct position block6[10];
  struct position blockA[10];
  struct position blockT[10];
  struct position blockCustom1[10];
  struct position blockCustom2[10];
  struct position blockCustom3[10];

  initscr();

  for (int i = 0; i < sizeof(block2) / sizeof(struct position); i++)
  {
    printBoardXY(block2[i].x, block2[i].y);
  }

  refresh();
  getch();
  endwin();

  return 0;
}

void printBoardXY(int x, int y)
{
  move(y, x);
  addch(ACS_CKBOARD);
}
