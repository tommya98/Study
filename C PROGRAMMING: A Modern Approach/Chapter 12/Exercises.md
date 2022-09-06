1. (a) 14

   (b) 34

   (c) 4

   (d) true

   (e) flase

2. `middle = low + (high - low) / 2;`

3. 10, 9, 8, 7, 6, 5, 4, 3, 2, 1

4. ```C
   void make_empty(void) {
     top_ptr = &contents[0];
   }
   
   bool is_empty(void) {
     return top_ptr == &contents[0];
   }
   
   bool is_full(void) {
     return top_ptr == &contents[STACK_SIZE];
   }
   ```

5. (b), (c), (d) is true.

6. ```c
   int sum_array(const int a[], int n) {
     int *p, sum;
   
     sum = 0;
     for(p = a; p < a + n; p++)
       sum += *p;
     return sum;
   }
   ```

7. ```c
   bool search(const int a[], int n, int key) {
     int *p;
   
     for(p = a; p < a + n; p++) {
       if(*p == key) {
         return true;
       }
     }
   
     return false;
   }
   ```

8. ```c
   void store_zeros(int a[], int n) {
     int *p;
   
     for(p = a; p < a + n; p++)
       *p = 0;
   }
   ```

9. ```c
   double inner_product(const double *a, const double *b, int n) {
     double sum = 0;
   
     for(double *p = a, *q = b; p < a + n; p++, q++) {
       sum += *p * *q;
     }
   
     return sum;
   }
   ```

10. ```c
    int *find_middle(int a[], int n) {
      return a + n / 2;
    }
    ```

11. ```c
    int find_largest(int a[], int n) {
      int max;
    
      max = a[0];
      for(int *p = a + 1; p < a + n; p++) {
        if(*p > max)
          max = *p;
      }
      return max;
    }
    ```

12. ```c
    void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
      if(a[0] > a[1]) {
        *largest = a[0];
        *second_largest = a[1];
      }
      else {
        *largest = a[1];
        *second_largest = a[0];
      }
      
      for(int *p = a + 2; p < a + n; p++) {
        if(*p > *largest) {
          *second_largest = *largest;
          *largest = *p;
        }
        else if(*p > *second_largest) {
          *second_largest = *p;
        }
      }
    }
    ```

13. ```c
    #define N 10
    
    double ident[N][N];
    int temp = 0;
    
    for (double *p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++) {
      if (temp % (N + 1) == 0) {
        *p = 1.0;
      } 
      else {
        *p = 0.0;
      }
      temp++;
    }
    ```

14. `search(temperatures, 7 * 24, 32)`

15. ```c
    for (int *p = temperatures[i]; p < temperatures[i] + 24; p++) {
      printf("%d ", *p);
    }
    ```

16. ```c
    for(int *p = temperatures[0]; p < temperatures[7]; p += 24) {
      printf("%d ", find_largest(p, 24));
    }
    ```

17. ```c
    int sum_two_dimensional_array(const int a[][LEN], int n) {
      int sum = 0;
    
      for(int *p = &a[0][0]; p <= &a[n - 1][LEN - 1]; p++) {
        sum += *p;
      }
      return sum;
    }
    ```

18. ```c
    int evaluate_position(char board[8][8]) {
      int black = 0, white = 0;
    
      for(char *p = &board[0][0]; p <= &board[7][7]; p++) {
        if(*p == 'Q') {
          white += 9;
        }
        else if(*p == 'Q') {
          white += 9;
        }
        else if(*p == 'R') {
          white += 5;
        }
        else if(*p == 'B' || *p == 'N') {
          white += 3;
        }
        else if(*p == 'P') {
          white += 1;
        }
        else if(*p == 'q') {
          black += 9;
        }
        else if(*p == 'r') {
          black += 5;
        }
        else if(*p == 'b' || *p == 'n') {
          black += 3;
        }
        else if(*p == 'p') {
          black += 1;
        }
      }
    
      return white - black;
    }
    ```