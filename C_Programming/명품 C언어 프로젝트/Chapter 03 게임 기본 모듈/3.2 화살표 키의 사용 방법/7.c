#include <ncurses.h>

int main(void)
{
  int x = 20, y = 10;
  int input;

  initscr();
  keypad(stdscr, TRUE);
  noecho();

  mvprintw(y, x, "1q2w3e4r");
  refresh();

  while ((input = getch()) != 'q')
  {
    switch (input)
    {
    case KEY_UP:
      clear();
      y--;
      break;
    case KEY_DOWN:
      clear();
      y++;
      break;
    case KEY_RIGHT:
      clear();
      x++;
      break;
    case KEY_LEFT:
      clear();
      x--;
      break;
    default:
      break;
    }
    mvprintw(y, x, "1q2w3e4r");
    refresh();
  }

  endwin();

  return 0;
}