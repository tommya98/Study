#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int[26]);
bool equal_array(int[26], int[26]);

int main(void) {
  int arr1[26] = {0}, arr2[26] = {0};
  bool result;
  
  printf("Enter first word: ");
  read_word(arr1);

  printf("Enter second word: ");
  read_word(arr2);

  result = equal_array(arr1, arr2);

  if(result) {
    printf("The words are anagrams.\n");
  }
  else {
    printf("The words are not anagrams.\n");
  }

  return 0;
}

void read_word(int counts[26]) {
  while(1) {
    char ch = getchar();
    if(ch == '\n') {
      break;
    }
    ch = tolower(ch);
    counts[ch - 'a']++;
  }
}

bool equal_array(int counts1[26], int counts2[26]) {
  for(int i = 0; i < 26; i++) {
    if(counts1[i] != counts2[i]) {
      return false;
    }
  }

  return true;
}