1. (a) `#define CUBE(x) ((x) * (x) * (x))`

   (b) `#define REMAINDER4(n) ((n) % 4)`

   (c) `#define func(x, y) (((x) < 100) && ((y) < 100) ? 1 : 0)`

2. `#define NELEMS(a) ((int)(sizeof(a) / sizeof(a[0])))`

3. (a) 4

   (b) 4

   (c) `#define DOUBLE(x) (2*(x))`

4. (a) `#define AVG(x, y) (((x)+(y)) / 2)`

   (b) `#define AREA(x,y) ((x)*(y))`

5. (a) D

   (b) 2

6. (a) `#define DISP(f, x) printf(#f"(%g) = %g\n", x, f(x))`

   (b) `#define DISP2(f, x, y) printf(#f"(%g, %g) = %g\n", x, y, f(x, y))`

7. (a) `long long_max(long x, long y) { return x > y ? x : y; }`

   (b) If type name is two words, it can make ambiguity in function name.

   (c) Use typedef. `typedef unsigned long ULONG`

8. ```c
   #define STR_HELPER(x) #x
   #define STR(x) STR_HELPER(x)
   #define LINE_FILE ("Line " STR(__LINE__) " of file " __FILE__)
   ```

9. (a) `#define CHECK(x, y, n) ((((x) >= 0) && ((x) <= ((n) - 1))) && (((y) >= 0) && ((y) <= ((n) - 1)))) ? 1 : 0`

   (b) `#define MEDIAN(x, y, z) (((x) + (y) + (z)) / 3)`

   (c) `define POLYNOMIAL(x) (3 * (x) * (x) * (x) * (x) * (x) + 2 * (x) * (x) * (x) * (x) - 5 * (x) * (x) * (x) - (x) * (x) + 7 * (x) - 6`

10. If parameter like `i++` can be evaluated multiple times when we use macro.

11. `#define ERROR(s, i) fprintf(stderr, s, i)`

12. (c), (e)

13. (a) 

    ```c
    
    
    
    
    void f(void);
    
    int main(void)
    {
      f();
    
    
    
      return 0;
    }
    
    void f(void)
    {
    
    
    
      printf("N is undefined\n");
    
    }
    ```

    (b) N is undefined

14. ```c
    
    
    
    
    
    
    
    
    int main(void)
    {
      int a[= 10], i, j, k, m;
    
    
      i = j;
    
    
    
    
      i = 10 * j+1;
      i = (x,y) x-y(j, k);
      i = ((((j)*(j)))*(((j)*(j))));
      i = (((j)*(j))*(j));
      i = jk;
      puts("i" "j");
    
    
      i = SQR(j);
    
      i = (j);
    
      return 0;
    }
    ```

    `int a[= 10], i, j, k, m;`, `i = (x,y) x-y(j, k);`, `i = jk;` can cause errors.

15. ```c
    #ifdef ENGLISH
      printf("Insert disk 1\n");
    #elif defined(FRENCH)
      printf("Inserez Le Disque 1\n");
    #elif defined(SPANISH)
      printf("Inserte El dISCO 1\N");
    #endif
    ```

16. `#pragma ident foo`

