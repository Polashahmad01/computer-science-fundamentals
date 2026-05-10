#include<stdio.h>

void print_even_indices(int a[], int n, int idx) {

  if(idx > n - 1) {
    return;
  }
  
  print_even_indices(a, n, idx += 1);
  
  if(idx % 2 == 0) {
    printf("Idx: -- %d Val: -- %d\n", idx, a[idx]);
  }
}

int main() {
  int N;
  scanf("%d", &N);
  int A[N];

  for(int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
  }

  print_even_indices(A, N, 0);
  
  return 0;
}