#include <stdio.h>

int main(void) {
  float loan, rate, pay;

  printf("Enter amount of loan : ");
  scanf("%f",&loan);
  printf("Enter interest rate : ");
  scanf("%f",&rate);
  rate /= 100;
  rate /= 12;
  printf("Enter monthly payment : ");
  scanf("%f",&pay);

  loan = loan * (1 + rate) - pay;
  printf("Balance remaining after first payment : $%.2f\n", loan);
  loan = loan * (1 + rate) - pay;
  printf("Balance remaining after second payment : $%.2f\n", loan);
  loan = loan * (1 + rate) - pay;
  printf("Balance remaining after third payment : $%.2f\n", loan);

  return 0;
}