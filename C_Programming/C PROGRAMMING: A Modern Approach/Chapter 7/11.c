#include <stdio.h>


int main(void) {
  char s1[100], s2[100];

  printf("Enter a first and last name: ");
  scanf("%s %s", s1, s2);

  printf("%s %c\n", s2, s1[0]);

  return 0;
}