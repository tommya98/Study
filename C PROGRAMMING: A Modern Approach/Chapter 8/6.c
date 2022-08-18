#include <stdio.h>
#include <ctype.h>

int main(void) {
  char arr[100];
  char arr2[100];
  int i;

  printf("Enter message: ");
  for(i = 0; i < 100; i++) {
    arr[i] = getchar();
    if(arr[i] == '\n') {
      break;
    }
  }

  for(int t = 0; t < i; t++) {
    arr2[t] = toupper(arr[t]);
    if(arr2[t] == 'A') {
      arr2[t] = '4';
    }
    if(arr2[t] == 'B') {
      arr2[t] = '8';
    }
    if(arr2[t] == 'E') {
      arr2[t] = '3';
    }
    if(arr2[t] == 'I') {
      arr2[t] = '1';
    }
    if(arr2[t] == 'O') {
      arr2[t] = '0';
    }
    if(arr2[t] == 'S') {
      arr2[t] = '5';
    }
  }
  
  printf("In B1FF-speak: ");
  for(int t = 0; t < i; t++) {
    printf("%c", arr2[t]);
  }
  printf("!!!!!!!!!!\n");

  return 0;
}