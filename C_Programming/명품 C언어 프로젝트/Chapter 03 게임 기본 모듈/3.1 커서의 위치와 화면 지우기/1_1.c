#include <ncurses.h>

#define X 20
#define Y 2

void printStarXY(int x, int y);

int main(void)
{
  initscr();

  for (int i = 0; i < 5; i++)
  {
    for (int j = -i; j <= i; j++)
    {
      printStarXY(X + 2 * j, Y + 2 * i);
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