1. ```c
   void *my_malloc(size_t n) {
     void *p = malloc(n);
   
     if(p == NULL) {
       printf("Error: malloc failed\n");
       exit(EXIT_FAILURE);
     }
   
     return p;
   }
   ```

2. ```c
   char *duplicate(char *str) {
     char *p = malloc(sizeof(str) + 1);
   
     if(p == NULL) {
       return NULL;
     }
   
     strcpy(p, str);
   
     return p;
   }
   ```

3. ```c
   int *create_array(int n, int initial_value) {
     int *p = malloc(n * sizeof(int));
   
     if(p == NULL) {
       return NULL;
     }
   
     for(int i = 0; i < n; i++) {
       p[i] = initial_value;
     }
   
     return p;
   }
   ```

4. ```c
   p->upper_left.x = 10;
   p->upper_left.y = 25;
   p->lower_right.x = 20;
   p->lower_right.y = 15;
   ```

5. (b), (c) is legal.

6. ```c
     struct node *delete_from_list(struct node **list, int n) {
         struct node *temp = *list;
     
         while(temp) {
             if(temp->value == n) {
                 *list = temp->next;
                 free(temp);
                 break;
             }
             list = &temp->next;
             temp = temp->next;
         }
     
         return *list;
     }
     ```

7. If we execute `free(p)` then `p=p->next` is incorrect.

     ```c
     while (p) {
         struct node *temp = p->next;
         free(p);
         p = temp;
     }
     ```

8. ```c
     #include <stdio.h>
     #include <stdlib.h>
     #include <stdbool.h>
     #include "stack.h"
     
     struct node {
       int value;
       struct node *next;
     };
     
     struct node *top = NULL;
     
     void make_empty(void) {
       struct node *temp;
     
       while(top != NULL) {
         temp = top;
         top = top->next;
         free(temp);
       }
     }
     
     bool is_empty(void) {
       return top == NULL;
     }
     
     bool push(int i) {
       struct node *temp;
     
       temp = (struct node*)malloc(sizeof(struct node));
       if(temp == NULL) {
         return false;
       }
     
       temp->value = i;
       temp->next = top;
       top = temp;
     
       return true;
     }
     
     int pop(void) {
       struct node *temp;
       int t;
     
       if(is_empty()) {
         printf("*** Stack underflow; program terminated. ***\n");
         exit(EXIT_FAILURE);
       }
     
       t = top->value;
       temp = top;
       top = top->next;
       free(temp);
     
       return t;
     }
     ```

9. True. Beacuse `(&x)->a` can converted into `*(&x).a`. And it is same as `x.a`.

10. ```c
     void print_part(struct part *p) {
       printf("Part number: %d\n", p->number);
       printf("Part name: %s\n", p->name);
       printf("Quantity on hand: %d\n", p->on_hand);
     }
     ```

11. ```c
      int count_occurrences(struct node *list, int n) {
        int a = 0;
      
        while(list) {
          if(list->value == n) {
            a++;
          }
          list = list->next;
        }
      
        return a;
      }
      ```

12. ```c
      struct node *find_last(struct node *list, int n) {
        struct node *temp = NULL;
      
        while(list) {
          if(list->value == n) {
            temp = list;
          }
          list = list->next;
        }
      
        return temp;
      }
      ```

13. If cur or prev is NULL, this function doesn't work properly.

      ```c
      struct node *insert_into_ordered_list(struct node *list, struct node *new_node) {
        struct node **temp = &list;
        
        while (list != NULL) {
          if (list->value >= new_node->value)
            break;
          temp = &list->next;
          list = list->next;
        }
        *temp = new_node;
        new_node = list;
        
        return list;
      }
      ```

14. ```c
      void delete_from_list(struct node **list, int n) {
        struct node *temp = *list;
      
        while(temp) {
          if (temp->value == n) {
            *list = temp->next;
            free(temp);
          }
          list = &temp->next;
          temp = temp->next;
        }
      }
      ```

15. Answer: 3

16. ```c
      int sum(int (*f)(int), int start, int end) {
        int sum = 0;
      
        for(int i = start; i <= end; i++) {
          sum += (*f)(i);
        }
      
        return sum;
      }
      ```

17. `qsort(&a[50], 50, sizeof(a[0]), compare);`

18. ```c
      int compare_parts(const void *p, const void *q) {
        return ((struct part *) q)->number - ((struct part *) p)->number;
      }
      ```

19. ```c
      void cmd(char *str) {
        for(int i = 0; i < sizeof(file_cmd) / sizeof(file_cmd[0]); i++) {
          if(strcmp(str, file_cmd[i].cmd_name) == 0) {
            return (*file_cmd[i].cmd_pointer)();
          }
        }
      }
      ```
