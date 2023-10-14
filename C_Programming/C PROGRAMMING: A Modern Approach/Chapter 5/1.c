#include <stdio.h>

int main(void) {
  int n;
  
  printf("Enter a number: ");
  scanf("%d", &n);

  if(n / 10 == 0) {
    printf("The number %d has 1 digits\n", n);
  }
  else if(n / 100 == 0) {
    printf("The number %d has 2 digits\n", n);
  }
  else if(n / 1000 == 0) {
    printf("The number %d has 3 digits\n", n);
  }
  else {
    printf("The number %d has 4 digits\n", n);
  }

  return 0;
}