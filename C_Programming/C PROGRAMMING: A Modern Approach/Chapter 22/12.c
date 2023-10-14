#include <stdio.h>
#include <stdlib.h>s

int main(int argc, char *argv[])
{
  FILE *fp;
  char line[255];
  int item, year, month, day;
  float price;

  fp = fopen(argv[1], "r");
  printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");

  while (read_line(line, 255, fp) != 0)
  {
    sscanf(line, "%d,%f,%d/%d/%d", &item, &price, &month, &day, &year);
    printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d\n", item, price, month, day, year);
  }

  return 0;
}

int read_line(char str[], int n, FILE *fp)
{
  int ch, i = 0;

  while (isspace(ch = getc(fp)))
    ;

  while (ch != '\n' && ch != EOF)
  {
    if (i < n)
      str[i++] = ch;
    ch = getc(fp);
  }
  str[i] = '\0';

  return i;
}