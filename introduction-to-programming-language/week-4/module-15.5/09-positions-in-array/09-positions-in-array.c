#include<stdio.h>

void print_array_position(int arr[], int n) {

  for(int i = 0; i < n; i++) {
    if(arr[i] <= 10) {
      printf("A[%d] = %d\n", i, arr[i]);
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

  print_array_position(A, N);
  
  return 0;
}