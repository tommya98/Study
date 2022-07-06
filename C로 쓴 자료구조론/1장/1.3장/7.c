#include <stdio.h>

int func(int);

int main(void) {
  int n, ans1, ans2 = 1;
  printf("n: ");
  scanf("%d",&n);
  ans1 = func(n);
  for(int i = 1; i <= n; i++)
    ans2 *= i;
  printf("순환 함수로 구한 %d!: %d\n",n, ans1);
  printf("반복 함수로 구한 %d!: %d\n",n, ans2);

  return 0;
}

int func(int n){
  if(n == 1)
    return 1;
  else
    return n * func(n-1);
}