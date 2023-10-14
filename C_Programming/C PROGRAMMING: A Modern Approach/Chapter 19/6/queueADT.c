#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct queue_type {
  Item *contents;
  int front;
  int rear;
  int num;
  int size;
};

static void terminate(const char *message) {
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Queue queue_create(int size) {
  Queue q = malloc(sizeof(struct queue_type));
  if(q == NULL) {
    terminate("Error in create: queue could not be created.");
  }

  q->contents = malloc(size * sizeof(Item));
  if(q->contents == NULL) {
    terminate("Error in create: queue could not be created.");
  }

  q->front = 0;
  q->rear = 0;
  q->num = 0;
  q->size = size;

  return q;
}

void queue_destroy(Queue q) {
  free(q->contents);
  free(q);
}

void queue_insert(Queue q, Item i) {
  q->contents[q->front] = i;
  q->front++;
  q->num++;
}

void queue_remove(Queue q) {
  q->rear++;
  q->num--;
}

Item queue_first(Queue q) {
  return q->contents[q->rear];
}

Item queue_last(Queue q) {
  return q->contents[q->front - 1];
}

bool queue_is_empty(Queue q) {
  return (q->num == 0);
}