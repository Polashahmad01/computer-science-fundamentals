#include<stdio.h>
#include<limits.h>

void print_min_max(int ARR[], int size);

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

void print_min_max(int ARR[], int size) {
  int max = INT_MIN, min = INT_MAX;

  for(int i = 0; i < size; i++) {
    if(ARR[i] > max) {
      max = ARR[i];
    }
    if(ARR[i] < min) {
      min = ARR[i];
    }
  }

  printf("%d %d\n", min, max);
}
