#include<stdio.h>

void func(int x) {
  x = 50;

  printf("Value of x in func function %d\n", x);
}

int main() {
  int x = 50;
  
  printf("Value of x in main func %d\n", x);
  func(x);
  printf("Value of x in main func %d\n", x);

  return 0;
}