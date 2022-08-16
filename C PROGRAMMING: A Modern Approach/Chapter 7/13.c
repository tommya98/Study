#include <stdio.h>
#include <string.h>

int main(void) {
  int length_sum = 0, num = 0, current_len = 0;
  char c;

  printf("Enter a sentence: ");
  while(1) {
    int temp = 1;
    current_len = 0;
    while(1) {
      c = getchar();
      if(c == ' ') {
        break;
      }
      else if(c == '\n') {
        temp = 0;
        break;
      }
      current_len++;
    }
    length_sum += current_len;
    num++;
    if(temp == 0) {
      break;
    }
  }

  printf("Average word lenght: %.1f", (float)length_sum / (float)num);

  return 0;
}