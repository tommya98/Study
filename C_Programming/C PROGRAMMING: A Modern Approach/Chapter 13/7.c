#include <stdio.h>

int main(void) {
  int a, b;
  char *c0[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eightenn", "ninteen"};
  char *c1[10] = {NULL, NULL, "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty"};
  char *c2[10] = {NULL, "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &a, &b);

  printf("You entered the number ");
  if(a == 1) {
    printf("%s\n", c0[b]);
  }
  else {
    printf("%s-%s\n", c1[a], c2[b]);
  }
  
  return 0;
}