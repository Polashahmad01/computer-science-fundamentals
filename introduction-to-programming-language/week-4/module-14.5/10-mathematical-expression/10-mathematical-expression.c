#include<stdio.h>

int main() {
  int A, B, C;
  char S, Q;
  scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);

  if(S == '+' && (A + B == C)) {
    printf("Yes\n");
  } else if(S == '+' && (A + B != C)) {
    printf("%d\n", A + B);
  } else if(S == '-' && (A - B == C)) {
    printf("Yes\n");
  } else if(S == '-' && (A - B != C)) {
    printf("%d\n", A - B);
  } else if(S == '*' && (A * B == C)) {
    printf("Yes\n");
  } else if(S == '*' && (A * B != C)) {
    printf("%d\n", A * B);
  }
  
  return 0;
}