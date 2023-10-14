#include <stdio.h>
#include <time.h>

time_t calcNDayAfter(time_t curr, int n);

int main(void)
{
  time_t curr;
  time_t nDayAfter;
  int n;

  curr = time(NULL);
  printf("N을 입력하세요: ");
  scanf("%d", &n);

  nDayAfter = calcNDayAfter(curr, n);
  printf("%s", ctime(&nDayAfter));

  return 0;
}

time_t calcNDayAfter(time_t curr, int n)
{
  return curr + 86400 * n;
}