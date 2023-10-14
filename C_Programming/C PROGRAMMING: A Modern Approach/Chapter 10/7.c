#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};
char digits[4][MAX_DIGITS * 4];

void clear_digit_array(void);
void process_digit(int, int);
void print_digit_array(void);

int main(void) {
  char digit;
  int position;

  clear_digit_array();
  for(position = 0; position < MAX_DIGITS * 4;) {
    scanf("%c", &digit);
    if(digit == '\n') {
      break;
    }
    if(digit >= '0' && digit <= '9') {
      process_digit(digit - '0', position);
      position += 4;
    }
  }
  print_digit_array();

  return 0;
}

void clear_digit_array(void) {
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4 * MAX_DIGITS; j++) {
      digits[i][j] = ' ';
    }
  }
}

void process_digit(int digit, int position) {
  for(int i = 0; i < 7; i++) {
    if(segments[digit][i] == 1) {
      switch(i) {
        case 0:
          digits[0][position + 1] = '_';
          break;
        case 1:
          digits[1][position + 2] = '|';
          break;
        case 2:
          digits[2][position + 2] = '|';
          break;
        case 3:
          digits[2][position + 1] = '_';
          break;
        case 4:
          digits[2][position] = '|';
          break;
        case 5:
          digits[1][position] = '|';
          break;
        case 6:
          digits[1][position + 1] = '_';
          break;
      }
    }
  }
}

void print_digit_array(void) {
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4 * MAX_DIGITS; j++) {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }
}