1. (a), (g)

2. (e), (f), (i)

3. ```c
   void avg_sum(double a[], int n, double *avg, double *sum) {
     int i;
   
     *sum = 0.0;
     for(i = 0; i < n; i++) {
       *sum += a[i];
     }
     *avg = *sum / n;
   }
   ```

4. ```c
   void swap(int *p, int *q) {
     int temp = *p;
     *p = *q;
     *q = temp;
   }
   ```

5. ```c
   void split_time(long total_sec, int *hr, int *min, int *sec) {
     *hr = total_sec / 3600;
     total_sec -= *hr * 3600;
     *min = total_sec / 60;
     total_sec -= *min * 60;
     *sec = total_sec;
   }
   ```

6. ```c
   void find_two_largest(int a[], int n, int * largest, int *second_largest) {
     for(int i = 0; i < n; i++) {
       if(i == 0) {
         *largest = a[i];
       }
       else if(i == 1) {
         if(a[i] > *largest) {
           *second_largest = *largest;
           *largest = a[i];
         }
         else {
           *second_largest = a[i];
         }
       }
       else {
         if(a[i] > *largest) {
           *second_largest = *largest;
           *largest = a[i];
         }
         else if(a[i] > *second_largest) {
           *second_largest = a[i];
         }
       }
     }
   }
   ```

7. ```c
   void split_date(int day_of_year, int year, int *month, int *day) {
     if((year % 4) != 0 || ((year % 100) == 0 && (year % 400) != 0)) {
       if(day_of_year <= 31) {
         *month = 1;
         *day = day_of_year;
       }
       else if(day_of_year <= 59) {
         *month = 2;
         *day = day_of_year - 31;
       }
       else if(day_of_year <= 90) {
         *month = 3;
         *day = day_of_year - 59;
       }
       else if(day_of_year <= 120) {
         *month = 4;
         *day = day_of_year - 90;
       }
       else if(day_of_year <= 151) {
         *month = 5;
         *day = day_of_year - 120;
       }
       else if(day_of_year <= 181) {
         *month = 6;
         *day = day_of_year - 151;
       }
       else if(day_of_year <= 212) {
         *month = 7;
         *day = day_of_year - 181;
       }
       else if(day_of_year <= 243) {
         *month = 8;
         *day = day_of_year - 212;
       }
       else if(day_of_year <= 273) {
         *month = 9;
         *day = day_of_year - 243;
       }
       else if(day_of_year <= 304) {
         *month = 10;
         *day = day_of_year - 273;
       }
       else if(day_of_year <= 334) {
         *month = 11;
         *day = day_of_year - 304;
       }
       else {
         *month = 12;
         *day = day_of_year - 334;
       }
     }
     else {
       if(day_of_year <= 31) {
         *month = 1;
         *day = day_of_year;
       }
       else if(day_of_year <= 60) {
         *month = 2;
         *day = day_of_year - 31;
       }
       else if(day_of_year <= 91) {
         *month = 3;
         *day = day_of_year - 60;
       }
       else if(day_of_year <= 121) {
         *month = 4;
         *day = day_of_year - 91;
       }
       else if(day_of_year <= 152) {
         *month = 5;
         *day = day_of_year - 121;
       }
       else if(day_of_year <= 182) {
         *month = 6;
         *day = day_of_year - 152;
       }
       else if(day_of_year <= 213) {
         *month = 7;
         *day = day_of_year - 182;
       }
       else if(day_of_year <= 244) {
         *month = 8;
         *day = day_of_year - 213;
       }
       else if(day_of_year <= 274) {
         *month = 9;
         *day = day_of_year - 244;
       }
       else if(day_of_year <= 305) {
         *month = 10;
         *day = day_of_year - 274;
       }
       else if(day_of_year <= 335) {
         *month = 11;
         *day = day_of_year - 305;
       }
       else {
         *month = 12;
         *day = day_of_year - 335;
       }  
     }
   }
   ```

8. ```c
   int *find_largest(int a[], int n) {
     int max = 0;
   
     for(int i = 1; i < n; i++) {
       if(a[max] < a[i]) {
         max = i;
       }
     }
   
     return &a[max];
   }
   ```