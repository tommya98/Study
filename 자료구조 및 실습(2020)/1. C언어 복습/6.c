#include <stdio.h>

typedef struct Student {
  char name[10];
  int score;
} Student;

int main(void) {
  Student arr[5];
  float mean = 0;

  for(int i = 0; i < 5; i++) {
    scanf("%s %d", arr[i].name, &arr[i].score);
    mean += arr[i].score;
  }

  mean /= 5;

  for(int i = 0; i < 5; i++) {
    if(arr[i].score <= mean)
      printf("%s\n",arr[i].name);
  }

  return 0;
}