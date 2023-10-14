#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);
void stack_underflow(void);
void stack_overflow(void);

int main(void) {
  bool result = true;

  make_empty();
  printf("Enter parentheses and/or braces: ");

  while(1) {
    char ch = getchar();
    if(ch == '\n') {
      if(is_empty()) {
        break;
      }
      else {
        result = false;
        break;
      }
    }

    if(ch == '(' || ch == '{') {
      push(ch);
    }
    else if(ch == ')') {
      if(pop() != '(') {
        result = false;
        break;
      }
    }
    else if(ch == '}') {
      if(pop() != '{') {
        result = false;
        break;
      }
    }
  }

  if(result) {
    printf("Parentheses/braces are nested properly\n");
  }
  else {
    printf("Parentheses/braces are nested improperly\n");
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

void push(char i) {
  if(is_full()) {
    stack_overflow();
  }
  else {
    contents[top++] = i;
  }
}

char pop(void) {
  if(is_empty()) {
    stack_underflow();
  }
  else {
    return contents[--top];
  }
}

void stack_underflow(void) {
  printf("Parentheses/braces are nested improperly\n");
  exit(0);
}

void stack_overflow(void) {
  printf("Stack overflow\n");
  exit(0);
}