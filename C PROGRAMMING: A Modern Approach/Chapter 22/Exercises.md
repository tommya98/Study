1. (a) binary data.

   (b) text data.

   (c) text data.

   (d) binary data.

2. (a) rb+

   (b) a

   (c) rb

   (d) r

3. No error handling for fopen fails.

   ```c
   FILE *fp;
   
   if (fp = fopen(filename, "r")) {
   	// read characters until end-of-file
   } 
   else {
     printf("Can't open %s\n", filename);
     exit(EXIT_FAILURE);
   }
   
   fclose(fp);
   ```

4. (a) 00000083.736

   (b) 00000029749.

   (c) 001.0549e+09

   (d) 002.3522e-05

5. No difference.

6. `printf(widget == 1 ? "%d widget" : "%d widgets", widget);`

7. (a) `i = 10`, `j = 30`, `n = 3`, `x = 3`, `10●20●30` is consumed.

   (b) `i = 1`, `j = 2`, `n = 3`, `x = 0`, `1.0●2` is consumed.

   (c) `i = 0`, `j = 0`, `n = 3`, `x = 0.1`, `0.1●0` is consumed.

   (d) `i = unchanged`, `j = unchanged`, `n = 0`, `x = unchanged`, nothing is consumed.

8. It's different. Because `%1s` will store `\0` at the end. And ` %c` will not store `\0`.

9. (a) `getch()`

10. ```c
    while((ch = getc(source_fp)) != EOF) {
    	if(putc(ch, dest_fp) == EOF) {
    		fprintf(stderr, "Error during writing\n");
    		exit(EXIT_FAILURE);
      }
    }
    ```

11. Program will compile without an error. putc always write `1` to the dest_fp. 

12. 
