#include <stdio.h>

int main(void) {
  int score[5][5];
  int total = 0;
  float average_student[5] = {0};
  float average_quiz[5] = {0};
  int high_quiz[5] = {0};
  int low_quiz[5] = {1000, 1000, 1000, 1000, 1000};

  for(int i = 0; i < 5; i++) {
    printf("Enter student %d score: ", i + 1);
    for(int j = 0; j < 5; j++) {
      scanf("%d", &score[i][j]);
    }
  }

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      total += score[i][j];
      average_student[i] += score[i][j];
      average_quiz[j] += score[i][j];
      if(high_quiz[j] < score[i][j]) {
        high_quiz[j] = score[i][j];
      }
      if(low_quiz[j] > score[i][j]) {
        low_quiz[j] = score[i][j];
      }
    }
  }

  printf("Total score: %d", total);
  printf("\n");

  printf("Average score for each student: ");
  for(int i = 0; i < 5; i++) {
    printf("%.2f ", average_student[i] / 5);
  }
  printf("\n");

  printf("Average score for each quiz: ");
  for(int i = 0; i < 5; i++) {
    printf("%.2f ", average_quiz[i] / 5);
  }  
  printf("\n");

  printf("High score for each quiz: ");
  for(int i = 0; i < 5; i++) {
    printf("%d ", high_quiz[i]);
  }
  printf("\n");

  printf("Low score for each quiz: ");
  for(int i = 0; i < 5; i++) {
    printf("%d ", low_quiz[i]);
  }  
  printf("\n");

  return 0;
}