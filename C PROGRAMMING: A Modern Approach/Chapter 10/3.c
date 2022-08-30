#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

char hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs;

void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void) {  
  for(;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
}

void read_cards(void) {
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;

  for(int i = 0; i < NUM_CARDS; i++) {
    hand[i][0] = '0';
    hand[i][1] = '0';
  }

  while(cards_read < NUM_CARDS) {
    bad_card = false;

    printf("Enter a card: ");

    rank_ch = getchar();
    switch(rank_ch) {
      case '0':
        exit(EXIT_SUCCESS);
      case '2':
        rank = 0;
        break;
      case '3':
        rank = 1;
        break;
      case '4':
        rank = 2;
        break;
      case '5':
        rank = 3;
        break;
      case '6':
        rank = 4;
        break;
      case '7':
        rank = 5;
        break;
      case '8':
        rank = 6;
        break;
      case '9':
        rank = 7;
        break;
      case 't':
      case 'T':
        rank = 8;
        break;
      case 'j':
      case 'J':
        rank = 9;
        break;
      case 'q':
      case 'Q':
        rank = 10;
        break;
      case 'k':
      case 'K':
        rank = 11;
        break;
      case 'a':
      case 'A':
        rank = 12;
        break;
      default:
        bad_card = true;
    }

    suit_ch = getchar();
    switch(suit_ch) {
      case 'c':
      case 'C':
        suit = 0;
        break;
      case 'd':
      case 'D':
        suit = 1;
        break;
      case 'h':
      case 'H':
        suit = 2;
        break;
      case 's':
      case 'S':
        suit = 3;
        break;
      default:
        bad_card = true;
    }

    while((ch = getchar() != '\n')) {
      if(ch != ' ') {
        bad_card = true;
      }
    }

    if(bad_card) {
      printf("Bad card; ignored.\n");
      continue;
    }

    bool dupli = false;
    for(int i = 0; i < cards_read; i++) {
      if(hand[i][0] == rank && hand[i][1] == suit) {
        printf("Duplicate card; ignored.\n");
        dupli = true;
        break;
      }
    }
    if(dupli) {
      continue;
    }
    else {
      hand[cards_read][0] = rank;
      hand[cards_read][1] = suit;
      cards_read++;
    }
  }
}

void analyze_hand(void) {
  char temp1;
  int rank, suit, card = 0, con = 0;

  straight = true;
  flush = true;
  four = false;
  three = false;
  pairs = 0;

  for (int i = 1; i < NUM_CARDS; i++) {
    for (int j = 0; j < NUM_CARDS - i; j++) {
      rank = hand[j][0];
      suit = hand[j][1];
      if (hand[j+1][0] < rank) {
        hand[j][0] = hand[j+1][0];
        hand[j][1] = hand[j+1][1];
        hand[j+1][0] = rank;
        hand[j+1][1] = suit;
      }
    }
  }

  for(int i = 0; i < NUM_CARDS; i++) {
    if(i == 0) {
      temp1 = hand[i][1];
    }
    if(temp1 != hand[i][1]) {
      flush = false;
    }
  }

  for (int i = 0; i < NUM_CARDS - 1; i++) {
    if (hand[i][0] + 1 != hand[i+1][0]) {
      straight = false;
    }
  }

  while (card < NUM_CARDS) {
    rank = hand[card][0];
    do {
      con++;
      card++;
    } while (card < NUM_CARDS && hand[card][0] == rank);
    switch (con) {
      case 2: 
        pairs++;
        break;
      case 3:
        three = true;
        break;
      case 4:
        four = true;
        break;
    }
  }
}

void print_result(void) {
  if(straight && flush) {
    printf("Straight flush");
  }
  else if(four) {
    printf("Four of a kind");
  }
  else if(three && pairs == 1) {
    printf("Full house");
  }
  else if(flush) {
    printf("Flush");
  }
  else if(straight) {
    printf("Straight");
  }
  else if(three) {
    printf("Three of a kind");
  }
  else if(pairs == 2) {
    printf("Two pairs");
  }
  else if(pairs == 1) {
    printf("Pair");
  }
  else {
    printf("High card");
  }

  printf("\n\n");
}