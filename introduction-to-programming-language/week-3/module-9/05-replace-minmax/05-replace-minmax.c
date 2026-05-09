#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int max_idx = 0;
  int min = arr[0];
  int min_idx = 0;

  for(int i = 0; i < n; i++) {
    if(arr[i] >= max) {
      max = arr[i];
      max_idx = i;
    }

    if(arr[i] <= min) {
      min = arr[i];
      min_idx = i;
    }
  }

  arr[min_idx] = max;
  arr[max_idx] = min;

  for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}