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

12. If `fgetc(fp) == '.'` statement gets EOF, file will make error.

    ```c
    int count_periods(const char *filename) {
      FILE *fp;
      int n = 0;
      char ch;
        
      if((fp = foepn(filename, "r")) != NULL) {
        while((ch = fgetc(fp)) != EOF) {
          if(ch == '.') {
            n++;
          }
        }
        fclose(fp);
      }
        
      return n;
    }
    ```

13. ```c
    int line_length(const char *filename, int n) {
      FILE *fp;
      int a = 1, b = 0;
      char ch;
        
      if((fp = fopen(filename, "r")) != NULL) {
        while((ch = fgetc(fp)) != EOF) {
          if(ch == '\n') {
            a++;
          }
          else if(a == n) {
            b++;
          }
        }
      }
    
      return b;
    }
    ```

14. (a)

    ```c
    char *my_fgets(char *s, int n, FILE *stream){
      int ch, len = 0;
    
      while(len < n - 1) {
        if((ch = getc(stream)) == EOF) {
          if(len == 0 || ferror(stream)) {
            return NULL;
          }
          break;
        }
        s[len++] = ch;
        if(ch == '\n') {
          break;
        }
      }
    
      s[len] = '\0';
      
      return s;
    }
    ```

    (b)

    ```c
    int my_fputs(const char *s, FILE *stream) {
      while(*s != '\0') {
        if(putc(*s, stream) == EOF) {
          return EOF;
        }
        s++;
      }
    
      return 0;
    }
    ```

15. (a) `fseek(fp, n * 64L, SEEK_SET);`

    (b) `fseek(fp, -64L, SEEK_END);`

    (c) `fseek(fp, 64L, SEEK_CUR);`

    (d) `fseek(fp, -128L, SEEK_CUR);`

16. `sscanf(str, str[0] == '#' ? "%*[#]%[0123456789,]" : "%*[^#]*[#]%[0123456789,]", sales_rank);`
