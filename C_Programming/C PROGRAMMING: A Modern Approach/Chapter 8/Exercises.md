1. It also work. But if we change the type of array we need to change t also.

2. `a[digit-'0']`

3. `bool weekend[7] = {true, false, false, false, false, false, true};`

4. `bool weekend[7] = {[0] = true, [6] = true};

5. ```c
   #include <stdio.h>
   
   int main(void) {
     int fib_numbers[40] = {0, 1};
   
     for(int i = 2; i < 40; i++) {
       fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
     }
     
     for(int i = 0; i < 40; i++) {
       printf("%d ", fib_numbers[i]);
     }
   
     return 0;
   }
   ```

6. `const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};`

7. `  const int segments[10][7] = {{1, 1, 1, 1, 1, 1}, {0, 1, 1}, {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};`

8. `double temperature_readings[30][24];`

9. ```c
   #include <stdio.h>
   
   int main(void) {
     double temperature_readings[30][24];
     double average_month = 0, average_days[30] = {0};
   
     for(int i = 0; i < 30; i++) {
       for(int j = 0; j < 24; j++) {
         average_days[i] += temperature_readings[i][j];
       }
     }
     for(int i = 0; i < 30; i++) {
       average_days[i] /= 24;
     }
   
     for(int i = 0; i < 30; i++) {
       average_month += average_days[i];
     }
     average_month /= 30;
   
     return 0;
   }
   ```

10. `  char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}, {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, {' ', '.', ' ', '.', ' ', '.', ' ', '.'}, {'.', ' ', '.', ' ', '.', ' ', '.', ' '}, {' ', '.', ' ', '.', ' ', '.', ' ', '.'}, {'.', ' ', '.', ' ', '.', ' ', '.', ' '}, {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, {R, N, B, Q, K ,B, N, R}};`

11. ```c
    #include <stdio.h>
    
    int main(void) {
      char checker_board[8][8];
    
      for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
          if((i + j) % 2 == 0) {
            checker_board[i][j] = 'B';
          }
          else {
            checker_board[i][j] = 'R';
          }
        }
      }
    
      return 0;
    }
    ```