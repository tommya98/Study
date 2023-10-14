#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
  bool result;
  int win = 0, lose = 0;

  while(1) {
    char c;
    result = play_game();
    if(result) {
      win++;
    }
    else {
      lose++;
    }

    printf("\nPlay again? ");
    while(1) {
      c = getchar();

      if(c == 'n') {
        printf("\nWins: %d  Losses: %d\n", win, lose);
        return 0;
      }
      else if(c == 'y') {
        printf("\n");
        break;
      }
    }
  }

  return 0;
}

int roll_dice(void) {
  sleep(1);
  srand((unsigned) time(NULL));
  return (rand() % 6 + rand() % 6) + 2;
}

bool play_game(void) {
  int x, point = 0;

  while(1) {
    x = roll_dice();
    printf("You rolled: %d\n", x);

    switch(x) {
      case 7:
      case 11:
        printf("You win!\n");
        return true;
      case 2:
      case 3:
      case 12:
        printf("You lose!\n");
        return false;
      default:
        if(point == 0) {
          printf("Your point is %d\n", x);
          point = x;
        }
        else {
          if(point == x) {
            printf("You win!\n");
            return true;
          }
        }
        break;
    }
  }
}