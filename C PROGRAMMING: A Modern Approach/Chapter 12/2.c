#include <stdio.h>
#include <stdbool.h>

int main(void) {
  char msg[100];
  char *pos = &msg[0];
  bool palindrome = true;

  printf("Enter a message: ");
  while(1) {
    char temp = getchar();
    if(temp == '\n') {
      break;
    }
    if(temp >= 'A' && temp <= 'Z') {
      temp -= 'A' - 'a';
    }
    if(temp >= 'a' && temp <= 'z') {
      *pos = temp;
      pos++;
    }
  }

  pos--;
  for(char *temp = &msg[0]; pos > temp; temp++, pos--) {
    if(*temp != *pos) {
      palindrome = false;
      break;
    }
  }

  if(palindrome) {
    printf("Palindrome\n");
  }
  else {
    printf("Not a palindrome\n");
  }

  return 0;
}