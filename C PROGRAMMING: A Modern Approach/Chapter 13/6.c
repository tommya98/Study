#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int check(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  int i, j;

  for(i = 1; i < argc; i++) {
    for(j = 0; j < NUM_PLANETS; j++)
      if(check(argv[i], planets[j])) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    if(j == NUM_PLANETS) {
      printf("%s is not a planet\n", argv[i]);
    }
  }

  return 0;
}

int check(const char *s1, const char *s2) {
  for(int i = 0; toupper(s1[i]) == toupper(s2[i]); i++) {
    if(s1[i] == '\0') {
      return 1;
    }
  }

  return 0;
}