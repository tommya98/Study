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

9. 