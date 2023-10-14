#include <stdio.h>
#include <string.h>

int count_word(char*, char*);

int main(void) {
  char str[100], word[100];

  printf("문자열을 입력하세요: ");
  scanf("%s", str);
  printf("단어를 입력하세요: ");
  scanf("%s", word);

  printf("%s는 문자열에 %d개 있습니다.\n", word, count_word(str, word));

  return 0;
}

int count_word(char* str, char* word) {
  int count = 0, len_w = strlen(word), len_s = strlen(str);

  int t = len_s - len_w;
  for(int i = 0; i <= t; i++) {
    int temp = 0;
    for(int j = 0; j < len_w; j++) {
      if(str[i + j] != word[j]) {
        temp = 1;
        break;
      }
    }
    if(temp == 0) {
      count++;
    }
  }

  return count;
}