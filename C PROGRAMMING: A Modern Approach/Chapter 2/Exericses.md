1. Yes. Put `return 0`in the last part of main function.

2. (a) `#include <stdio.h>`is directive and 3`printf` and `return 0`is statements in this program.

   (b) Parkinson’s Law:
			 Work expands so as to fill the time
			 available for its completion.

3. ```c
   #include <stdio.h>
   
   int main(void)
   {
       int height = 8, length = 12, width = 10, volume;
       
       volume = height * length * width;
       
       printf("Dimensions: %dx%dx%d\n", length, width, height);
     	printf("Volume (cubic inches): %d\n", volume);
       printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
       
       return 0;
   }
   ```

4. ```c
   #include <stdio.h>
   
   int main(void)
   {
     int a, b, c;
     float x, y, z;
   
     printf("a: %d\n", a); //a : 100
     printf("b: %d\n", b); // b : 0
     printf("c: %d\n", c); // c : 4096
     printf("x: %g\n", x); // x : 0
     printf("y: %g\n", y); // y : -5.22713e-33
     printf("z: %g\n", z); // z : 3.06646e-41
   
     return 0;
   }
   ```

   These is no any pattern to the values.

5. (a) isn’t legal C identifiers. Because it starts with number.

6. It can confuse to use.

7. (a) and (e) are keywords in C.

8. 14 tokens.

9. `answer = (3 * q - p * p) / 3;`

10. After `#define`, `int`, `return` spaces are essential.
