#include <ncurses.h>

int main(void)
{

  initscr();

  for (int i = 1; i <= 9; i++)
  {
    clear();
    for (int j = 1; j <= 9; j++)
    {
      printw("%d*%d=%d ", i, j, i * j);
    }
    refresh();
    printw("\nPress Any Key\n");
    getch();
  }

  endwin();

  return 0;
}
