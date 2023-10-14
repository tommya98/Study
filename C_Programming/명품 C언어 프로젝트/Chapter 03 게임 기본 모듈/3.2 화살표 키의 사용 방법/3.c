#include <ncurses.h>

int main(void)
{
  int x = 20, y = 10;
  int ch;

  initscr();
  keypad(stdscr, TRUE);
  noecho();

  mvprintw(y, x, "X");
  refresh();

  while ((ch = getch()) != 'q')
  {
    switch (ch)
    {
    case KEY_END:
      mvprintw(y, x, " ");
      y++;
      x--;
      break;
    case '2':
      mvprintw(y, x, " ");
      y++;
      break;
    case KEY_NPAGE:
      mvprintw(y, x, " ");
      y++;
      x++;
      break;
    case '4':
      mvprintw(y, x, " ");
      x--;
      break;
    case '6':
      mvprintw(y, x, " ");
      x++;
      break;
    case KEY_HOME:
      mvprintw(y, x, " ");
      y--;
      x--;
      break;
    case '8':
      mvprintw(y, x, " ");
      y--;
      break;
    case KEY_PPAGE:
      mvprintw(y, x, " ");
      y--;
      x++;
      break;
    default:
      break;
    }
    mvprintw(y, x, "X");
    refresh();
  }

  endwin();

  return 0;
}
