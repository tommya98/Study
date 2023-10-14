1. (b) : incorrect type

   (c) : incorrect type

   (e) : incorrect type

   (h) : incorrect type

   (i) : incorrect type

   (j) : print new-line twice

2. (a) : illegal. incorrect type.

   (b) : legal. result : a

   (c) : legal. result : abc

   (d) : illegal. incorrect type.

3. i : 12

   s : abc34

   j : 56

4. (a) 

   ```c
   int read_line(char str[], int n) {
     int ch, i = 0;
   
     while((ch = getchar()) != '\n') {
       if(i == 0 && ch == ' ') {
         continue;
       }
       if(i < n) {
         str[i++] = ch;
       }
     }
     str[i] = '\0';
   
     return i;
   }
   ```

   (b)

   ```c
   int read_line(char str[], int n) {
     int ch, i = 0;
   
     while(!isspace(ch = getchar())) {
       if(i < n) {
         str[i++] = ch;
       }
     }
     str[i] = '\0';
   
     return i;
   }
   ```

   (c)

   ```c
   int read_line(char str[], int n) {
     int ch, i = 0;
   
     while((ch = getchar()) != '\n') {
       if(i < n) {
         str[i++] = ch;
       }
     }
     str[i++] = '\n';
     str[i] = '\0';
   
     return i;
   }
   ```

   (d)

   ```c
   int read_line(char str[], int n) {
     int ch, i = 0;
   
     for(i = 0; i < n; i++) {
       ch = getchar();
       if (ch == '\n') {
         break;
       }
       str[i] = ch;
     }
     str[i] = '\0';
   
     return i;
   }
   ```

5. (a)

   ```c
   void capitalize(char str[]) {
     for(int i = 0; str[i] != '\0'; i++) {
       str[i] = toupper(str[i]);
     }
   }
   ```

   (b)

   ```c
   void capitalize(char* str) {
     for(; *str != '\0'; str++) {
       *str = toupper(*str);
     }
   }
   ```

6. ```c
   void censor(char str[]) {
     int len = strlen(str);
     for(int i = 0; i < len - 2; i++) {
       if(str[i] == 'f' && str[i + 1] == 'o' && str[i + 2] == 'o') {
         str[i] = 'x';
         str[i + 1] = 'x';
         str[i + 2] = 'x';
       }
     }
   }
   ```

7. (d)

8. tired-or-wired?

9. computers

10. q is pointing unknown memory space.

11. ```c
    int my_strcmp(char *s, char *t) {
      for(; *s == *t; s++, t++) {
        if(*s == '\0') {
          return 0;
        }
      }
      return *s - *t;
    }
    ```

12. ```c
    void get_extension(const char *file_name, char *extension) {
      int i, len = strlen(file_name);
    
      for(i = 0; i < len; i++) {
        if(file_name[i] == '.') {
          i++;
          break;
        }
      }
    
      strcpy(extension, &file_name[i]);
    }
    ```

13. ```c
    void build_index_url(const char *domain, char *index_url) {
      strcpy(index_url, "http://www.");
      strcat(index_url, domain);
      strcat(index_url, "/index.html");
    }
    ```

14. Grinch

15. (a) : 3

    (b) : 0

    (c) : length of logest prefix of s that consists in t.

16. ```c
    int count_spaces(const char s[]) {
      int count = 0;
    
      while(*s) {
        if(*s++ == ' ') {
          count++;
        }
      }
      
      return count;
    }
    ```

17. ```c
    bool test_extension(const char *file_name, const char *extension) {
      int i, len1 = strlen(file_name), len2 = strlen(extension);
      char str1[len1 + 1], str2[len2 + 1];
      
      strcpy(str1, file_name);
      strcpy(str2, extension);
    
      for(i = 0; str1[i] != '\0'; i++) {
        str1[i] = toupper(str1[i]);
      }
      for(i = 0; str2[i] != '\0'; i++) {
        str2[i] = toupper(str2[i]);
      }
    
      for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == '.') {
          i++;
          break;
        }
      }
    
      if(strcmp(&str1[i], str2) == 0) {
        return true;
      }
      return false;
    }
    ```

18. ```c
    void remove_filename(char *url) {
      while(*url) {
        url++;
      }
    
      while(*url != '/') {
        url--;
      }
    
      *url = '\0';
    }
    ```
    