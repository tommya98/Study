1. It's legal. We can distinguish each with `x.x, x.y, y.x, y.y`.

2. (a)

   ```c
   struct {
     double real;
     double imaginary
   } c1, c2, c3;
   ```

   (b)

   ```c
   struct {
     double real;
     double imaginary
   } c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;
   ```

   (c) `c1 = c2;`

   (d) 

   ```c
   c3.real = c1.real + c2.real;
   c3.imaginary = c1.imaginary + c2.imaginary;
   ```

3. (a)

   ```c
   struct complex {
     double real;
     double imaginary
   };
   ```

   (b) `struct complex c1, c2, c3;`

   (c) 

   ```c
   struct complex make_complex(double real, double imaginary) {
     struct complex temp;
     
     temp.real = real;
     temp.imaginary = imaginary;
     
     return temp;
   }
   ```

   (d)

   ```c
   struct complex add_complex(struct complex c1, struct complex c2) {
     struct complex temp;
     
     temp.real = c1.real + c2.real;
     temp.imaginary = c1.imaginary + c2.imaginary;
     
     return temp;
   }
   ```

4. (a)

   ```c
   typedef struct {
     double real;
     double imaginary
   } Complex;
   ```

   (b) `Complex c1, c2, c3;`

   (c)

   ```c
   Complex make_complex(double real, double imaginary) {
     Complex temp;
     
     temp.real = real;
     temp.imaginary = imaginary;
     
     return temp;
   }
   ```

   (d)

   ```c
   Complex add_complex(Complex c1, Complex c2) {
     Complex temp;
     
     temp.real = c1.real + c2.real;
     temp.imaginary = c1.imaginary + c2.imaginary;
     
     return temp;
   }
   ```

5. (a)

   ```c
   int day_of_year(struct date d) {
     int a = 0;
     int date[2][12] = {{0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334}, {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335}};
     
   	if(year % 4 == 0) {
       a = 1;
       if(year % 100 == 0) {
         a = 0;
         if(year % 400 == 0) {
           a = 1;
         }
       }
     }
     
     return date[a][d.month] + d.day;
   }
   ```

   (b)

   ```c
   int compare_dates(struct date d1, struct date d2) {
     if(d1.year < d2.year) {
       return -1;
     }
     else if(d1.year > d2.year) {
       return 1;
     }
   
     if(d1.month < d2.month) {
       return -1;
     }
     else if(d1.month > d2.month) {
       return 1;
     }
     
     if(d1.date < d2.date) {
       return -1;
     }
     else if(d1.date > d2.date) {
       return 1;
     }
     
     return 0;
   }
   ```

6. ```c
   struct time split_time(long total_seconds) {
     struct time t;
     
     t.seconds = total_seconds % 60;
     total_seconds -= t.seconds;
     t.minutes = (total_seconds % 3600) / 60;
     total_seconds -= (t.hours * 60);
     t.hours = total_seconds / 3600;
     
     return t;
   }
   ```

7. (a)

   ```c
   struct fraction reduce(struct fraction f) {
     struct fraction temp;
     int a, b, t;
   
     if(f.numerator > f.denominator) {
       a = f.numerator;
       b = f.denominator;
     }
     else {
       a = f.denominator;
       b = f.numerator;
     }
     
     while(b != 0) {
       t = a % b;
       a = b;
       b = t;
     }
   
     temp.numerator = f.numerator / a;
     temp.denominator = f.denominator / a;
   
     return temp;
   }
   ```

   (b)

   ```c
   struct fraction add(struct fraction f1, struct fraction f2) {
     struct fraction temp;
   
     temp.denominator = f1.denominator * f2.denominator;
     temp.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
   
     return reduce(temp);
   }
   ```

   (c)

   ```c
   struct fraction subtract(struct fraction f1, struct fraction f2) {
     struct fraction temp;
   
     temp.denominator = f1.denominator * f2.denominator;
     temp.numerator = (f2.numerator * f1.denominator) - (f1.numerator * f2.denominator);
   
     return reduce(temp);
   }
   ```

   (d)

   ```c
   struct fraction multiply(struct fraction f1, struct fraction f2) {
     struct fraction temp;
   
     temp.denominator = f1.denominator * f2.denominator;
     temp.numerator = f1.numerator * f2.numerator;
   
     return reduce(temp);
   }
   ```

   (e)

   ```c
   struct fraction divide(struct fraction f1, struct fraction f2) {
     struct fraction temp;
   
     temp.denominator = f1.denominator * f2.numerator;
     temp.numerator = f1.numerator * f2.denominator;
   
     return reduce(temp);
   }
   ```

