#include <stdio.h>
#include <stdlib.h>

typedef struct Student{
  char name[8];
  int korean_score, english_score, math_score;
  float score_mean;
} Student;

int main(void) {
  int n;

  scanf("%d", &n);

  Student* arr = (Student*)malloc(sizeof(Student) * n);

  for(int i = 0; i < n; i++) {
    scanf("%s %d %d %d", arr[i].name, &arr[i].korean_score, &arr[i].english_score, &arr[i].math_score);
    arr[i].score_mean = (arr[i].korean_score + arr[i].english_score + arr[i].math_score);
    arr[i].score_mean /= 3;
  }

  for(int i = 0; i < n; i++) {
    printf("%s %.1f ", arr[i].name, arr[i].score_mean);
    if(arr[i].korean_score >= 90 || arr[i].english_score >= 90 || arr[i].math_score >= 90)
      printf("GREAT ");
    if(arr[i].korean_score < 70 || arr[i].english_score < 70 || arr[i].math_score < 70)
      printf("BAD");
    printf("\n");
  }

  return 0;
}