1. ```c
   double triangle_area(double base, double height) {
     double product;
     product = base * height;
     return product / 2;
   }
   ```

2. ```c
   int check(int x, int y, int n) {
     return (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1);
   }
   ```

3. ```c
   int gcd(int m, int n) {
     int gcd;
   
     if(n > m) {
       int temp = m;
       m = n;
       n = temp;
     }
   
     while(n) {
       if(m == 0) {
         gcd = 0;
         break;
       }
       gcd = m % n;
       m = n;
       n = gcd;
     }
     gcd = m;
   
     return gcd;
   }
   ```

4. ```c
   int day_of_year(int month, int day, int year) {
     int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     int count = day;
   
     for(int i = 0; i < month - 1; i++) {
       count += days[i];
     }
   
     if(year % 4 == 0 && month > 2) {
       count++;
     }
   
     return count;
   }
   ```

5. ```c
   int num_digits(int n) {
     int digit = 0;
   
     while(1) {
       digit++;
       n /= 10;
       if(n == 0) {
         break;
       }
     }
   
     return digit;
   }
   ```

6. ```c
   int digit(int n, int k) {
     int ans = 0;
     
     while(1) {
       k--;
       ans = n % 10;
       n /= 10;
       if(k == 0) {
         break;
       }
     }
   
     return ans;
   }
   ```

7. (a), (b), (c), (d), (e)

8. (a), (b)

9. i = 1, j = 2

10. (a) 

    ```c
    int largest(int a[], int n) {
      int max = a[0];
    
      for(int i = 1; i < n; i++) {
        if(a[i] > max) {
          max = a[i];
        }
      }
    
      return max;
    }
    ```

    (b)

    ```c
    double average(int a[], int n) {
      double avg = 0;
    
      for(int i = 0; i < n; i++) {
        avg += a[i];
      }
    
      return avg / n;
    }
    ```

    (c)

    ```c
    int positive(int a[], int n) {
      int pos = 0;
    
      for(int i = 0; i < n; i++) {
        if(a[i] > 0) {
          pos++;
        }
      }
    
      return pos;
    }
    ```

11. ```c
    float comput_GPA(char grades[], int n) {
      float score = 0;
    
      for(int i = 0; i < n; i++) {
        if(grades[i] == 'A' || grades[i] == 'a') {
          score += 4;
        }
        else if(grades[i] == 'B' || grades[i] == 'b') {
          score += 3;
        }
        else if(grades[i] == 'C' || grades[i] == 'c') {
          score += 2;
        }
        else if(grades[i] == 'D' || grades[i] == 'd') {
          score += 1;
        }
      }
    
      return score / n;
    }
    ```

12. ```c
    double inner_product(double a[], double b[], int n) {
      double ans = 0;
    
      for(int i = 0; i < n; i++) {
        ans += a[i] * b[i];
      }
    
      return ans;
    }
    ```

13. ```c
    int evaluate_position(char board[8][8]) {
      int black = 0, white = 0;
    
      for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
          if(board[i][j] == 'Q') {
            white += 9;
          }
          else if(board[i][j] == 'Q') {
            white += 9;
          }
          else if(board[i][j] == 'R') {
            white += 5;
          }
          else if(board[i][j] == 'B' || board[i][j] == 'N') {
            white += 3;
          }
          else if(board[i][j] == 'P') {
            white += 1;
          }
          else if(board[i][j] == 'q') {
            black += 9;
          }
          else if(board[i][j] == 'r') {
            black += 5;
          }
          else if(board[i][j] == 'b' || board[i][j] == 'n') {
            black += 3;
          }
          else if(board[i][j] == 'p') {
            black += 1;
          }
        }
      }
    
      return white - black;
    }
    ```

14. ```c
    bool has_zeor(int a[], int n) {
      int i;
      
      for(i = 0; i < n; i++) {
        if(a[i] == 0)
          return true;
      }
    
      return false;
    }
    ```

15. ```c
    double median(double x, double y, double z){
      double temp;
    
      if (x <= y)
        if (y <= z) temp = y;
        else if (x <= z) temp = z;
        else temp = x;
      else {
        if (z <= y) temp = y;
        else if (x <= z) restempult = x;
        else temp = z;
      }
    
      return temp;
    }
    ```

16. ```c
    int fact(int n) {
      return n <= 1 ? 1 : n * fact(n - 1);
    }
    ```

17. ```c
    int fact(int n) {
      int ans = 1;
    
      for(int i = 2; i <= n; i++) {
        ans += i;
      }
    
      return ans;
    }
    ```

18. ```c
    int gcd(int m, int n) {
      if(n > m) {
        int temp = m;
        m = n;
        n = temp;
      }
    
      if(n == 0) {
        return m;
      }
    
      return gcd(n, m % n);
    }
    ```

19. This function print n to binary representation.