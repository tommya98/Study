1. (a)     86, 1040

   (b)  3.02530e+01

   (c) 83.1620

   (d) 1e-06

2. (a) printf("%-8.1e", x);

   (b) printf("%10.6e", x);

   (c) printf("%-8.3f", x);

   (d) printf("%6.0f", x);

3. (a) equivalent.

   (b) not equivalent.

   (c) not equivalent.

   (d) equivalent.

4. `i = 10, x = 0.3, j = 5`

5. `x = 12.3, i = 45, y = 0.6`

6. 
   ```c
   #include <stdio.h>
   
   int main(void) {
     int num1, denom1, num2, denom2, result_num, result_denom;
   
     printf("Enter first fraction: ");
     scanf("%d / %d", &num1, &denom1);
   
     printf("Enter second fraction: ");
     scanf("%d / %d", &num2, &denom2);
   
     result_num = num1 * denom2 + num2 * denom1;
     result_denom = denom1 * denom2;
     printf("The sum is %d/%d\n", result_num, result_denom);
   
     return 0;
   }
   ```
