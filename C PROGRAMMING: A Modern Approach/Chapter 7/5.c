#include <stdio.h>
#include <ctype.h>

int main(void) {
  char c;
  int score = 0;

  printf("Enter a word: ");
  while((c = getchar()) != '\n') {
    c = toupper(c);
    switch(c) {
      case 'D':
      case 'G':
        score += 2;
        break;
      case 'B':
      case 'C':
      case 'M':
      case 'P':
        score += 3;
        break;
      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y':
        score += 4;
        break;
      case 'K':
        score += 5;
        break;
      case 'J':
      case 'X':
        score += 8;
        break;
      case 'Q':
      case 'Z':
        score += 10;
        break;
      default:
        score++;
        break;
    }
  }

  printf("Scrabble value: %d\n", score);

  return 0;
}