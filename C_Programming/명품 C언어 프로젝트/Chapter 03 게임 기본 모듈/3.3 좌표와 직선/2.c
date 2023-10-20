#include <ncurses.h>

void gotoxy(int x, int y) {
  move(y, x);
  refresh();
}

void axis(void) {
  int x, y;
  getmaxyx(stdscr, y, x);

  for (int i = 0; i < x; i++) {
    mvaddch(y / 2, i, '-');
  }
  for (int i = 0; i < y; i++) {
    mvaddch(i, x / 2, '|');
  }
  mvaddch(y / 2, x / 2, '+');

  refresh();
}

void draw_xy_line(int a, int b) {
  int x, y;
  getmaxyx(stdscr, y, x);

  for (int i = 0; i < x; ++i) {
    int j = -a * (i - x / 2) - b + y / 2;
    if (j >= 0 && j < y) {
      mvaddch(j, i, '*');
    }
  }

  refresh();
}

void draw_intercept(int a, int b) {
  move(0, 0);
  printw("x intercept: %d\n", -a / b);
  printw("y intercept: %d\n", b);
}

int main(void) {
  int a, b;

  initscr();
  raw();
  keypad(stdscr, TRUE);

  printw("y=ax+b\n");
  printw("a: ");
  scanw("%d", &a);
  printw("b: ");
  scanw("%d", &b);

  noecho();
  clear();

  axis();
  draw_xy_line(a, b);
  draw_intercept(a, b);
  refresh();

  getch();
  endwin();

  return 0;
}
