#include <stdio.h>

int main(void) {
  int h, m, time;
  int plane[2][8] = {{480, 583, 679, 767, 840, 945, 1140, 1305}, {616, 712, 811, 900, 968, 1075, 1280, 1438}};
  int min, mint, t;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &h, &m);
  time = h * 60 + m;

  for(int i = 0; i < 8; i++) {
    if(time <= plane[0][0]) {
      t = 0;
      break;
    }
    if(plane[0][i] >= time) {
      if(i == 7) {
        t = 7;
        break;
      }
      if(plane[0][i] - time < plane[0][i + 1] - time) {
        t = i;
        break;
      }
      else {
        t = i + 1;
        break;
      }
    }
  }

  switch (t)
  {
  case 0:
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    break;
  case 1:
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    break;
  case 2:
    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    break;
  case 3:
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    break;
  case 4:
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    break;
  case 5:
    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    break;
  case 6:
    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    break;
  case 7:
    printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    break;
  }

  return 0;
}