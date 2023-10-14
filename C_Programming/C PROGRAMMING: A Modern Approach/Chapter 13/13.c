#include <stdio.h>
#include <string.h>

void encrypt(char *message, int shift);

int main(void) {
  int i, n;
  char str[81];

  printf("Enter message to be encrypted: ");
  for(i = 0; ; i++) {
    str[i] = getchar();
    if(str[i] == '\n') {
      str[i] = '\0';
      break;
    }
  }

  printf("Enter shift amount (1-25): ");
  scanf("%d", &n);

  encrypt(str, n);

  return 0;
}

void encrypt(char *message, int shift) {
  int len = strlen(message);

  printf("Encrypted message: ");
  for(int i = 0; i < len; i++) {
    if(message[i] >= 'A' && message[i] <= 'Z') {
      message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
    }
    if(message[i] >= 'a' && message[i] <= 'z') {
      message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
    }
    printf("%c", message[i]);
  }
  printf("\n");

  
}