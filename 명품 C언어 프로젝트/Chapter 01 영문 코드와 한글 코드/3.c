#include <stdio.h>

int main(void) {
  int n;
  char star[3] = {-30, -104, -123};
  char diamond[3] = {-30, -105, -122};
  char square[3] = {-30, -106, -96};
  char triangle[3] = {-30, -106, -78};
  char spade[3] = {-30, -103, -96};
  char heart[3] = {-30, -103, -91};
  char club[3] = {-30, -103, -93};

  printf("특수기호 출력\n");
  printf("1:%c%c%c, 2:%c%c%c, 3:%c%c%c, 4:%c%c%c, 5:%c%c%c, 6:%c%c%c, 7:%c%c%c\n\n", star[0], star[1], star[2], diamond[0], diamond[1], diamond[2], square[0], square[1], square[2], triangle[0], triangle[1], triangle[2], spade[0], spade[1], spade[2], heart[0], heart[1], heart[2], club[0], club[1], club[2]);
  printf("번호를 입력하시오> ");
  scanf("%d", &n);

  switch (n) {
  case 1:
    printf("%c%c%c\n", star[0], star[1], star[2]);
    break;
  case 2:
    printf("%c%c%c\n", diamond[0], diamond[1], diamond[2]);
    break;
  case 3:
    printf("%c%c%c\n", square[0], square[1], square[2]);
    break;
  case 4:
    printf("%c%c%c\n", triangle[0], triangle[1], triangle[2]);
    break;
  case 5:
    printf("%c%c%c\n", spade[0], spade[1], spade[2]);
    break;
  case 6:
    printf("%c%c%c\n", heart[0], heart[1], heart[2]);
    break;
  case 7:
    printf("%c%c%c\n", club[0], club[1], club[2]);
    break;
  }

  return 0;
}