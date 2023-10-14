#include <stdio.h>
#include <stdlib.h>

struct node {
  char elem;
  struct node *prev, *next;
};

void add(struct node *list, int r, char e);
void delete(struct node *list, int r);
void get(struct node *list, int r);
void print(struct node *list);

int main(void) {
  int n, a, r = 1;
  char c, b;
  struct node *header, *trailer;

  header = malloc(sizeof(struct node));
  trailer = malloc(sizeof(struct node));

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    getchar();
    scanf("%c", &c);
    switch(c) {
      case 'A':
        getchar();
        scanf("%d %c", &a, &b);
        if(a > r) {
          printf("invalid  position\n");
          break;
        }
        add(header, a, b);
        r++;
        break;
      case 'D':
        getchar();
        scanf("%d", &a);
        if(a > r) {
          printf("invalid  position\n");
          break;
        }        
        delete(header, a);
        r--;
        break;
      case 'G':
        getchar();
        scanf("%d", &a);
        if(a >= r) {
          printf("invalid  position\n");
          break;
        }
        get(header, a);
        break;
      case 'P':
        print(header);
        break;
    }
  }

  return 0;
}

void add(struct node *list, int r, char e) {
  struct node *temp = malloc(sizeof(struct node));

  for(int i = 1; i < r; i++) {
    list = list->next;
  }

  temp->next = list->next;
  temp->elem = e;
  temp->prev = list;
  list->next = temp;
}

void delete(struct node *list, int r) {
  for(int i = 0; i < r; i++) {
    list = list->next;
  }

  if(list->prev) {
    list->prev->next = list->next;
  }
  if(list->next) {
    list->next->prev = list->prev;
  }
  free(list);
}

void get(struct node *list, int r) {
  for(int i = 0; i < r; i++) {
    list = list->next;
  }

  printf("%c\n", list->elem);
}

void print(struct node *list) {
  while(list) {
    printf("%c", list->elem);
    list = list->next;
  }
  printf("\n");
}