1. (a) Easy to collaborate beteween multiple programmers.

   (b) Need more time to setup and build structure.

2. (b). If header file is included in multiple files then function definition is declared several times. And it can cause error in program.

3. `#include "file"`means include file in current directory. So compiler can't find system header file.

4. (a) Output if DEBUG is defined:

   Value of i: 1

   Value of j: 2

   Value of k: 3

   Value of i + j: 3

   Value of 2 * i + j - k: 1

   (b) Output if DEBUG is not defined:

   (c) Because in (a) DEBUG is defined so `#ifdef DEBUG` is executed and (b) execute `#else` state.

   (d) DEBUG macro should be defined before debug.h is included. Because if not, in debug.h `#else` state will be executed.

5. ```makefile
   demo: main.o f1.o f2.o
   	gcc -o demo main.o f1.o f2.o
   
   main.o: main.c f1.h
   	gcc -c main.c
   
   f1.o: f1.c f1.h f2.h
   	gcc -c f1.c
   
   f2.o: f2.c f1.h f2.h
   	gcc -c f2.c
   ```

6. (a) main.c, f1.c, f2.c

   (b) f1.c

   (c) main.c, f1.c, f2.c

   (d) f1.c, f2.c
