#include<stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  int A[N];
  for(int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
  }

  int is_palindrome = 1;

  for(int i = 0, j = N - 1; i < j; i++, j--) {
    if(A[i] != A[j]) {
      is_palindrome = 0;
      printf("NO\n");
      break;
    }
  }

  if(is_palindrome == 1) {
    printf("YES\n");
  }
  
  return 0;
}
