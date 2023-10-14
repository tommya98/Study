#include <stdio.h>

int main(void) {
  float loan, rate, pay;
  int n;

  printf("Enter amount of loan : ");
  scanf("%f",&loan);
  printf("Enter interest rate : ");
  scanf("%f",&rate);
  rate /= 100;
  rate /= 12;
  printf("Enter monthly payment : ");
  scanf("%f",&pay);
  printf("Enter the number of payments : ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    loan = loan * (1 + rate) - pay;
    printf("Balance remaining after %d payment : $%.2f\n", i, loan);
  }

  return 0;
}