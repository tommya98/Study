#include <stdio.h>

union my_union{
  float f1;
  struct my_float {
    unsigned int fraction:23, exponent:8, sign:1;
  }f2;
};

int main(void) {
  union my_union a;

  a.f2.sign = 1;
  a.f2.exponent = 128;
  a.f2.fraction = 0;

  printf("result: %f\n", a.f1);

  return 0;
}