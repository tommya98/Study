#include <stdio.h>

int main(void) {
  char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  int mm, dd, yyyy;

  printf("Enter a dame (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &mm, &dd, &yyyy);

  printf("You entered the date %s %d, %d\n", month[mm - 1], dd, yyyy);

  return 0;
}