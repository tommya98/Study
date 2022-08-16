#include <stdio.h>
   
int main(void) {
  int num1, denom1, num2, denom2, result_num, result_denom;
  char operator;
   
  printf("Enter two fractions separated by a operator sign: ");
  scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, &num2, &denom2);
   
  if(operator == '+') {
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
  }
  else if(operator == '-') {
    result_num = num1 * denom2 - num2 * denom1;
    result_denom = denom1 * denom2;
  }
  else if(operator == '*') {
    result_num = num1 * num2;
    result_denom = denom1 * denom2;
  }
  else if(operator == '/') {
    result_num = num1 * denom2;
    result_denom = denom1 * num2;
  }

  printf("The result is %d/%d\n", result_num, result_denom);
   
  return 0;
}