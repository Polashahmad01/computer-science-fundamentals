#include<stdio.h>
#include<stdlib.h>

int count_distinct_number(int arr[], int n) {
  int freq[2001] = {0};
  int count = 0;

  for(int i = 0; i < n; i++) {
    int idx = arr[i] + 1000;

    if(freq[idx] == 0) {
      count++;
      freq[idx] = 1;
    }
  }

  return count;
}

int main() {
  int N;
  scanf("%d", &N);
  int A[N];

  for(int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
  }

  int result = count_distinct_number(A,N);
  printf("%d\n", result);
  
  return 0;
}