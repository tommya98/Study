#include <stdio.h>
#include <string.h>

double compute_average_word_length(const char *sentence);

int main(void) {
  char str[1000];

  printf("Enter a sentence: ");
  for(int i = 0; ; i++) {
    char ch = getchar();

    if(ch == '\n') {
      str[i] = '\0';
      break;
    }

    str[i] = ch;
  }

  printf("Average word lenght: %.1f\n", compute_average_word_length(str));

  return 0;
}

double compute_average_word_length(const char *sentence) {
  int length_sum = 0, current_len = 0, num = 0, temp = 1, i = 0;

  while(1) {
    current_len = 0;
    while(1) {
      if(sentence[i] == ' ') {
        i++;
        break;
      }
      else if(sentence[i] == '\0') {
        i++;
        temp = 0;
        break;
      }
      current_len++;
      i++;
    }
    length_sum += current_len;
    num++;
    if(temp == 0) {
      break;
    }
  }

  return (double)length_sum / (double)num;
}