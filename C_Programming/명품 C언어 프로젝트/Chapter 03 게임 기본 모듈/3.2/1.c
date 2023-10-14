#include <stdio.h>
#include <unistd.h>
#include <termios.h>

int getch();

int main(void)
{
  char input;
  int playing = 1, num = 1000, scale = 1;

  printf("****************\n");
  printf("* 1 부터 9999  *\n");
  printf("* W: 숫자 증가 *\n");
  printf("* S: 숫자 감소 *\n");
  printf("* A: 단위 증가 *\n");
  printf("* D: 단위 감소 *\n");
  printf("* E: 종료      *\n");
  printf("****************\n\n");

  while (playing)
  {
    printf("\n현재 숫자: %4d\n", num);
    printf("현재 단위: %4d\n", scale);
    printf("방향을 선택하세요> ");
    input = getch();
    switch (input)
    {
    case 'W':
    case 'w':
      num += scale;
      if (num >= 10000)
      {
        num = 9999;
      }
      break;
    case 'S':
    case 's':
      num -= scale;
      if (num < 0)
      {
        num = 0;
      }
      break;
    case 'A':
    case 'a':
      scale *= 10;
      if (scale > 1000)
      {
        scale = 1000;
      }
      break;
    case 'D':
    case 'd':
      scale /= 10;
      if (scale <= 0)
      {
        scale = 1;
      }
      break;
    case 'E':
    case 'e':
      playing = 0;
    default:
      break;
    }
  }

  return 0;
}

int getch()
{
  int c;
  struct termios oldattr, newattr;

  tcgetattr(STDIN_FILENO, &oldattr);
  newattr = oldattr;
  newattr.c_lflag &= ~(ICANON | ECHO);
  newattr.c_cc[VMIN] = 1;
  newattr.c_cc[VTIME] = 0;
  tcsetattr(STDIN_FILENO, TCSANOW, &newattr);
  c = getchar();
  tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
  return c;
}
