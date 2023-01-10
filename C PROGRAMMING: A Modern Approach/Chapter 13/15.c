#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

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
int evaluate_RPN_expression(const char *expression);

int main(void) {
  char str[100];
  while(1) {
    make_empty();

    printf("Enter an RPN expression: ");

    for(int i = 0; ; i++) {
      char ch = getchar();
      if(ch == 'q') {
        exit(EXIT_SUCCESS);
      }
      if(ch == '\n') {
        str[i] = '\0';
        break;
      }
      if(ch == ' ') {
        i--;
        continue;
      }

      str[i] = ch;
    }

    printf("Value of expression: %d\n", evaluate_RPN_expression(str));
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

int evaluate_RPN_expression(const char *expression) {
  int len = strlen(expression);

  for(int i = 0; i < len; i++) {
    char ch = expression[i];
    int a, b;

    if(ch == '=') {
      return pop();
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