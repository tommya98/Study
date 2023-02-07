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

1. (b), (c) is legal.

