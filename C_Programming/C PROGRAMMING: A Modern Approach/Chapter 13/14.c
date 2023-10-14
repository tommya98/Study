#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool are_anagrams(const char *word1, const char *word2);

int main(void) {
  char word1[100], word2[100];

  printf("Enter first word: ");
  scanf("%s", word1);
  printf("Enter second word: ");
  scanf("%s", word2);

  if(are_anagrams(word1, word2)) {
    printf("The words are anagrams.\n");
  }
  else {
    printf("The words are not anagrams.\n");
  }

  return 0;
}

bool are_anagrams(const char *word1, const char *word2) {
  char arr[26] = {0};
  int len1 = strlen(word1), len2 = strlen(word2);

  for(int i = 0; i < len1; i++) {
    arr[tolower(word1[i]) - 'a']++;
  }

  for(int i = 0; i < len2; i++) {
    arr[tolower(word2[i]) - 'a']--;
  }

  for(int i = 0; i < 26; i++) {
    if(arr[i] != 0) {
      return false;
    }
  }
  return true;
}