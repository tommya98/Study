#include <stdio.h>
#include <time.h>

int year(struct tm *time);
int month(struct tm *time);

int main(void)
{
  time_t curr;
  struct tm *curTime;

  curr = time(NULL);
  curTime = localtime(&curr);

  printf("년도: %d\n", year(curTime));
  printf("월: %d\n", month(curTime));

  return 0;
}

int year(struct tm *time)
{
  return time->tm_year + 1900;
}
int month(struct tm *time)
{
  return time->tm_mon + 1;
}