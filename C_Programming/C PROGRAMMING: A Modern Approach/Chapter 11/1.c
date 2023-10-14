#include <stdio.h>

void pay_amount(int, int*, int*, int*, int*);

int main(void) {
  int dollar, twenties, tens, five, ones;

  printf("Enter a dollar amount : ");
  scanf("%d",&dollar);
  
  pay_amount(dollar, &twenties, &tens, &five, &ones);
  
  printf("\n$20 bills : %d\n", twenties);
  printf("$10 bills : %d\n", tens);
  printf(" $5 bills : %d\n", five);
  printf(" $1 bills : %d\n", ones);

  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *five, int *ones) {
  *twenties = dollars / 20;
  *tens = (dollars % 20) / 10;
  *five = (dollars % 10) / 5;
  *ones = dollars % 5;
}