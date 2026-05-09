#include<stdio.h>

void fun(int* pointer) {
  *pointer = 50;
}

int main() {
  
  int x = 25;
  printf("%d\n", x);
  fun(&x);
  printf("%d\n", x);
  
  return 0;
}