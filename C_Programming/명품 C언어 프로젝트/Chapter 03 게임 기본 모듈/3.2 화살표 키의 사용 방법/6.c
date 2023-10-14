#include <ncurses.h>

int main(void)
{
  int x = 20, y = 10;
  int input;
  char c[2] = "";

  initscr();
  keypad(stdscr, TRUE);
  noecho();

  input = getch();
  c[0] = input;
  c[1] = '\0';

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
    case ' ':
      mvprintw(y, x, " ");
      move(0, 0);
      input = getch();
      c[0] = input;
      c[1] = '\0';
      break;
    default:
      break;
    }
    mvprintw(y, x, &c);
    refresh();
  }

  endwin();

  return 0;
}