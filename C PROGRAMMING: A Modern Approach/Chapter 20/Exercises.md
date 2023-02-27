1. (a) 0

   (b) 0

   (c) 0

   (d) 15

2. `i ^= 0x1000;`

3. Swap x and y.

4. `#define MK_COLOR(r, g, b) ((long)(b) << 16 | (g) << 8 | (r))`

5. ```c
   #define GET_RED(x) ((x) & 0xff)
   #define GET_GREEN(x) (((x) >> 8) & 0xff)
   #define GET_BLUE(x) (((x) >> 16) & 0xff)
   ```

6. (a) 

   ```c
   unsigned short swap_bytes(unsigned short i) {
     return (i << 8) | (i >> 8);
   }
   ```

   (b) 

   ```c
   unsigned short swap_bytes(unsigned short i) {
     return (i << 8) | (i >> 8);
   }
   ```

7. ```c
   unsigned int rotate_left(unsigned int i, int n) {
     return (i << n) | (i >> (32 - n));
   }
   
   unsigned int rotate_right(unsigned int i, int n) {
     return (i >> n) | (i << (32 - n));
   }
   ```

8. (a) 000..111 with 1 is n times.

   (b) It returns bit of i start from m with n length

9. (a) 

   ```c
   int count_ones(unsigned char ch) {
     int num = 0;
   
     for(int i = 0; i < 8; i++) {
       if(ch & 0x01) {
         num++;
       }
       ch = ch >> 1;
     }
   
     return num;
   }
   ```

   (b) 

   ```c
   int count_ones(unsigned char ch) {
     return (ch & 0x01) + ((ch >> 1) & 0x01) + ((ch >> 2) & 0x01) + ((ch >> 3) & 0x01) + ((ch >> 4) & 0x01) + ((ch >> 5) & 0x01) + ((ch >> 6) & 0x01) + ((ch >> 7) & 0x01);
   }
   ```

10. ```c
   unsigned int reverse_bits(unsigned int n) {
     unsigned int temp = 0;
   
     for(int i = 0; i < 32; i++) {
       temp |= ((n & 0x01) << (31 - i));
       n = n >> 1;
     }
   
     return temp;
   }
   ```

11. Because == has higher precedence than &.

    ```c
    if((key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT)) == 0) {
        printf("No modifier keys pressed\n");
    }
    ```

12. Because + has highter precedence than <<.

    ```c
    unsigned short create_short(unsigned char high_byte, unsigned char low_byte) {
        return (high_byte << 8) + low_byte;
    }
    ```

13. Remove rightest 1 in n.

14. ```c
    struct my_float{
      unsigned int fraction:23, exponent:8, sign:1;
    };
    ```

15. (a) Because leftest bit can be 1 or 0.

    (b) 

    ```c
    struct {
      unsigned int flag: 1;
    } s;
    ```

16. ```c
    union {
      struct {
        unsigned int eax, ebx, ecx, edx;
      } dword;
      struct {
        unsigned short axl, axh, bxl, bxh, cxl, cxh, dxl, dxh;
      } word;
      struct {
        unsigned char axll, axlh, axhl, axhh, bxll, bxlh, bxhl, bxhh, cxll, cxlh, cxhl, cxhh, dxll, dxlh, dxhl, dxhh;
      } byte;
    } regs;
    ```

    
