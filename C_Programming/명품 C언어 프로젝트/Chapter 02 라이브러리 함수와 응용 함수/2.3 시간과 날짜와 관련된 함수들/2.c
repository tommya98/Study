#include <stdio.h>
#include <time.h>

int hour(struct tm *time);
int minute(struct tm *time);

int main(void)
{
  time_t curr;
  struct tm *curTime;

  curr = time(NULL);
  curTime = localtime(&curr);

  printf("시간: %d\n", hour(curTime));
  printf("분: %d\n", minute(curTime));

  return 0;
}

int hour(struct tm *time)
{
  return time->tm_hour;
}
int minute(struct tm *time)
{
  return time->tm_min;
}