#include<stdio.h>

void sum();

int main() {
  sum();
  
  return 0;
}

void sum() {
  int a, b;
  scanf("%d%d", &a, &b);
  int result = a + b;
  printf("%d", result);
}
