#include<stdio.h>

int sum() {
  int num_one, num_two;
  scanf("%d%d", &num_one, &num_two);
  int result = num_one + num_two;
  return result;
}

int main() {
  int val = sum();
  printf("%d\n", val);

  return 0;
}