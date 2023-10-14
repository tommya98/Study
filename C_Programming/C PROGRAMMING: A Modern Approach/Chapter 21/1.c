#include <stdio.h>
#include <stddef.h>

struct s {
  char a;
  int b[2];
  float c;
};

int main(void) {
  struct s s1;

  printf("sizeof   structure : %lu\n\n", sizeof(struct s));
  printf("sizeof   a         : %lu\n", sizeof(s1.a));             //1
  printf("offsetof a         : %lu\n\n", offsetof(struct s, a));  //0
  printf("sizeof   b         : %lu\n", sizeof(s1.b));             //8
  printf("offsetof a         : %lu\n\n", offsetof(struct s, b));  //4
  printf("sizeof   c         : %lu\n", sizeof(s1.c));             //4
  printf("offsetof a         : %lu\n\n", offsetof(struct s, c));  //12

  // struct s have hole.
  // size of hole :  3bit
  // location of hole : 1bit offsetof struct

  return 0;
}