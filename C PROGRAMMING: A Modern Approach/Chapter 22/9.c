#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25

struct part
{
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
};

int main(int argc, char *argv[])
{
  FILE *fp1, *fp2, *fp3;
  int num1, num2;
  struct part part1, part2;

  fp1 = fopen(argv[1], "rb");
  fp2 = fopen(argv[2], "rb");
  fp3 = fopen(argv[3], "wb");

  num1 = fread(&part1, sizeof(struct part), 1, fp1);
  num2 = fread(&part2, sizeof(struct part), 1, fp2);

  while (num1 == 1 && num2 == 1)
    if (part1.number < part2.number)
    {
      fwrite(&part1, sizeof(struct part), 1, fp3);
      num1 = fread(&part1, sizeof(struct part), 1, fp1);
    }
    else if (part1.number > part2.number)
    {
      fwrite(&part2, sizeof(struct part), 1, fp3);
      num2 = fread(&part2, sizeof(struct part), 1, fp2);
    }
    else
    {
      part1.on_hand += part2.on_hand;
      fwrite(&part1, sizeof(struct part), 1, fp3);
      num1 = fread(&part1, sizeof(struct part), 1, fp1);
      num2 = fread(&part2, sizeof(struct part), 1, fp2);
    }

  while (num1 == 1)
  {
    fwrite(&part1, sizeof(struct part), 1, fp3);
    num1 = fread(&part1, sizeof(struct part), 1, fp1);
  }
  while (num2 == 1)
  {
    fwrite(&part2, sizeof(struct part), 1, fp3);
    num2 = fread(&part2, sizeof(struct part), 1, fp2);
  }

  fclose(fp1);
  fclose(fp2);
  fclose(fp3);

  return 0;
}