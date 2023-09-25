#include <ncurses.h>

#define X 20
#define Y 2

void printStarXY(int x, int y);

int main(void)
{
  initscr();

  printStarXY(X, Y);
  printStarXY(X - 4, Y + 2);
  printStarXY(X + 4, Y + 2);
  printStarXY(X - 8, Y + 4);
  printStarXY(X + 8, Y + 4);
  printStarXY(X - 4, Y + 6);
  printStarXY(X + 4, Y + 6);
  printStarXY(X, Y + 8);

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