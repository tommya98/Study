#include <stdio.h>

void print_square();
void print_triangle();
void print_diamond();
void print_heart();

int main(void) {
  print_square();
  printf("\n");

  print_triangle();
  printf("\n");

  print_diamond();
  printf("\n");

  print_heart();
  printf("\n");

  return 0;
}

void print_square() {
  for(int i = 0; i < 5; i++) {
    printf("%c%c%c ", -30, -106, -96);
  }
  printf("\n");

  printf("%c%c%c ", -30, -106, -96);
  printf("      ");
  printf("%c%c%c ", -30, -106, -96);
  printf("\n");

  printf("%c%c%c ", -30, -106, -96);
  printf("      ");
  printf("%c%c%c ", -30, -106, -96);
  printf("\n");

  for(int i = 0; i < 5; i++) {
    printf("%c%c%c ", -30, -106, -96);
  }
  printf("\n");
}

void print_triangle() {
  for(int i = 1; i <= 5; i++) {
    for(int j = 0; j < i; j++) {
      printf("%c%c%c ", -30, -106, -77);
    }
    printf("\n");
  }
}

void print_diamond() {
  for(int i = 0; i < 5; i++) {
    for(int j = 4 - i; j > 0; j--) {
      printf(" ");
    }
    printf("%c%c%c ", -30, -105, -122);
    if(i == 0) {
      printf("\n");
      continue;
    }
    for(int j = 0; j < 2 * (i - 1); j++) {
      printf(" ");
    }
    printf("%c%c%c ", -30, -105, -122);
    printf("\n");
  }

}

void print_heart() {
  for(int i = 1; i <= 3; i++) {
    for(int j = 3 - i; j > 0; j--) {
      printf(" ");
    }
    for(int j = 1; j <= i; j++) {
      printf("%c%c%c ", -30, -103, -91);
    }
    printf("\n");
  }
  for(int i = 1; i >= 0; i--) {
    for(int j = 2 - i; j > 0; j--) {
      printf(" ");
    }
    for(int j = 1; j <= i + 1; j++) {
      printf("%c%c%c ", -30, -103, -91);
    }    
    printf("\n");
  }
}