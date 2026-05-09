#include<stdio.h>

void sum_it(int a, int b) {
  int sum = a + b;
  printf("%d\n", sum);
}

int main() {
  int X, Y;
  scanf("%d%d", &X, &Y);

  sum_it(X, Y);
  
  return 0;
}