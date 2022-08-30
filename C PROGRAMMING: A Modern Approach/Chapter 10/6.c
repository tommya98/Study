#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int);
int pop(void);
void stack_underflow(void);
void stack_overflow(void);

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

void make_empty(void) {
  top = 0;
}

bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

void push(int i) {
  if(is_full()) {
    stack_overflow();
  }
  else {
    contents[top++] = i;
  }
}

int pop(void) {
  if(is_empty()) {
    stack_underflow();
  }
  else {
    return contents[--top];
  }
}

void stack_underflow(void) {
  printf("Not enough operands in expression\n");
  exit(0);
}

void stack_overflow(void) {
  printf("Expression is too complex\n");
  exit(0);
}