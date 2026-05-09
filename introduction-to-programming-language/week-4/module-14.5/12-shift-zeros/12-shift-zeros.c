#include<stdio.h>

void shift_zeros(int arr[], int n) {

  for(int i = 0; i < n; i++) {
    if(arr[i] != 0) {
      printf("%d ", arr[i]);
    }
  }

  for(int i = 0; i < n; i++) {
    if(arr[i] == 0) {
      printf("%d ", arr[i]);
    }
  }
}

int main() {
  int N;
  scanf("%d", &N);
  int A[N];

  for(int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
  }

  shift_zeros(A,N);
  
  return 0;
}
