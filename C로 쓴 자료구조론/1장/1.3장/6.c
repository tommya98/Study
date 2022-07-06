#include <stdio.h>

int main(void){
  int n, sum = 0, n2;

  printf("n: ");
  scanf("%d",&n);
  n2 = n / 2;
  for(int i = 1; i <= n2; i++) {
    int t = n % i;
    if(!t)
      sum += i;
  }
  if(n == sum)
    printf("%d은(는) 자신의 모든 제수들의 합이다.", n);
  else
    printf("%d은(는) 자신의 모든 제수들의 합이 아니다.", n);

  return 0;
}