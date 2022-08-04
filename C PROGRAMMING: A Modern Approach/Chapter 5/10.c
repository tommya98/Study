#include <stdio.h>

int main(void) {
  int score;

  printf("Enter numerical grade: ");
  scanf("%d", &score);

  if(score > 100 || score < 0) {
    printf("Error\n");
  }
  else {
    switch(score / 10) {
      case 10:
      case 9:
        printf("Letter grade: A\n");
        break;
      case 8:
        printf("Letter grade: B\n");
        break;
      case 7:
        printf("Letter grade: C\n");
        break;
      case 6:
        printf("Letter grade: D\n");
        break;
      case 5:
        printf("Letter grade: E\n");
        break;
      default:
        printf("Letter grade: F\n");
        break;
    }
  }

  return 0;
}