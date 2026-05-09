#include<stdio.h>
#include<string.h>

int main() {
  char A[11], B[11];
  scanf("%s%s", A, B);

  int length_a = strlen(A);
  int length_b = strlen(B);

  printf("%d %d\n", length_a, length_b);
  printf("%s%s\n", A, B);
  A[0] = B[0];
  B[0] = A[0];
  printf("%s %s", A, B);
  
  return 0;
}