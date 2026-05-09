#include<stdio.h>
#include<limits.h>

void print_min_max(int arr[], int n) {
  int min = INT_MAX;
  int max = INT_MIN;

  for(int i = 0; i < n; i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
    if(arr[i] < min) {
      min = arr[i];
    }
  }

  printf("%d %d\n", min, max);
}

int main() {
  int N;
  scanf("%d", &N);
  int A[N];

  for(int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
  }

  print_min_max(A, N);
  
  return 0;
}