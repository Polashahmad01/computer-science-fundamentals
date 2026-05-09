#include<stdio.h>

int sum(int num_one, int num_two);

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  
  int result = sum(a, b);
  printf("%d\n", result);
  
  return 0;
}

int sum(int num_one, int num_two) {
  int val = num_one + num_two;
  return val;
}