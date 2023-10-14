#include <ncurses.h>

void gotoxy_str(char *str, int x, int y);

int main(void)
{
  initscr();

  gotoxy_str("time", 10, 10);

  refresh();
  getch();
  endwin();

  return 0;
}

void gotoxy_str(char *str, int x, int y)
{
  move(y, x);
  printw("%s", str);
}