#include <stdio.h>

void find_closest_flight(int, int*, int*);

int main(void) {
  int h, m, time, departure, arrival;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &h, &m);
  time = h * 60 + m;

  find_closest_flight(time, &departure, &arrival);

  if(departure >= 720) {
    //출발 오후 도착 오후
    if(departure / 60 == 12) {
        printf("Closest departure time is %d:%02d p.m., arriving at %d:%02d p.m.\n", departure / 60, departure % 60, (arrival - 720) / 60, arrival % 60);      
    }
    else {
        printf("Closest departure time is %d:%02d p.m., arriving at %d:%02d p.m.\n", (departure - 720) / 60, departure % 60, (arrival - 720) / 60, arrival % 60);        
    }
  }
  else {
    if(arrival >= 720) {
      //출발 오전 도착 오후
      if(arrival / 60 == 12) {
        printf("Closest departure time is %d:%02d a.m., arriving at %d:%02d p.m.\n", departure / 60, departure % 60, arrival / 60, arrival % 60);
      }
      else {
        printf("Closest departure time is %d:%02d a.m., arriving at %d:%02d p.m.\n", departure / 60, departure % 60, (arrival - 720) / 60, arrival % 60);        
      }
    }
    else {
      //출발 오전 도착 오전
      printf("Closest departure time is %d:%02d a.m., arriving at %d:%02d a.m.\n", departure / 60, departure % 60, arrival / 60, arrival % 60);
    }
  }

  return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
  if(desired_time <= 531) {
    *departure_time = 480;
    *arrival_time = 616;
  }
  else if(desired_time <= 631) {
    *departure_time = 583;
    *arrival_time = 712;
  }
  else if(desired_time <= 723) {
    *departure_time = 679;
    *arrival_time = 811;
  }
  else if(desired_time <= 876) {
    *departure_time = 767;
    *arrival_time = 900;
  }  
  else if(desired_time <= 997) {
    *departure_time = 840;
    *arrival_time = 968;
  }  
  else if(desired_time <= 1237) {
    *departure_time = 945;
    *arrival_time = 1075;
  }  
  else if(desired_time <= 1387) {
    *departure_time = 1140;
    *arrival_time = 1280;
  }
  else {
    *departure_time = 1305;
    *arrival_time = 1438;
  }
}