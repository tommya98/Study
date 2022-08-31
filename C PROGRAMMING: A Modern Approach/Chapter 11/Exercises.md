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