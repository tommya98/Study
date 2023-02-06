#include <stdio.h>

struct date {
  int year, month, day;
};

void compare_dates(struct date d1, struct date d2);

int main(void) {
  struct date d1, d2;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

  compare_dates(d1, d2);

  return 0;
}

void compare_dates(struct date d1, struct date d2) {
  if(d1.year < d2.year) {
    printf("%d/%d/%02d is earlier than %d/%d/%02d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
  }
  else if(d1.year > d2.year) {
    printf("%d/%d/%02d is earlier than %d/%d/%02d\n", d2.month, d2.day, d2.year, d1.month, d2.day, d1.year);
  }
  else {
    if(d1.month < d2.month) {
      printf("%d/%d/%02d is earlier than %d/%d/%02d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
    }
    else if(d1.month > d2.month) {
      printf("%d/%d/%02d is earlier than %d/%d/%02d\n", d2.month, d2.day, d2.year, d1.month, d2.day, d1.year);
    }
    else {
      if(d1.day < d2.day) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
      }
      else if(d1.day > d2.day) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", d2.month, d2.day, d2.year, d1.month, d2.day, d1.year);
      }
      else {
        printf("%d/%d/%02d and %d/%d/%02d is same date\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
      }
    }
  }
}