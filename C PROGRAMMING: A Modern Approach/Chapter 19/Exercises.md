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

   ```c
   #include <stdio.h>
   #include <stdlib.h>
   #include "queue.h"
   
   #define QUEUE_SIZE 100
   
   struct node{
     int n;
     struct node *next;
   } *first = NULL, *last = NULL;
   
   static int num = 0;
   
   void insert(int i) {
     struct node *temp = malloc(sizeof(struct node));
   
     temp->n = i;
     temp->next = NULL;
     num++;
   
     if(is_empty()) {
       first = temp;
       last = temp;
     }
     else {
       last->next = temp;
       last = temp;
     }
   }
   
   void remove(void) {
     struct node *temp = first;
   
     first = first->next;
     free(temp);
     num--;
   }
   
   int frist(void) {
     return first->n;
   }
   
   int last(void) {
     return last->n;
   }
   
   bool is_empty(void) {
     if(first == NULL) {
       return true;
     }
   
     return false;
   }
   ```

4. (a)

   ```c
   #include <stdio.h>
   #include <stdlib.h>
   #include "stack.h"
   
   static void terminate(const char *message) {
     printf("%s\n", message);
     exit(EXIT_FAILURE);
   }
   
   void make_empty(Stack *s) {
     s->top = 0;
   }
   
   bool is_empty(const Stack *s) {
     return s->top == 0;
   }
   
   bool is_full(const Stack *s) {
     return s->top == STACK_SIZE;
   }
   
   void push(Stack *s, int i) {
     if(is_full(s)) {
       terminate("Error in push: stack is full.");
     }
     s->contents[s->top++] = i;
   }
   
   int pop(Stack *s) {
     if(is_empty(s)) {
       terminate("Error in pop: stack is empty.");
     }
     return s->contents[--s->top];
   }
   ```

   (b)

   ```c
   #ifndef STACK_H
   #define STACK_H
   
   #include <stdbool.h>
   
   struct node {
     int data;
     struct node *next;
   };
   
   typedef struct node *Stack;
   
   void make_empty(Stack *s);
   bool is_empty(const Stack *s);
   bool is_full(const Stack *s);
   void push(Stack *s, int i);
   int pop(Stack *s);
   
   #endif
   ```

   ```c
   #include <stdio.h>
   #include <stdlib.h>
   #include "stack.h"
   
   static void terminate(const char *message) {
     printf("%s\n", message);
     exit(EXIT_FAILURE);
   }
   
   void make_empty(Stack *s) {
     while(!is_empty(s)) {
       pop(s);
     }
   }
   
   bool is_empty(const Stack *s) {
     return *s == NULL;
   }
   
   bool is_full(const Stack *s) {
     return false;
   }
   
   void push(Stack *s, int i) {
   	struct node *new_node = malloc(sizeof(struct node));
     
     if(new_node == NULL) {
       terminate("Error in push: stack is full.");
     }
   
     new_node->data = i;
     new_node->next = *s;
     *s = new_node;
   }
   
   int pop(Stack *s) {
     struct node *old_top;
     int i;
   
     if(is_empty(s)) {
       terminate("Error in pop: stack is empty.");
     }
   
     old_top = *s;
     i = (*s)->data;
     *s = (*s)->next;
     free(old_top);
     
     return i;
   }
   ```

5. ```c
   #ifndef QUEUE_H
   #define QUEUE_H
   
   #include <stdbool.h>
   
   typedef int Item;
   typedef struct queue_t *Queue;
   
   void queue_append(Queue, Item i);
   void queue_remove_head(Queue);
   Item queue_head(Queue);
   Item queue_last(Queue);
   bool queue_is_empty(Queue);
   
   #endif
   ```

6. (a) 

   ```c
   int peek(Stack s) {
     return s->contents[s->top - 1];
   }
   ```

   (b) 

   ```c
   Item peek(Stack s) {
   	return s->contents[s->top - 1];
   }
   ```

   (c) 

   ```c
   Item peek(Stack s) {
   	return s->top->data;
   }
   ```

7. ```c
   void push(Stack s, Item i) {
     if(is_full(s)) {
       s->size *= 2;
       s->contents = realloc(s->contents, s->size * sizeof(Item));
     }
       
     s->contents[s->top++] = i;
   }
   ```

   
