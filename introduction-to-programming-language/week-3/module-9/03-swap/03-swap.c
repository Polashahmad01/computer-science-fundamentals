#include<stdio.h>

int main() {
  int a, b;
  a = 10;
  b = 20;
  int temp = a;

  a = b;
  b = temp;

  printf("%d %d\n", a, b);
  
  return 0;
}