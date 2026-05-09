#include<stdio.h>

int main() {
  int num = 25;
  printf("%d\n", num);
  printf("%p\n", &num);

  int* num_pointer = &num;
  printf("%p\n", num_pointer);
  printf("%p\n", &num_pointer);

  *num_pointer = 50;
  printf("%p\n", num_pointer);
  printf("%d\n", *num_pointer);

  return 0;
}