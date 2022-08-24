#include <stdio.h>

float income_to_tax(float);

int main(void) {
  float income;

  printf("Enter the taxable income: ");
  scanf("%f", &income);

  printf("Tax: $%.2f\n", income_to_tax(income));

  return 0;
}

float income_to_tax(float income) {
  if(income <= 750) {
    return income * 0.01f;
  }
  else if(income <= 2250) {
    return 7.5f + (income - 750) * 0.02f;
  }
  else if(income <= 3750) {
    return 37.5f + (income - 2250) * 0.03f;
  }
  else if(income <= 5250) {
    return 82.5f + (income - 3750) * 0.04f;
  }
  else if(income <= 7000) {
    return 142.5f + (income - 5250) * 0.05f;
  }
  else {
    return 230.0f + (income - 7000) * 0.06f;
  }
}