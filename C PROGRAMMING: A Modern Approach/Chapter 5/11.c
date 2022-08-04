#include <stdio.h>

int main(void) {
  int a, b;

  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &a, &b);

  printf("You entered the number ");
  switch(a) {
    case 1: 
      if(b == 0) {
        printf("ten.\n");
      }
      else if(b == 1) {
        printf("eleven.\n");
      }
      else if(b == 2) {
        printf("twelve.\n");
      }
      else if(b == 3) {
        printf("thirteen.\n");
      }
      else if(b== 4) {
        printf("fourteen.\n");
      }
      else if(b == 5) {
        printf("fifteen.\n");
      }
      else if(b == 6) {
        printf("sixteen.\n");
      }
      else if(b == 7) {
        printf("seventeen.\n");
      }
      else if(b == 8) {
        printf("eightenn.\n");
      }
      else {
        printf("ninteen.\n");
      }
      break;
    case 2:
      printf("twemty");
      break;
    case 3:
      printf("thirty");
      break;
    case 4:
      printf("fourty");
      break;
    case 5:
      printf("fifty");
      break;    
    case 6:
      printf("sixty");
      break;    
    case 7:
      printf("seventy");
      break;    
    case 8:
      printf("eighty");
      break;    
    case 9:
      printf("ninty");
      break;    
  }

  if(a != 1) {
    switch(b) {
      case 0:
        printf(".\n");
        break;
      case 1:
        printf("-one.\n");
        break;
      case 2:
        printf("-two.\n");
        break;
      case 3:
        printf("-three.\n");
        break;
      case 4:
        printf("-four.\n");
        break;
      case 5:
        printf("-five.\n");
        break;
      case 6:
        printf("-six.\n");
        break;
      case 7:
        printf("-seven.\n");
        break;
      case 8:
        printf("-eight.\n");
        break;
      case 9:
        printf("-nine.\n");
        break;
    }
  }

  return 0;
}