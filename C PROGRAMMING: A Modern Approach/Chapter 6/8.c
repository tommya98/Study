#include <stdio.h>

int main(void) {
  int date, day;

  printf("Enter number of days in month: ");
  scanf("%d", &date);
  printf("Enter starting day of the week (1=sun, 7=sat): ");
  scanf("%d", &day);


  for(int i = 1; i < day; i++) {
    printf("          ");
  }
  for(int i = 1; i <= date; i++) {
    printf("%10d", i);
    if((i + day - 1) % 7 == 0) {
      printf("\n");
    }
  }
  printf("\n");

  return 0;
}