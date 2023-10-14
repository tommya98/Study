#include <stdio.h>
#include <time.h>
#include <unistd.h>

void timer(int sec);

int main(void)
{
  int n;

  printf("몇 초 후 알람: ");
  scanf("%d", &n);

  timer(n);

  return 0;
}

void timer(int sec)
{
  sleep(sec);
  printf("\a");
}