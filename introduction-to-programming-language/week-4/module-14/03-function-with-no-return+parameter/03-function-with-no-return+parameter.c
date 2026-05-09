#include<stdio.h>

void sum(int num_one, int num_two);

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  sum(a, b);
  
  return 0;
}

void sum(int num_one, int num_two) {
  int result = num_one + num_two;
  printf("%d", result);
}
