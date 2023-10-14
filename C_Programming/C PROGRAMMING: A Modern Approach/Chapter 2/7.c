#include <stdio.h>

int main(void) {
  int dollar;

  printf("Enter a dollar amount : ");
  scanf("%d",&dollar);
  printf("\n$20 bills : %d\n",dollar / 20);
  printf("$10 bills : %d\n",(dollar % 20) / 10);
  printf(" $5 bills : %d\n",(dollar % 10) / 5);
  printf(" $1 bills : %d\n",(dollar % 5));

  return 0;
}