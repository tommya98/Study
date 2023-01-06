#include <stdio.h>
#include <ctype.h>
#include <string.h>

int compute_scrabble_value(const char *word);

int main(void) {
  char word[100];
  int score = 0;

  printf("Enter a word: ");
  scanf("%s", word);
  score = compute_scrabble_value(word);

  printf("Scrabble value: %d\n", score);

  return 0;
}

int compute_scrabble_value(const char *word) {
  int score = 0, len = strlen(word);
  char c;

  for(int i = 0; i < len; i++) {
    c = toupper(word[i]);

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

  return score;
}