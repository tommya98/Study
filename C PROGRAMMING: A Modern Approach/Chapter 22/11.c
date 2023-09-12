#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int month, day, year;
  const char *MONTHS[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  sscanf(argv[1], "%d%*[-/]%d%*[-/]%d", &month, &day, &year);
  printf("%s %.2d, %.4d\n", MONTHS[month - 1], day, year);

  return 0;
}