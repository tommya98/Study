#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void) {
  char reminders[MAX_REMIND][MSG_LEN + 6];
  char day_str[3], msg_str[MSG_LEN + 1], month_str[3], temp_str[6];
  int day, month, i, j, k, num_remind = 0;

  for(;;) {
    if(num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter day and reminder: ");
    scanf("%2d/%2d", &month, &day);
    if(day == 0 || month == 0) {
      break;
    }
    sprintf(day_str, "%d", day);
    sprintf(month_str, "%d", month);
    strcpy(temp_str, month_str);
    strcat(temp_str, "/");
    strcat(temp_str, day_str);
    read_line(msg_str, MSG_LEN);

    for(i = 0; i < num_remind; i++) {
      if(strcmp(temp_str, reminders[i]) < 0) {
        break;
      }
    }
    for(j = num_remind; j > i; j--) {
      strcpy(reminders[j], reminders[j - 1]);
    }

    strcpy(reminders[i], temp_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Reminder\n");
  for(i = 0; i < num_remind; i++) {
    printf(" %s\n", reminders[i]);
  }

  return 0;
}

int read_line(char str[], int n) {
  int ch, i = 0;

  while((ch = getchar()) != '\n') {
    if(i < n) {
      str[i++] = ch;
    }
  }

  str[i] = '\0';

  return i;
}