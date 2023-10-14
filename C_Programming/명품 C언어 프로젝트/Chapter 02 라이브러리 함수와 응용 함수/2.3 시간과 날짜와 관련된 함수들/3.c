#include <stdio.h>
#include <time.h>

int weekday(int year, int month, int day);

int main(void)
{
  int year, month, day;
  long total;

  printf("usage: YYYY MM DD Enter\n");
  scanf("%d %d %d", &year, &month, &day);

  printf("요일: %d\n", weekday(year, month, day));

  return 0;
}

int weekday(int year, int month, int day)
{
  int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  long total = 0;

  total = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
  if (!(year % 4) && year % 100 || !(year % 400))
    months[1]++;
  for (int i = 0; i < month - 1; i++)
    total += months[i];
  total += day;

  return total % 7;
}