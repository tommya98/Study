#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void) {
  char reminders[MAX_REMIND][MSG_LEN + 9];
  char day_str[3], msg_str[MSG_LEN + 1], time_str[6];
  int day, i, j, k, num_remind = 0, t1, t2;

  for(;;) {
    if(num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter day and reminder: ");
    scanf("%2d", &day);
    if(day == 0) {
      break;
    }
    sprintf(day_str, "%2d", day);
    scanf("%d:%d", &t1, &t2);
    sprintf(time_str, "%02d:%02d", t1, t2);
    read_line(msg_str, MSG_LEN);

    for(i = 0; i < num_remind; i++) {
      if(strcmp(day_str, reminders[i]) < 0) {
        break;
      }
    }
    for(k = i; k < num_remind; k++) {
      char temp_str[10];
      strcpy(temp_str, day_str);
      strcat(temp_str, " ");
      strcat(temp_str, time_str);
      if(strcmp(temp_str, reminders[k]) < 0) {
        break;
      }
    }
    for(j = num_remind; j > k; j--) {
      strcpy(reminders[j], reminders[j - 1]);
    }

    strcpy(reminders[k], day_str);
    strcat(reminders[k], " ");
    strcat(reminders[k], time_str);
    strcat(reminders[k], msg_str);

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