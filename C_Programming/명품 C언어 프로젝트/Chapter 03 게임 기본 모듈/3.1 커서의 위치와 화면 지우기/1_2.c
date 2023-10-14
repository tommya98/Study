#include <ncurses.h>

#define X 4
#define Y 2

void printStarXY(int x, int y);

int main(void)
{
  initscr();

  for (int i = 0; i < 5; i++)
  {
    if (i == 0 || i == 4)
    {
      for (int j = 0; j < 8; j++)
        printStarXY(X + 2 * j, Y + 2 * i);
    }
    else
    {
      printStarXY(X, Y + 2 * i);
      printStarXY(X + 14, Y + 2 * i);
    }
  }

  refresh();
  getch();
  endwin();

  return 0;
}

void printStarXY(int x, int y)
{
  move(y, x);
  printw("*");
}