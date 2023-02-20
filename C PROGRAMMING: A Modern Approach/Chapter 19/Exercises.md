1. ```c
   #ifndef QUEUE_H
   #define QUEUE_H
   
   #include <stdbool.h>
   
   typedef strcut queue_type *Queue;
   
   void insert(Queue q, int i);
   void remove(Queue q);
   int frist(Queue q);
   int last(Queue q);
   bool is_empty(Queue q);
   
   #endif
   ```

2. ```c
   /*********************************************************
    * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
    * By K. N. King                                         *
    * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
    * All rights reserved.                                  *
    * This program may be freely distributed for class use, *
    * provided that this copyright notice is retained.      *
    *********************************************************/
   
   /* stack2.c (Chapter 19, page 489) */
   
   #include <stdio.h>
   #include <stdlib.h>
   #include "stack.h"
   
   #define PUBLIC
   #define PRIVATE static
   
   struct node {
     int data;
     struct node *next;
   };
   
   PRIVATE struct node *top = NULL;
   
   PRIVATE void terminate(const char *message)
   {
     printf("%s\n", message);
     exit(EXIT_FAILURE);
   }
   
   PUBLIC void make_empty(void)
   {
     while (!is_empty())
       pop();
   }
   
   PUBLIC bool is_empty(void)
   {
     return top == NULL;
   }
   
   PUBLIC bool is_full(void)
   {
     return false;
   }
   
   PUBLIC void push(int i)
   {
     struct node *new_node = malloc(sizeof(struct node));
     if (new_node == NULL)
       terminate("Error in push: stack is full.");
   
     new_node->data = i;
     new_node->next = top;
     top = new_node;
   }
   
   PUBLIC int pop(void)
   {
     struct node *old_top;
     int i;
   
     if (is_empty())
       terminate("Error in pop: stack is empty.");
   
     old_top = top;
     i = top->data;
     top = top->next;
     free(old_top);
     return i;
   }
   
   ```

3. (a)

   ```c
   #include <stdio.h>
   #include <stdlib.h>
   #include "queue.h"
   
   #define QUEUE_SIZE 100
   
   struct queue_type{
     int contents[QUEUE_SIZE];
     int front;
     int rear;
     int num;
   };
   
   void insert(Queue q, int i) {
     if(q->num >= QUEUE_SIZE) {
       printf("Queue is full\n");
       eixt(EXIT_FAILURE);
     }
   
     q->contents[q->front] = i;
     q->num++;
     if(q->first == QUEUE_SIZE - 1) {
       q->first = 0;
     }
     else {
       q->first += 1;
     }
   }
   
   void remove(Queue q) {
     if(is_empty(q)) {
       printf("Queue is empty\n");
       eixt(EXIT_FAILURE);
     }
   
     q->rear++;
     q->num--;
   }
   
   int frist(Queue q) {
     if(is_empty(q)) {
       printf("Queue is empty\n");
       eixt(EXIT_FAILURE);
     }
   
     return q->contents[rear];
   }
   
   int last(Queue q) {
     if(is_empty(q)) {
       printf("Queue is empty\n");
       eixt(EXIT_FAILURE);
     }
   
     if(q->first == 0) {
       return q->contents[QUEUE_SIZE - 1];
     }
     else {
       return q->contents[front - 1];
     }
   }
   
   bool is_empty(Queue q) {
     if(q->num) {
       return false;
     }
   
     return true;
   }
   ```

   (b)

4. 