8. (a) `const struct color MAGENTA = {255, 0, 255};`

   (b) `const struct color MAGENTA = {.red = 255, .blue = 255};`

9. (a)

   ```c
   struct color make_color(int red, int green, int blue) {
     struct color temp;
   
     if(red < 0) {
       red = 0;
     }
     else if(red > 255) {
       red = 255;
     }
   
     if(green < 0) {
       green = 0;
     }
     else if(green > 255) {
       green = 255;
     }
   
     if(blue < 0) {
       blue = 0;
     }
     else if(blue > 255) {
       blue = 255;
     }
   
     temp.red = red;
     temp.green = green;
     temp.blue = blue;
   
     return temp;
   }
   ```

   (b)

   ```c
   int getRed(struct color c) {
     return c.red;
   }
   ```

   (c)

   ```c
   bool equal_color(struct color color1, struct color color2) {
     if((color1.red == color2.red) && (color1.green == color2.green) && (color1.blue == color2.blue)) {
       return true;
     }
     
     return false;
   }
   ```

   (d)

   ```c
   struct color brighter(struct color c) {
     struct color temp;
   
     if((c.red) > 0 && (c.red < 3)) {
       c.red = 3;
     }
     if((c.green) > 0 && (c.green < 3)) {
       c.green = 3;
     }
     if((c.blue) > 0 && (c.blue < 3)) {
       c.blue = 3;
     }
   
     if((c.red == 0) && (c.green == 0) && (c.blue == 0)) {
       temp.red = 3;
       temp.green = 3;
       temp.blue = 3;
   
       return temp;
     }
   
     temp.red = c.red / 0.7;
     temp.green = c.green / 0.7;
     temp.blue = c.blue / 0.7;
   
     if(temp.red > 255) {
       temp.red = 255;
     }
     if(temp.green > 255) {
       temp.green = 255;
     }  
     if(temp.blue > 255) {
       temp.blue = 255;
     }
   
     return temp;
   }
   ```

   (e)

   ```c
   struct color darker(struct color c) {
     struct color temp;
   
     temp.red = c.red * 0.7;
     temp.green = c.green * 0.7;
     temp.blue = c.blue * 0.7;
   
     return temp;  
   }
   ```

10. (a)

   ```c
   int area(struct rectangle r) {
     return (r.lower_right.x - r.upper_left.x) * (r.upper_left.y - r.lower_right.y);
   }
   ```

   (b)

   ```c
   struct point center(struct rectangle r) {
     struct point temp;
   
     temp.x = (r.lower_right.x + r.upper_left.x) / 2;
     temp.y = (r.lower_right.y + r.upper_left.y) / 2;
   
     return temp;
   }
   ```

   (c)

   ```c
   struct rectangle move(struct rectangle r, int x, int y) {
     struct rectangle temp;
   
     temp.lower_right.x = r.lower_right.x + x;
     temp.lower_right.y = r.lower_right.y + y;
     temp.upper_left.x = r.upper_left.x + x;
     temp.upper_left.y = r.upper_left.y + y;
   
     return temp;
   }
   ```

   (d)

   ```c
   bool lies(struct rectangle r, struct point p) {
     if((p.x < r.upper_left.x) || (p.x > r.lower_right.x) || (p.y < r.lower_right.y) || (p.y > r.upper_left.y)) {
       return false;
     }
   
     return true;
   }
   ```

11. 8+8+4 = 20bytes.

12. 4+8+4 = 16bytes.

13. (a), (b), (d) are legal.

    (c) `s.u.rectangle.height = 25;`

    (e) `s.u.circle.radius = 5;`

    (f) `s.u.circle.radius = 5;`

14. (a)

    ```c
    double area(struct shape s) {
      if(s.shape_kind == RECTANGLE) {
        return s.u.rectangle.height * s.u.rectangle.width;
      }
      
      return s.u.circle.radius * s.u.circle.radius * 3.14;
    }
    ```

    (b)

    ```c
    struct shape move(struct shape s, int x, int y) {
      struct shape temp = s;
    
      temp.center.x += x;
      temp.center.y += y;
    
      return temp;
    }
    ```

    (c)

    ```c
    
    struct shape scale(struct shape s, double c) {
      struct shape temp = s;
    
      if(s.shape_kind == RECTANGLE) {
        temp.u.rectangle.height *= c;
        temp.u.rectangle.width *= c;
      }
      else {
        temp.u.circle.radius *= c;
      }
    
      return temp;
    }
    ```

15. 
