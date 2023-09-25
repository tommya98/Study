#include <ncurses.h>

void my_gotoxy(int x, int y);

int main(void)
{
  initscr();

  my_gotoxy(1, 23);
  printw("Hello");

  refresh();
  getch();
  endwin();

  return 0;
}

void my_gotoxy(int x, int y)
{
  move(23 - y, x - 1);
}