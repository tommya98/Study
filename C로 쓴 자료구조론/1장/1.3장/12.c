#include <stdio.h>
 
void func(char*, int);

int main(void) {
  int n;
  printf("n(<=26): ");
  scanf("%d", &n);
  char set[26] = {'a','b','c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  func(set, n);

  return 0;
}

void func(char *set, int n) {
  int size = 1;
  for(int i = 0; i < n; i++)
    size *= 2;
  for(int i = 0; i < size; i++) {
    printf("{ ");
    for(int j = 0; j < n; j++) {
      if(i & (1 << j))
        printf("%c ", set[j]);
    }
    if(i == size - 1)
      printf("} ");
    else
      printf("}, ");
  }
  printf("\n");
}