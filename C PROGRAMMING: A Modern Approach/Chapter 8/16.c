#include <stdio.h>
#include <ctype.h>

int main(void) {
  char arr[26] = {0};
  int anagram = 1;
  
  printf("Enter first word: ");
  while(1) {
    char ch = getchar();
    if(ch == '\n') {
      break;
    }
    ch = tolower(ch);
    arr[ch - 'a']++;
  }

  printf("Enter second word: ");
  while(1) {
    char ch = getchar();
    if(ch == '\n') {
      break;
    }
    ch = tolower(ch);
    arr[ch - 'a']--;
  }

  for(int i = 0; i < 26; i++) {
    if(arr[i] != 0) {
      anagram = 0;
      break;
    }
  }

  if(anagram) {
    printf("The words are anagrams.\n");
  }
  else {
    printf("The words are not anagrams.\n");
  }

  return 0;
}