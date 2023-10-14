1. 1 2 4 8 16 32 64 128

2. 9384 938 93 9

3. 5 4 3 2

4. (c) is not equivalent to (a), (b). Because in (c) i++ execute before the loop body is executed.

5. (c) is not equivalent to (a), (b). Becuase if i < 10 (a), (b) will skip the loop, but (c) execute one time.

6. ```c
   for(i = 1; i <= 128; i *= 2) {
     printf("%d ", i);
   }
   ```

7. ```c
   for(i = 9384; i > 0; i /= 10) {
     printf("%d ", i);
   }
   ```

8. 10 5 3 2 1 1 1 1 1 1 1...(print 1 forever)

9. ```c
   i = 10;
   while(i >= 1) {
     printf("%d ", i++);
     i /= 2;
   }
   ```

10. replace 'continue' to 'goto end' and put 'end: ;' in last statement of loop.

11. 20

12. ```c
    for (d = 2; d * d <= n; d++) {
    	if (n % d == 0) {
      	break;
    	}
    }
    
    if (d * d <= n) {
    	printf("%d is divisible by %d\n", n, d);
    } 
    else {
    	printf("%d is prime\n", n);
    }
    ```

13. `for (n = 0; m > 0; n++, m /= 2)`

14. Semicolon after if is error.

    ```c
    if (n % 2 == 0)
      printf("n is even\n");
    ```