#include <stdio.h>

void ABC(int*, int);

int main(void) {
  int arr[10];

  for(int i = 0; i < 10; i++)
    scanf("%d", &arr[i]);

  for(int i = 0; i < 10; i++)
    ABC(arr, i);

  for(int i = 0; i < 10; i++)
    printf(" %d", arr[i]);

  return 0;
}

void ABC(int* arr, int k){
  int max, len, temp;

  for(int i = k; i < 10; i++) {
    if(i == k){
      max = i;
      continue;
    }
    if(arr[max] < arr[i])
      max = i;
  }

  temp = arr[max];
  arr[max] = arr[k];
  arr[k] = temp;
}