#include <stdio.h>

int main(void) {
  char arr[100];
  int i;

  printf("Enter a sentence: ");
  arr[0] = ' ';
  for(i = 1; ; i++) {
    arr[i] = getchar();
    if(arr[i] == '?' || arr[i] == '!' || arr[i] == '.') {
      break;
    }
  }

  printf("Reversal of sentence:");
  for(int j = i - 1; j >= 0; j--) {
    int end = j;
    int start;

    for(int k = end; k >= 0; k--) {
      start = k;
      if(arr[start ] == ' ' || k == 0) {
        break;
      }
    }

    for(int k = start; k <= end; k++) {
      printf("%c", arr[k]);
    }
    j = start;
  }
  printf("%c\n", arr[i]);

  return 0;
}