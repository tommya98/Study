#include <stdio.h>

int main(void) {
  float a, b;
  char operator;
  
  printf("Enter an expressions: ");
  scanf("%f", &a);
  while(1) {
    scanf("%c", &operator);
    if(operator == '\n') {
      break;
    }
    scanf("%f", &b);

    if(operator == '+') {
      a += b;
    }
    else if(operator == '-') {
      a -= b;
    }
    else if(operator == '*') {
      a *= b;
    }
    else if(operator == '/') {
      a /= b;
    }
  }

  printf("Value of expression: %.2f\n", a);

  return 0;
}