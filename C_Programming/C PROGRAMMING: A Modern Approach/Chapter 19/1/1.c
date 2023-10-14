#include <stdio.h>
#include <stdbool.h>
#include "stackADT.h"

int main(void) {
  Stack s = create();
  bool result = true;

  printf("Enter parentheses and/or braces: ");
  while(1) {
    char ch = getchar();
    if(ch == '\n') {
      if(is_empty(s)) {
        break;
      }
      else {
        result = false;
        break;
      }
    }

    if(ch == '(' || ch == '{') {
      push(s, ch);
    }
    else if(ch == ')') {
      if(pop(s) != '(') {
        result = false;
        break;
      }
    }
    else if(ch == '}') {
      if(pop(s) != '{') {
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