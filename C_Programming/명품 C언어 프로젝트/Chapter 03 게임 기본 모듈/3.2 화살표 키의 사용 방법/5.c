#include <ncurses.h>

int main(void)
{
  int x = 20, y = 10;
  int input;
  char c[2] = "0";

  initscr();
  keypad(stdscr, TRUE);
  noecho();

  mvprintw(y, x, &c);
  refresh();

  while ((input = getch()) != 'q')
  {
    switch (input)
    {
    case KEY_UP:
      mvprintw(y, x, " ");
      y--;
      break;
    case KEY_DOWN:
      mvprintw(y, x, " ");
      y++;
      break;
    case KEY_RIGHT:
      mvprintw(y, x, " ");
      x++;
      break;
    case KEY_LEFT:
      mvprintw(y, x, " ");
      x--;
      break;
    default:
      c[0] = input;
      c[1] = '\0';
      break;
    }
    mvprintw(y, x, &c);
    refresh();
  }

  endwin();

  return 0;
}