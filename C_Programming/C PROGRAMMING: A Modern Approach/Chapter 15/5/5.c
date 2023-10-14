#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

extern int contents[STACK_SIZE];
extern int top;

int main(void) {
  while(1) {
    make_empty();

    printf("Enter an RPN expression: ");

    while(1) {
      char ch;
      int a, b;

      scanf(" %c", &ch);

      if(ch == 'q') {
        exit(EXIT_SUCCESS);
      }
      else if(ch == '=') {
        printf("Value of expression: %d\n", pop());
        break;
      }
      else if(ch >= '0' && ch <= '9') {
        push(ch - '0');
      }
      else if(ch == '+') {
        a = pop();
        b = pop();
        push(b + a);
      }
      else if(ch == '-') {
        a = pop();
        b = pop();
        push(b - a);
      }
      else if(ch == '*') {
        a = pop();
        b = pop();
        push(b * a);
      }
      else if(ch == '/') {
        a = pop();
        b = pop();
        push(b / a);
      }
    }
  }
  
  return 0;
}