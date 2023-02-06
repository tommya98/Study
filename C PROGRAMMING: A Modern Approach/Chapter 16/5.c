#include <stdio.h>

typedef struct {
  int departure, arrival;
} timeline;

int main(void) {
  int h, m, time, i;

  timeline airplane[8] = {{480, 616}, {583, 712}, {679, 811}, {767, 900}, {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}};

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &h, &m);
  time = h * 60 + m;

  for(i = 0; i < 8; i++) {
    if(airplane[i].departure > time) {
      break;
    }
  }

  printf("Closest departure time is ");
  if(airplane[i].departure >= 600) {
    if(airplane[i].departure < 660) {
      printf("12:%02d p.m., ", ((airplane[i].departure - 600) % 60));
    }
    else {
      printf("%d:%02d p.m., ", ((airplane[i].departure - 600) / 60), ((airplane[i].departure - 600) % 60));
    }
  }
  else {
    printf("%d:%02d a.m., ", (airplane[i].departure / 60), (airplane[i].departure % 60));
  }
  printf("arriving at ");
  if(airplane[i].arrival >= 600) {
    if(airplane[i].arrival < 660) {
      printf("12:%02d p.m.\n", ((airplane[i].arrival - 600) % 60));
    }
    else {
      printf("%d:%02d p.m.\n", ((airplane[i].arrival - 600) / 60), ((airplane[i].arrival - 600) % 60));
    }
  }
  else {
    printf("%d:%02d a.m.\n", (airplane[i].arrival / 60), (airplane[i].arrival % 60));
  }

  return 0;
}