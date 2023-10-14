#include <ncurses.h>
#include <unistd.h>

int main(void)
{
  int x = 20, y = 10;
  int ch;

  initscr();
  keypad(stdscr, TRUE);
  noecho();

  mvprintw(y, x, "X");
  refresh();

  ch = getch();

  switch (ch)
  {
  case KEY_UP:
    while (1)
    {
      mvprintw(y, x, " ");
      y--;
      mvprintw(y, x, "X");
      refresh();
      sleep(1);
    }
    break;
  case KEY_DOWN:
    while (1)
    {
      mvprintw(y, x, " ");
      y++;
      mvprintw(y, x, "X");
      refresh();
      sleep(1);
    }
    break;
  case KEY_RIGHT:
    while (1)
    {
      mvprintw(y, x, " ");
      x++;
      mvprintw(y, x, "X");
      refresh();
      sleep(1);
    }
    break;
  case KEY_LEFT:
    while (1)
    {
      mvprintw(y, x, " ");
      x--;
      mvprintw(y, x, "X");
      refresh();
      sleep(1);
    }
    break;
  default:
    break;
  }

  endwin();

  return 0;
}
