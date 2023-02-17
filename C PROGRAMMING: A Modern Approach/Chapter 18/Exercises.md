1. (a) storage class: static, type qualifiers: none, type specifiers: char **, declarators: lookup(int level), initializers: none

   (b) storage class: none, type qualifiers: volatile, type specifiers: unsigned long, declarators: io_flags, initializers: none

   (c) storage class: extern, type qualifiers: none, type specifiers: char * [ ], declarators: file_name[MAX_FILES], path, initializers: none

   (d) storage class: static, type qualifiers: const, type specifiers: char [ ], declarators: token_buf, initializers: ""

2. (a) extern

   (b) static

   (c) extern, static

3. extern float a: duration: static, scope: file, linkage: external

   register double b: duration: automatic, scope: block, linkage: none

   static int c: duration: static, scope: block, linkage: none

   auto char d: duration: automatic, scope: block, linkage: none

4. 1st call f(10) = 0

   6th call f(10) = 50

5. (a) False. Because static variable in function has block scope.

   (b) False. Becasue extern variable has linkage.

   (c) True. 

   (d) True.

6. `int n` should have static storage duration.

   ```c
   void print_error(const char *message) {
     static int n = 1;
     printf("Error %d: %s\n", n++, message);
   }
   ```

7. (a) is false.

8. (a) x is an array of ten pointers to function that need int as argument and returns a char.

   (b) x is an function with int parameter that returns pointer to 5 int array.

   (c) x is an function without parameter that rerturns a pointer to function that need int argument and returns a pointer to float.

   (d) x is function that need int, pointer to function with int argument and returns nothing as argument and returns pointer to a fuction that need int as argument and returns nothing.

9. (a)

   ```c
   typedef char fx_t(int);
   typedef fx_t *fx_ptr_t;
   typedef fx_ptr_t fx_ptr_array_t[10];
   fx_ptr_array_t x;
   ```

   (b)

   ```c
   typedef int arr_t[5];
   typedef arr_t fx_t(int);
   fx_t *x;
   ```

   (c)

   ```c
   typedef float *fx_t(int);
   typedef fx_t *inner_fx_t(void);
   inner_fx_t x;
   ```

   (d)

   ```c
   typedef void outer_fx_t(int);
   typedef void *arg_fx_t(int);
   typedef outer_fx_t *inner_fx_t(int, arg_fx_t);
   outer_fx_t x;
   ```

10. (a)  `char *(*p)(char *);`

    (b)  `void *f(struct t *p, long int n)(void);`

    (c) `void (*a[])(void) = {insert, search, update, print};`

    (d) `struct t (*b[10])(int, int);`

11. ```c
    int *f(int);
    int (*g(int))(int);
    int (*a[10])(int);
    ```

12. (a) f is an function that need 2 argument(pointer to function that need long parameter and returns float, char *) and returns a pointer to function that need double as arguemnt and returns int.

    (b) `int a = *f(b, &c)(1.2);`

13. (a), (c), (d) is legal.

14. (e)

15. (a) Storage duration.
