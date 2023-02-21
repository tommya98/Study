#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stackADT.h"

int main(void) {
  Stack s = create();

  while(1) {
    printf("Enter an RPN expression: ");

    while(1) {
      char ch;
      int a, b;

      scanf(" %c", &ch);

      if(ch == 'q') {
        exit(EXIT_SUCCESS);
      }
      else if(ch == '=') {
        printf("Value of expression: %d\n", pop(s));
        break;
      }
      else if(ch >= '0' && ch <= '9') {
        push(s, ch - '0');
      }
      else if(ch == '+') {
        a = pop(s);
        b = pop(s);
        push(s, b + a);
      }
      else if(ch == '-') {
        a = pop(s);
        b = pop(s);
        push(s, b - a);
      }
      else if(ch == '*') {
        a = pop(s);
        b = pop(s);
        push(s, b * a);
      }
      else if(ch == '/') {
        a = pop(s);
        b = pop(s);
        push(s, b / a);
      }
    }
  }
  
  return 0;
}