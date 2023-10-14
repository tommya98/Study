#include <stdio.h>
#include <time.h>

struct world
{
  int diff;
  char *country;
};

time_t calcWorldTime(time_t curr, int diff);

int main(void)
{
  time_t curr;
  time_t worldTime;
  struct world country[8] = {
      {-9, "그리니치 런던"},
      {-8, "로마 파리"},
      {-2, "방콕"},
      {-1, "홍콩 베이징"},
      {0, "서울 동경"},
      {+2, "시드니 멜버른"},
      {-17, "로스엔젤레스"},
      {-14, "뉴욕"},
  };

  curr = time(NULL);

  for (int i = 0; i < 8; i++)
  {
    worldTime = calcWorldTime(curr, country[i].diff);
    printf("%s: %s", country[i].country, ctime(&worldTime));
  }

  return 0;
}

time_t calcWorldTime(time_t curr, int diff)
{
  return curr + 3600 * diff;
}