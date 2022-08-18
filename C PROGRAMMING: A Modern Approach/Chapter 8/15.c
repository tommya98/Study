#include <stdio.h>

int main(void) {
  int i, n;
  char arr[81];

  printf("Enter message to be encrypted: ");
  for(i = 0; ; i++) {
    arr[i] = getchar();
    if(arr[i] == '\n') {
      break;
    }
  }

  printf("Enter shift amount (1-25): ");
  scanf("%d", &n);

  printf("Encrypted message: ");
  for(int j = 0; j < i; j++) {
    if(arr[j] >= 'A' && arr[j] <= 'Z') {
      arr[j] = ((arr[j] - 'A') + n) % 26 + 'A';
    }
    if(arr[j] >= 'a' && arr[j] <= 'z') {
      arr[j] = ((arr[j] - 'a') + n) % 26 + 'a';
    }
    printf("%c", arr[j]);
  }
  printf("\n");

  return 0;
}