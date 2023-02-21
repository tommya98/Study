#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct node {
  Item data;
  struct node *next;
};

struct queue_type {
  struct node *front;
  struct node *rear;
  int num;
};

static void terminate(const char *message) {
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Queue queue_create(void) {
  Queue q = malloc(sizeof(struct queue_type));
  if(q == NULL) {
    terminate("Error in create: queue could not be created.");
  }

  q->front = NULL;
  q->rear = NULL;
  q->num = 0;

  return q;
}

void queue_destroy(Queue q) {
  while(!queue_is_empty(q)) {
    queue_remove(q);
  }
  free(q);
}

void queue_insert(Queue q, Item i) {
  struct node *temp = malloc(sizeof(struct node));

  temp->data = i;
  temp->next = NULL;

  if(queue_is_empty(q)) {
    q->front = temp;
    q->rear = temp;
  }
  else {
    q->rear->next = temp;
    q->rear = temp;
  }

  q->num++;
}

void queue_remove(Queue q) {
  struct node *temp = q->front;

  if(q->front == q->rear) {
    q->front = NULL;
    q->rear = NULL;
  }
  else {
    q->front = q->front->next;
  }

  free(temp);
  q->num--;
}

Item queue_first(Queue q) {
  return q->front->data;
}

Item queue_last(Queue q) {
  return q->rear->data;
}

bool queue_is_empty(Queue q) {
  return (q->num == 0);
}