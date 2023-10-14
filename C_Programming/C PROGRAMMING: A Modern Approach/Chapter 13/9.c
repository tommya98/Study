#include <stdio.h>
#include <string.h>

int compute_vowel_count(const char *sentence);

int main(void) {
  int count = 0;
  char str[100];

  printf("Enter a sentence: ");
  scanf("%s", str);
  
  count = compute_vowel_count(str);

  printf("Your sentence contains %d vowels.\n", count);

  return 0;
}

int compute_vowel_count(const char *sentence) {
  int len = strlen(sentence), count = 0;

  for(int i = 0; i < len; i++) {
    if(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] =='u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U') {
      count++;
    }
  }

  return count;
}